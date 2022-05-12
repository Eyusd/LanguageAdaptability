

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NetworkPT_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "NetworkPT_.h"

#include <new>

namespace policy_translation {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *NetworkPT_Request_TYPENAME = "policy_translation::srv::dds_::NetworkPT_Request_";

            DDS_TypeCode* NetworkPT_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NetworkPT_Request__g_tc_language__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode NetworkPT_Request__g_tc_robot__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member NetworkPT_Request__g_tc_members[5]=
                {

                    {
                        (char *)"image_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"language_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"robot_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"reset_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"plot_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode NetworkPT_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"policy_translation::srv::dds_::NetworkPT_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        NetworkPT_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NetworkPT_Request_*/

                if (is_initialized) {
                    return &NetworkPT_Request__g_tc;
                }

                NetworkPT_Request__g_tc_robot__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NetworkPT_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::Image__get_typecode();

                NetworkPT_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&NetworkPT_Request__g_tc_language__string;

                NetworkPT_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& NetworkPT_Request__g_tc_robot__sequence;
                NetworkPT_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                NetworkPT_Request__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &NetworkPT_Request__g_tc;
            }

            RTIBool NetworkPT_Request__initialize(
                NetworkPT_Request_* sample) {
                return policy_translation::srv::dds_::NetworkPT_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NetworkPT_Request__initialize_ex(
                NetworkPT_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return policy_translation::srv::dds_::NetworkPT_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NetworkPT_Request__initialize_w_params(
                NetworkPT_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::Image__initialize_w_params(&sample->image_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->language_= DDS_String_alloc ((0));
                    if (sample->language_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->language_!= NULL) { 
                        sample->language_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->robot_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->robot_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->robot_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->robot_, 0);
                }

                if (!RTICdrType_initBoolean(&sample->reset_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->plot_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void NetworkPT_Request__finalize(
                NetworkPT_Request_* sample)
            {

                policy_translation::srv::dds_::NetworkPT_Request__finalize_ex(sample,RTI_TRUE);
            }

            void NetworkPT_Request__finalize_ex(
                NetworkPT_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                policy_translation::srv::dds_::NetworkPT_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void NetworkPT_Request__finalize_w_params(
                NetworkPT_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::Image__finalize_w_params(&sample->image_,deallocParams);

                if (sample->language_ != NULL) {
                    DDS_String_free(sample->language_);
                    sample->language_=NULL;

                }
                DDS_FloatSeq_finalize(&sample->robot_);

            }

            void NetworkPT_Request__finalize_optional_members(
                NetworkPT_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                sensor_msgs::msg::dds_::Image__finalize_optional_members(&sample->image_, deallocParams->delete_pointers);
            }

            RTIBool NetworkPT_Request__copy(
                NetworkPT_Request_* dst,
                const NetworkPT_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::Image__copy(
                        &dst->image_,(const sensor_msgs::msg::dds_::Image_*)&src->image_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->language_, src->language_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_FloatSeq_copy(&dst->robot_ ,
                    &src->robot_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->reset_, &src->reset_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->plot_, &src->plot_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'NetworkPT_Request_' sequence class.
            */
            #define T NetworkPT_Request_
            #define TSeq NetworkPT_Request_Seq

            #define T_initialize_w_params policy_translation::srv::dds_::NetworkPT_Request__initialize_w_params

            #define T_finalize_w_params   policy_translation::srv::dds_::NetworkPT_Request__finalize_w_params
            #define T_copy       policy_translation::srv::dds_::NetworkPT_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace policy_translation  */
namespace policy_translation {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *NetworkPT_Response_TYPENAME = "policy_translation::srv::dds_::NetworkPT_Response_";

            DDS_TypeCode* NetworkPT_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode NetworkPT_Response__g_tc_trajectory__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode NetworkPT_Response__g_tc_confidence__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode NetworkPT_Response__g_tc_weights__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member NetworkPT_Response__g_tc_members[5]=
                {

                    {
                        (char *)"trajectory_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"confidence_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"timesteps_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"weights_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"phase_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode NetworkPT_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"policy_translation::srv::dds_::NetworkPT_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        NetworkPT_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for NetworkPT_Response_*/

                if (is_initialized) {
                    return &NetworkPT_Response__g_tc;
                }

                NetworkPT_Response__g_tc_trajectory__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NetworkPT_Response__g_tc_confidence__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NetworkPT_Response__g_tc_weights__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                NetworkPT_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& NetworkPT_Response__g_tc_trajectory__sequence;
                NetworkPT_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& NetworkPT_Response__g_tc_confidence__sequence;
                NetworkPT_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                NetworkPT_Response__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& NetworkPT_Response__g_tc_weights__sequence;
                NetworkPT_Response__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &NetworkPT_Response__g_tc;
            }

            RTIBool NetworkPT_Response__initialize(
                NetworkPT_Response_* sample) {
                return policy_translation::srv::dds_::NetworkPT_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool NetworkPT_Response__initialize_ex(
                NetworkPT_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return policy_translation::srv::dds_::NetworkPT_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool NetworkPT_Response__initialize_w_params(
                NetworkPT_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->trajectory_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->trajectory_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->trajectory_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->trajectory_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->confidence_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->confidence_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->confidence_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->confidence_, 0);
                }

                if (!RTICdrType_initLong(&sample->timesteps_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->weights_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->weights_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->weights_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->weights_, 0);
                }

                if (!RTICdrType_initFloat(&sample->phase_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void NetworkPT_Response__finalize(
                NetworkPT_Response_* sample)
            {

                policy_translation::srv::dds_::NetworkPT_Response__finalize_ex(sample,RTI_TRUE);
            }

            void NetworkPT_Response__finalize_ex(
                NetworkPT_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                policy_translation::srv::dds_::NetworkPT_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void NetworkPT_Response__finalize_w_params(
                NetworkPT_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_FloatSeq_finalize(&sample->trajectory_);

                DDS_FloatSeq_finalize(&sample->confidence_);

                DDS_FloatSeq_finalize(&sample->weights_);

            }

            void NetworkPT_Response__finalize_optional_members(
                NetworkPT_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool NetworkPT_Response__copy(
                NetworkPT_Response_* dst,
                const NetworkPT_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_FloatSeq_copy(&dst->trajectory_ ,
                    &src->trajectory_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_FloatSeq_copy(&dst->confidence_ ,
                    &src->confidence_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->timesteps_, &src->timesteps_)) { 
                        return RTI_FALSE;
                    }
                    if (!DDS_FloatSeq_copy(&dst->weights_ ,
                    &src->weights_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyFloat (
                        &dst->phase_, &src->phase_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'NetworkPT_Response_' sequence class.
            */
            #define T NetworkPT_Response_
            #define TSeq NetworkPT_Response_Seq

            #define T_initialize_w_params policy_translation::srv::dds_::NetworkPT_Response__initialize_w_params

            #define T_finalize_w_params   policy_translation::srv::dds_::NetworkPT_Response__finalize_w_params
            #define T_copy       policy_translation::srv::dds_::NetworkPT_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace policy_translation  */

