

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TuneNetwork_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TuneNetwork__1151660601_h
#define TuneNetwork__1151660601_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace policy_translation {
    namespace srv {
        namespace dds_ {

            extern const char *TuneNetwork_Request_TYPENAME;

            struct TuneNetwork_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TuneNetwork_Request_TypeSupport;
            class TuneNetwork_Request_DataWriter;
            class TuneNetwork_Request_DataReader;
            #endif

            class TuneNetwork_Request_ 
            {
              public:
                typedef struct TuneNetwork_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TuneNetwork_Request_TypeSupport TypeSupport;
                typedef TuneNetwork_Request_DataWriter DataWriter;
                typedef TuneNetwork_Request_DataReader DataReader;
                #endif

                DDS_Long   epochs_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TuneNetwork_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TuneNetwork_Request_Seq, TuneNetwork_Request_);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Request__initialize(
                TuneNetwork_Request_* self);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Request__initialize_ex(
                TuneNetwork_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Request__initialize_w_params(
                TuneNetwork_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TuneNetwork_Request__finalize(
                TuneNetwork_Request_* self);

            NDDSUSERDllExport
            void TuneNetwork_Request__finalize_ex(
                TuneNetwork_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TuneNetwork_Request__finalize_w_params(
                TuneNetwork_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TuneNetwork_Request__finalize_optional_members(
                TuneNetwork_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TuneNetwork_Request__copy(
                TuneNetwork_Request_* dst,
                const TuneNetwork_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace policy_translation  */
namespace policy_translation {
    namespace srv {
        namespace dds_ {

            extern const char *TuneNetwork_Response_TYPENAME;

            struct TuneNetwork_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TuneNetwork_Response_TypeSupport;
            class TuneNetwork_Response_DataWriter;
            class TuneNetwork_Response_DataReader;
            #endif

            class TuneNetwork_Response_ 
            {
              public:
                typedef struct TuneNetwork_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TuneNetwork_Response_TypeSupport TypeSupport;
                typedef TuneNetwork_Response_DataWriter DataWriter;
                typedef TuneNetwork_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TuneNetwork_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TuneNetwork_Response_Seq, TuneNetwork_Response_);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Response__initialize(
                TuneNetwork_Response_* self);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Response__initialize_ex(
                TuneNetwork_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TuneNetwork_Response__initialize_w_params(
                TuneNetwork_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TuneNetwork_Response__finalize(
                TuneNetwork_Response_* self);

            NDDSUSERDllExport
            void TuneNetwork_Response__finalize_ex(
                TuneNetwork_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TuneNetwork_Response__finalize_w_params(
                TuneNetwork_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TuneNetwork_Response__finalize_optional_members(
                TuneNetwork_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TuneNetwork_Response__copy(
                TuneNetwork_Response_* dst,
                const TuneNetwork_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace policy_translation  */

#endif /* TuneNetwork_ */

