import numpy as np
import tensorflow as tf
import json
import cv2
import pathlib

def imgmsg_to_cv2(path, desired_encoding="passthrough"):  
    with open(path) as f:
        img_msg = json.load(f)
        f.close()
    height,width,_ = np.array(img_msg['image']).shape
    dtype      = "uint8"
    n_channels = 3

    dtype = np.dtype(dtype)
    dtype = dtype.newbyteorder('<')

    img_buf = np.asarray(img_msg['image'], dtype=dtype) if isinstance(img_msg['image'], list) else img_msg['image']
    im = np.ndarray(shape=(height, width, n_channels),dtype=dtype, buffer=img_buf)

    if desired_encoding == 'passthrough':
        return im


def classFilter(classdata):
    classes = []
    for i in range(classdata.shape[0]):
        classes.append(classdata[i].argmax())
    return classes

def IOU_mod(box1, box2):
    x1, y1, x2, y2 = box1
    x3, y3, x4, y4 = box2
    x_inter1 = max(x1, x3)
    y_inter1 = max(y1, y3)
    x_inter2 = min(x2, x4)
    y_inter2 = min(y2, y4)
    width_inter = abs(x_inter2 - x_inter1)
    height_inter = abs(y_inter2 - y_inter1)
    area_inter = width_inter * height_inter
    width_box1 = abs(x2 - x1)
    height_box1 = abs(y2 - y1)
    width_box2 = abs(x4 - x3)
    height_box2 = abs(y4 - y3)
    area_box1 = width_box1 * height_box1
    area_box2 = width_box2 * height_box2
    area_union = area_box1 + area_box2 - area_inter
    iou = area_inter / area_union
    #mo = max(iou / area_box1, iou / area_box2)
    return iou


def diverseSelection(bundle, thres, size):
    scores, classes, xyxy = bundle;
    inds = scores.argsort().astype('int')[::-1]
    m = np.argmax(scores[inds]<thres)
    inds = inds[:m]
    sorted_classes = classes[inds]
    sorted_xyxy = xyxy[inds]
    
    dic = {'detection_classes': [sorted_classes[0]], 'detection_boxes': [sorted_xyxy[0]]}
    curs,i,n = 1,0,1
    while curs<m and n<size:
        i = 0
        while curs+i<m and i<10 and n<size:
            check = True
            for box_to_keep in dic['detection_boxes']:
                if IOU_mod(sorted_xyxy[curs+i], box_to_keep) > 0.5:
                    check = False
                    break
            if check:
                n+=1
                dic['detection_classes'].append(sorted_classes[curs+i])
                dic['detection_boxes'].append(sorted_xyxy[curs+i])
            i+=1
        curs += i
    for _ in range(n,size):
        dic['detection_classes'].append(0.0)
        dic['detection_boxes'].append(np.array([0.0, 0.0, 0.0, 0.0]))
    return np.array(dic['detection_classes']), np.array(dic['detection_boxes'])

def YOLO_detect(output_data):
    output_data = output_data['output_0'].numpy()[0]                                             # x(1, 25200, 7) to x(25200, 7)
    boxes = np.squeeze(output_data[..., :4])                                    # boxes  [25200, 4]
    scores = np.squeeze( output_data[..., 4:5])                                 # confidences  [25200, 1]
    classes = np.array(classFilter(output_data[..., 5:]))

    # Convert [x, y, w, h] to [x1, y1, x2, y2]
    x, y, w, h = boxes[..., 0], boxes[..., 1], boxes[..., 2], boxes[..., 3]     #xywh
    xyxy = np.array([x - w / 2, y - h / 2, x + w / 2, y + h / 2]).transpose()   # xywh to xyxy   [4, 25200]

    sorted_classes, sorted_xyxy = diverseSelection((scores, classes, xyxy), 0.8, 6)

    return sorted_classes.astype(dtype=np.int32), sorted_xyxy.astype(dtype=np.float32)


def test():
    od_path = "./yolo"
    od_path    = pathlib.Path(od_path)/"saved_model"
    yolo = tf.saved_model.load(str(od_path))
    yolo = yolo.signatures['serving_default']
    yolo.trainable = False

    image = imgmsg_to_cv2("../GDrive/testdata/0grWV6WGvn5_1.json")
    resized = cv2.resize(image, (640,640), interpolation = cv2.INTER_AREA)
    input = tf.convert_to_tensor([resized], dtype=tf.float32)
    image_features = yolo(input)

    classes,boxes = YOLO_detect(image_features)

    features = np.concatenate((np.expand_dims(classes,1), boxes), axis=1)