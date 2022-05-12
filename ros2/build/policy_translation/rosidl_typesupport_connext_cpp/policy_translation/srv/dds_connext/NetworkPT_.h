

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NetworkPT_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NetworkPT__404559626_h
#define NetworkPT__404559626_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/Image_.h"
namespace policy_translation {
    namespace srv {
        namespace dds_ {

            extern const char *NetworkPT_Request_TYPENAME;

            struct NetworkPT_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NetworkPT_Request_TypeSupport;
            class NetworkPT_Request_DataWriter;
            class NetworkPT_Request_DataReader;
            #endif

            class NetworkPT_Request_ 
            {
              public:
                typedef struct NetworkPT_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NetworkPT_Request_TypeSupport TypeSupport;
                typedef NetworkPT_Request_DataWriter DataWriter;
                typedef NetworkPT_Request_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::Image_   image_ ;
                DDS_Char *   language_ ;
                DDS_FloatSeq  robot_ ;
                DDS_Boolean   reset_ ;
                DDS_Boolean   plot_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NetworkPT_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NetworkPT_Request_Seq, NetworkPT_Request_);

            NDDSUSERDllExport
            RTIBool NetworkPT_Request__initialize(
                NetworkPT_Request_* self);

            NDDSUSERDllExport
            RTIBool NetworkPT_Request__initialize_ex(
                NetworkPT_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NetworkPT_Request__initialize_w_params(
                NetworkPT_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NetworkPT_Request__finalize(
                NetworkPT_Request_* self);

            NDDSUSERDllExport
            void NetworkPT_Request__finalize_ex(
                NetworkPT_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NetworkPT_Request__finalize_w_params(
                NetworkPT_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NetworkPT_Request__finalize_optional_members(
                NetworkPT_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NetworkPT_Request__copy(
                NetworkPT_Request_* dst,
                const NetworkPT_Request_* src);

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

            extern const char *NetworkPT_Response_TYPENAME;

            struct NetworkPT_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NetworkPT_Response_TypeSupport;
            class NetworkPT_Response_DataWriter;
            class NetworkPT_Response_DataReader;
            #endif

            class NetworkPT_Response_ 
            {
              public:
                typedef struct NetworkPT_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NetworkPT_Response_TypeSupport TypeSupport;
                typedef NetworkPT_Response_DataWriter DataWriter;
                typedef NetworkPT_Response_DataReader DataReader;
                #endif

                DDS_FloatSeq  trajectory_ ;
                DDS_FloatSeq  confidence_ ;
                DDS_Long   timesteps_ ;
                DDS_FloatSeq  weights_ ;
                DDS_Float   phase_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NetworkPT_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NetworkPT_Response_Seq, NetworkPT_Response_);

            NDDSUSERDllExport
            RTIBool NetworkPT_Response__initialize(
                NetworkPT_Response_* self);

            NDDSUSERDllExport
            RTIBool NetworkPT_Response__initialize_ex(
                NetworkPT_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NetworkPT_Response__initialize_w_params(
                NetworkPT_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NetworkPT_Response__finalize(
                NetworkPT_Response_* self);

            NDDSUSERDllExport
            void NetworkPT_Response__finalize_ex(
                NetworkPT_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NetworkPT_Response__finalize_w_params(
                NetworkPT_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NetworkPT_Response__finalize_optional_members(
                NetworkPT_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NetworkPT_Response__copy(
                NetworkPT_Response_* dst,
                const NetworkPT_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace policy_translation  */

#endif /* NetworkPT_ */

