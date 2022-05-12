

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Dummy_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Dummy__997964621_h
#define Dummy__997964621_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/Image_.h"
namespace policy_translation {
    namespace msg {
        namespace dds_ {

            extern const char *Dummy_TYPENAME;

            struct Dummy_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Dummy_TypeSupport;
            class Dummy_DataWriter;
            class Dummy_DataReader;
            #endif

            class Dummy_ 
            {
              public:
                typedef struct Dummy_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Dummy_TypeSupport TypeSupport;
                typedef Dummy_DataWriter DataWriter;
                typedef Dummy_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::Image_   image_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Dummy__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Dummy_Seq, Dummy_);

            NDDSUSERDllExport
            RTIBool Dummy__initialize(
                Dummy_* self);

            NDDSUSERDllExport
            RTIBool Dummy__initialize_ex(
                Dummy_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Dummy__initialize_w_params(
                Dummy_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Dummy__finalize(
                Dummy_* self);

            NDDSUSERDllExport
            void Dummy__finalize_ex(
                Dummy_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Dummy__finalize_w_params(
                Dummy_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Dummy__finalize_optional_members(
                Dummy_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Dummy__copy(
                Dummy_* dst,
                const Dummy_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace policy_translation  */

#endif /* Dummy_ */

