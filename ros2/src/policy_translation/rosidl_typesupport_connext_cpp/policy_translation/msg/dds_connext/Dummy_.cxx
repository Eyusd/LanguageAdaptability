

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Dummy_.idl using "rtiddsgen".
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

#include "Dummy_.h"

#include <new>

namespace policy_translation {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Dummy_TYPENAME = "policy_translation::msg::dds_::Dummy_";

            DDS_TypeCode* Dummy__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Dummy__g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode Dummy__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"policy_translation::msg::dds_::Dummy_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Dummy__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Dummy_*/

                if (is_initialized) {
                    return &Dummy__g_tc;
                }

                Dummy__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::Image__get_typecode();

                is_initialized = RTI_TRUE;

                return &Dummy__g_tc;
            }

            RTIBool Dummy__initialize(
                Dummy_* sample) {
                return policy_translation::msg::dds_::Dummy__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Dummy__initialize_ex(
                Dummy_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return policy_translation::msg::dds_::Dummy__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Dummy__initialize_w_params(
                Dummy_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

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
                return RTI_TRUE;
            }

            void Dummy__finalize(
                Dummy_* sample)
            {

                policy_translation::msg::dds_::Dummy__finalize_ex(sample,RTI_TRUE);
            }

            void Dummy__finalize_ex(
                Dummy_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                policy_translation::msg::dds_::Dummy__finalize_w_params(
                    sample,&deallocParams);
            }

            void Dummy__finalize_w_params(
                Dummy_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::Image__finalize_w_params(&sample->image_,deallocParams);

            }

            void Dummy__finalize_optional_members(
                Dummy_* sample, RTIBool deletePointers)
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

            RTIBool Dummy__copy(
                Dummy_* dst,
                const Dummy_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::Image__copy(
                        &dst->image_,(const sensor_msgs::msg::dds_::Image_*)&src->image_)) {
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
            * Configure and implement 'Dummy_' sequence class.
            */
            #define T Dummy_
            #define TSeq Dummy_Seq

            #define T_initialize_w_params policy_translation::msg::dds_::Dummy__initialize_w_params

            #define T_finalize_w_params   policy_translation::msg::dds_::Dummy__finalize_w_params
            #define T_copy       policy_translation::msg::dds_::Dummy__copy

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
    } /* namespace msg  */
} /* namespace policy_translation  */

