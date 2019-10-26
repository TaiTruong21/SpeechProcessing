#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// NAudio.Dsp.WdlResampler/WDL_Resampler_IIRFilter
struct WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C;
// NAudio.Wave.WaveFileWriter
struct WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4;
// NAudio.Wave.WaveFormat
struct WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Double[0...,0...]
struct DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3536F72AC0EC1D785E357FED37A3E83C4BC651E2;
IL2CPP_EXTERN_C String_t* _stringLiteral37F56740BBF41C4BB6C0A29A90ECEC58D6601770;
IL2CPP_EXTERN_C String_t* _stringLiteral4544E754370903247A6487F49B70E44D32632A60;
IL2CPP_EXTERN_C String_t* _stringLiteral58DBFE3D658060E6133943C5784E7700B07EBF87;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20D5665F15CE739F38E7BF457340F3CEA53B80;
IL2CPP_EXTERN_C String_t* _stringLiteral87F28D81878FCA0A299EBD4261ECF3A6616729B0;
IL2CPP_EXTERN_C String_t* _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733;
IL2CPP_EXTERN_C String_t* _stringLiteral9B19358D780291752D7266661AA5D7424E5BAD98;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE9D8FA6F269A94637158C47DF92276C5546139C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter_Apply_m606D438A0B59152012922F8AEA8620AF25A493FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter__ctor_m94E9A23EE4F24391F625248D609365F6DF6B34D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter_denormal_filter_mBDE604F5AA1AD41F371F44120C91A8519775D4B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WDL_Resampler_IIRFilter_setParms_mCA575FB1DFFAB419F56E399055BF123210C1839C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Dispose_m0F9DFD51499EC8C280800FD5C7795F24B90F27CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Finalize_m2073B271038EF5391398ED74E784095993B53902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Flush_m18B6D9C9EE92AE816EDAD16C791743135933E871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_UpdateHeader_m4D7343A69EAA12BCB386EE33F238C74E4DEEF43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_WriteSamples_mCB0C533E3F61B3235FCAC33B6798F3AA906331EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_Write_m024446D94F0FD957AB83FBE5692D4B1CC3F11156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter__ctor_m43E2FA8F1B3EB079832E09C2C005C3DAEC58C045_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_CanRead_m34558C0FAA44EC22052EE21BCC9E5576CA47A14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_CanSeek_m6EBFA5E630E35ABE3495CB91CBE74A531D6D2C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_CanWrite_mDE42E484D4D3A979D7D79A97748226CDD2B6CDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_Filename_m3C058FFC0A3D045A7CC22AC87A5E9AD6F93B925E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_Length_m44C0AFACED46C95A692A9A59BB7BCABCEB7CD181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_Position_m59C1E4CFF1CAF73B058272DDE190EC37D56529FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat_Equals_mA9990E495A988FB273D5906253E3748F94EF2458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat_GetHashCode_mD8342452E46D285D6F682E81900992BDDE080A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat_ToString_m55A5214A49B927F603CDBE20AF53B3E323F1864A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter_Apply_m606D438A0B59152012922F8AEA8620AF25A493FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter__ctor_m94E9A23EE4F24391F625248D609365F6DF6B34D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter_denormal_filter_mBDE604F5AA1AD41F371F44120C91A8519775D4B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WDL_Resampler_IIRFilter_setParms_mCA575FB1DFFAB419F56E399055BF123210C1839C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Dispose_m0F9DFD51499EC8C280800FD5C7795F24B90F27CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Finalize_m2073B271038EF5391398ED74E784095993B53902_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Flush_m18B6D9C9EE92AE816EDAD16C791743135933E871_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_UpdateHeader_m4D7343A69EAA12BCB386EE33F238C74E4DEEF43F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_WriteSamples_mCB0C533E3F61B3235FCAC33B6798F3AA906331EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_Write_m024446D94F0FD957AB83FBE5692D4B1CC3F11156_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter__ctor_m43E2FA8F1B3EB079832E09C2C005C3DAEC58C045_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_CanRead_m34558C0FAA44EC22052EE21BCC9E5576CA47A14A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_CanSeek_m6EBFA5E630E35ABE3495CB91CBE74A531D6D2C15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_CanWrite_mDE42E484D4D3A979D7D79A97748226CDD2B6CDC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_Filename_m3C058FFC0A3D045A7CC22AC87A5E9AD6F93B925E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_Length_m44C0AFACED46C95A692A9A59BB7BCABCEB7CD181_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_Position_m59C1E4CFF1CAF73B058272DDE190EC37D56529FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat_Equals_mA9990E495A988FB273D5906253E3748F94EF2458_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat_GetHashCode_mD8342452E46D285D6F682E81900992BDDE080A3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat_ToString_m55A5214A49B927F603CDBE20AF53B3E323F1864A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter
struct  WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C  : public RuntimeObject
{
public:
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_fpos
	double ___m_fpos_0;
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_a1
	double ___m_a1_1;
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_a2
	double ___m_a2_2;
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_b0
	double ___m_b0_3;
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_b1
	double ___m_b1_4;
	// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_b2
	double ___m_b2_5;
	// System.Double[0...,0...] NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::m_hist
	DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* ___m_hist_6;

public:
	inline static int32_t get_offset_of_m_fpos_0() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_fpos_0)); }
	inline double get_m_fpos_0() const { return ___m_fpos_0; }
	inline double* get_address_of_m_fpos_0() { return &___m_fpos_0; }
	inline void set_m_fpos_0(double value)
	{
		___m_fpos_0 = value;
	}

	inline static int32_t get_offset_of_m_a1_1() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_a1_1)); }
	inline double get_m_a1_1() const { return ___m_a1_1; }
	inline double* get_address_of_m_a1_1() { return &___m_a1_1; }
	inline void set_m_a1_1(double value)
	{
		___m_a1_1 = value;
	}

	inline static int32_t get_offset_of_m_a2_2() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_a2_2)); }
	inline double get_m_a2_2() const { return ___m_a2_2; }
	inline double* get_address_of_m_a2_2() { return &___m_a2_2; }
	inline void set_m_a2_2(double value)
	{
		___m_a2_2 = value;
	}

	inline static int32_t get_offset_of_m_b0_3() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_b0_3)); }
	inline double get_m_b0_3() const { return ___m_b0_3; }
	inline double* get_address_of_m_b0_3() { return &___m_b0_3; }
	inline void set_m_b0_3(double value)
	{
		___m_b0_3 = value;
	}

	inline static int32_t get_offset_of_m_b1_4() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_b1_4)); }
	inline double get_m_b1_4() const { return ___m_b1_4; }
	inline double* get_address_of_m_b1_4() { return &___m_b1_4; }
	inline void set_m_b1_4(double value)
	{
		___m_b1_4 = value;
	}

	inline static int32_t get_offset_of_m_b2_5() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_b2_5)); }
	inline double get_m_b2_5() const { return ___m_b2_5; }
	inline double* get_address_of_m_b2_5() { return &___m_b2_5; }
	inline void set_m_b2_5(double value)
	{
		___m_b2_5 = value;
	}

	inline static int32_t get_offset_of_m_hist_6() { return static_cast<int32_t>(offsetof(WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C, ___m_hist_6)); }
	inline DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* get_m_hist_6() const { return ___m_hist_6; }
	inline DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175** get_address_of_m_hist_6() { return &___m_hist_6; }
	inline void set_m_hist_6(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* value)
	{
		___m_hist_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hist_6), (void*)value);
	}
};


// NAudio.Wave.WaveFormat
struct  WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB  : public RuntimeObject
{
public:
	// System.Int32 NAudio.Wave.WaveFormat::_channels
	int32_t ____channels_0;
	// System.Int32 NAudio.Wave.WaveFormat::_sampleRate
	int32_t ____sampleRate_1;

public:
	inline static int32_t get_offset_of__channels_0() { return static_cast<int32_t>(offsetof(WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB, ____channels_0)); }
	inline int32_t get__channels_0() const { return ____channels_0; }
	inline int32_t* get_address_of__channels_0() { return &____channels_0; }
	inline void set__channels_0(int32_t value)
	{
		____channels_0 = value;
	}

	inline static int32_t get_offset_of__sampleRate_1() { return static_cast<int32_t>(offsetof(WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB, ____sampleRate_1)); }
	inline int32_t get__sampleRate_1() const { return ____sampleRate_1; }
	inline int32_t* get_address_of__sampleRate_1() { return &____sampleRate_1; }
	inline void set__sampleRate_1(int32_t value)
	{
		____sampleRate_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Char[] System.IO.BinaryWriter::_tmpOneCharBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____tmpOneCharBuffer_6;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_7;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_8;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__tmpOneCharBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____tmpOneCharBuffer_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__tmpOneCharBuffer_6() const { return ____tmpOneCharBuffer_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__tmpOneCharBuffer_6() { return &____tmpOneCharBuffer_6; }
	inline void set__tmpOneCharBuffer_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____tmpOneCharBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tmpOneCharBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__largeByteBuffer_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_7() const { return ____largeByteBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_7() { return &____largeByteBuffer_7; }
	inline void set__largeByteBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_8() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_8)); }
	inline int32_t get__maxChars_8() const { return ____maxChars_8; }
	inline int32_t* get_address_of__maxChars_8() { return &____maxChars_8; }
	inline void set__maxChars_8(int32_t value)
	{
		____maxChars_8 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// NAudio.Wave.WaveFileWriter
struct  WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.IO.Stream NAudio.Wave.WaveFileWriter::_outStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____outStream_5;
	// System.IO.BinaryWriter NAudio.Wave.WaveFileWriter::_writer
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ____writer_6;
	// System.Int64 NAudio.Wave.WaveFileWriter::_dataSizePos
	int64_t ____dataSizePos_7;
	// System.Int64 NAudio.Wave.WaveFileWriter::_factSampleCountPos
	int64_t ____factSampleCountPos_8;
	// System.Int32 NAudio.Wave.WaveFileWriter::_dataChunkSize
	int32_t ____dataChunkSize_9;
	// System.String NAudio.Wave.WaveFileWriter::<Filename>k__BackingField
	String_t* ___U3CFilenameU3Ek__BackingField_10;
	// NAudio.Wave.WaveFormat NAudio.Wave.WaveFileWriter::<WaveFormat>k__BackingField
	WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___U3CWaveFormatU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of__outStream_5() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ____outStream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__outStream_5() const { return ____outStream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__outStream_5() { return &____outStream_5; }
	inline void set__outStream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____outStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outStream_5), (void*)value);
	}

	inline static int32_t get_offset_of__writer_6() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ____writer_6)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get__writer_6() const { return ____writer_6; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of__writer_6() { return &____writer_6; }
	inline void set__writer_6(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		____writer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_6), (void*)value);
	}

	inline static int32_t get_offset_of__dataSizePos_7() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ____dataSizePos_7)); }
	inline int64_t get__dataSizePos_7() const { return ____dataSizePos_7; }
	inline int64_t* get_address_of__dataSizePos_7() { return &____dataSizePos_7; }
	inline void set__dataSizePos_7(int64_t value)
	{
		____dataSizePos_7 = value;
	}

	inline static int32_t get_offset_of__factSampleCountPos_8() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ____factSampleCountPos_8)); }
	inline int64_t get__factSampleCountPos_8() const { return ____factSampleCountPos_8; }
	inline int64_t* get_address_of__factSampleCountPos_8() { return &____factSampleCountPos_8; }
	inline void set__factSampleCountPos_8(int64_t value)
	{
		____factSampleCountPos_8 = value;
	}

	inline static int32_t get_offset_of__dataChunkSize_9() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ____dataChunkSize_9)); }
	inline int32_t get__dataChunkSize_9() const { return ____dataChunkSize_9; }
	inline int32_t* get_address_of__dataChunkSize_9() { return &____dataChunkSize_9; }
	inline void set__dataChunkSize_9(int32_t value)
	{
		____dataChunkSize_9 = value;
	}

	inline static int32_t get_offset_of_U3CFilenameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ___U3CFilenameU3Ek__BackingField_10)); }
	inline String_t* get_U3CFilenameU3Ek__BackingField_10() const { return ___U3CFilenameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CFilenameU3Ek__BackingField_10() { return &___U3CFilenameU3Ek__BackingField_10; }
	inline void set_U3CFilenameU3Ek__BackingField_10(String_t* value)
	{
		___U3CFilenameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilenameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaveFormatU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4, ___U3CWaveFormatU3Ek__BackingField_11)); }
	inline WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * get_U3CWaveFormatU3Ek__BackingField_11() const { return ___U3CWaveFormatU3Ek__BackingField_11; }
	inline WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB ** get_address_of_U3CWaveFormatU3Ek__BackingField_11() { return &___U3CWaveFormatU3Ek__BackingField_11; }
	inline void set_U3CWaveFormatU3Ek__BackingField_11(WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * value)
	{
		___U3CWaveFormatU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWaveFormatU3Ek__BackingField_11), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileShare
struct  FileShare_t9AA8473BBE5DD8532CEAF3F48F26DA5A25A93684 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileShare_t9AA8473BBE5DD8532CEAF3F48F26DA5A25A93684, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[0...,0...]
struct DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NAudio.Dsp.WdlResampler/WDL_Resampler_IIRFilter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, const RuntimeMethod* method);
// System.Double NAudio.Dsp.WdlResampler/WDL_Resampler_IIRFilter::denormal_filter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88 (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, double ___x0, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::set_WaveFormat(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2859E6B900197645E2B9DC8E447F2A6F25208406 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding1, const RuntimeMethod* method);
// System.Int32 NAudio.Wave.WaveFormat::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518 (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method);
// System.Int32 NAudio.Wave.WaveFormat::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63 (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::CreateFactChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::WriteDataChunkHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::.ctor(System.IO.Stream,NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___outStream0, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___format1, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::set_Filename(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean NAudio.Wave.WaveFileWriter::HasFactChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::WriteSample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, float ___sample0, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::UpdateRiffChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::UpdateFactChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method);
// System.Void NAudio.Wave.WaveFileWriter::UpdateDataChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method);
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFileWriter::get_WaveFormat()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WDL_Resampler_IIRFilter__ctor_m94E9A23EE4F24391F625248D609365F6DF6B34D7 (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter__ctor_m94E9A23EE4F24391F625248D609365F6DF6B34D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter__ctor_m94E9A23EE4F24391F625248D609365F6DF6B34D7_RuntimeMethod_var);
	{
		// public WDL_Resampler_IIRFilter()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_fpos = -1;
		__this->set_m_fpos_0((-1.0));
		// Reset();
		WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter_Reset_mD5A1C01F7E324ABC765CF78BD9FBD00D69B09C4B_RuntimeMethod_var);
	{
		// m_hist = new double[WDL_RESAMPLE_MAX_FILTERS * WDL_RESAMPLE_MAX_NCH, 4];
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)((int32_t)256), (il2cpp_array_size_t)4 };
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_0 = (DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)GenArrayNew(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175_il2cpp_TypeInfo_var, L_1);
		__this->set_m_hist_6((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_0);
		// }
		return;
	}
}
// System.Void NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::setParms(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WDL_Resampler_IIRFilter_setParms_mCA575FB1DFFAB419F56E399055BF123210C1839C (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, double ___fpos0, double ___Q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter_setParms_mCA575FB1DFFAB419F56E399055BF123210C1839C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter_setParms_mCA575FB1DFFAB419F56E399055BF123210C1839C_RuntimeMethod_var);
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	double V_6 = 0.0;
	{
		// if (Math.Abs(fpos - m_fpos) < 0.000001) return;
		double L_0 = ___fpos0;
		double L_1 = __this->get_m_fpos_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_2 = fabs(((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)));
		V_5 = (bool)((((double)L_2) < ((double)(1.0E-06)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// if (Math.Abs(fpos - m_fpos) < 0.000001) return;
		goto IL_00c7;
	}

IL_0024:
	{
		// m_fpos = fpos;
		double L_4 = ___fpos0;
		__this->set_m_fpos_0(L_4);
		// double pos = fpos * PI;
		double L_5 = ___fpos0;
		V_0 = ((double)il2cpp_codegen_multiply((double)L_5, (double)(3.1415926535897931)));
		// double cpos = Math.Cos(pos);
		double L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_7 = cos(L_6);
		V_1 = L_7;
		// double spos = Math.Sin(pos);
		double L_8 = V_0;
		double L_9 = sin(L_8);
		V_2 = L_9;
		// double alpha = spos / (2.0 * Q);
		double L_10 = V_2;
		double L_11 = ___Q1;
		V_3 = ((double)((double)L_10/(double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_11))));
		// double sc = 1.0 / (1 + alpha);
		double L_12 = V_3;
		V_4 = ((double)((double)(1.0)/(double)((double)il2cpp_codegen_add((double)(1.0), (double)L_12))));
		// m_b1 = (1 - cpos) * sc;
		double L_13 = V_1;
		double L_14 = V_4;
		__this->set_m_b1_4(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)L_13)), (double)L_14)));
		// m_b2 = m_b0 = m_b1 * 0.5;
		double L_15 = __this->get_m_b1_4();
		double L_16 = ((double)il2cpp_codegen_multiply((double)L_15, (double)(0.5)));
		V_6 = L_16;
		__this->set_m_b0_3(L_16);
		double L_17 = V_6;
		__this->set_m_b2_5(L_17);
		// m_a1 = -2 * cpos * sc;
		double L_18 = V_1;
		double L_19 = V_4;
		__this->set_m_a1_1(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(-2.0), (double)L_18)), (double)L_19)));
		// m_a2 = (1 - alpha) * sc;
		double L_20 = V_3;
		double L_21 = V_4;
		__this->set_m_a2_2(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)L_20)), (double)L_21)));
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::Apply(System.Single[],System.Int32,System.Single[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WDL_Resampler_IIRFilter_Apply_m606D438A0B59152012922F8AEA8620AF25A493FC (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___inBuffer0, int32_t ___inIndex1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___outBuffer2, int32_t ___outIndex3, int32_t ___ns4, int32_t ___span5, int32_t ___w6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter_Apply_m606D438A0B59152012922F8AEA8620AF25A493FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter_Apply_m606D438A0B59152012922F8AEA8620AF25A493FC_RuntimeMethod_var);
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	bool V_7 = false;
	{
		// double b0 = m_b0, b1 = m_b1, b2 = m_b2, a1 = m_a1, a2 = m_a2;
		double L_0 = __this->get_m_b0_3();
		V_0 = L_0;
		// double b0 = m_b0, b1 = m_b1, b2 = m_b2, a1 = m_a1, a2 = m_a2;
		double L_1 = __this->get_m_b1_4();
		V_1 = L_1;
		// double b0 = m_b0, b1 = m_b1, b2 = m_b2, a1 = m_a1, a2 = m_a2;
		double L_2 = __this->get_m_b2_5();
		V_2 = L_2;
		// double b0 = m_b0, b1 = m_b1, b2 = m_b2, a1 = m_a1, a2 = m_a2;
		double L_3 = __this->get_m_a1_1();
		V_3 = L_3;
		// double b0 = m_b0, b1 = m_b1, b2 = m_b2, a1 = m_a1, a2 = m_a2;
		double L_4 = __this->get_m_a2_2();
		V_4 = L_4;
		goto IL_00fc;
	}

IL_002a:
	{
		// double inx = inBuffer[inIndex];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = ___inBuffer0;
		int32_t L_6 = ___inIndex1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = (((double)((double)L_8)));
		// inIndex += span;
		int32_t L_9 = ___inIndex1;
		int32_t L_10 = ___span5;
		___inIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		// double outx = (double)(inx * b0 + m_hist[w, 0] * b1 + m_hist[w, 1] * b2 - m_hist[w, 2] * a1 - m_hist[w, 3] * a2);
		double L_11 = V_5;
		double L_12 = V_0;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_13 = __this->get_m_hist_6();
		int32_t L_14 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_13);
		double L_15 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_13)->GetAt(L_14, 0);
		double L_16 = V_1;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_17 = __this->get_m_hist_6();
		int32_t L_18 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_17);
		double L_19 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_17)->GetAt(L_18, 1);
		double L_20 = V_2;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_21 = __this->get_m_hist_6();
		int32_t L_22 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_21);
		double L_23 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_21)->GetAt(L_22, 2);
		double L_24 = V_3;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_25 = __this->get_m_hist_6();
		int32_t L_26 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_25);
		double L_27 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_25)->GetAt(L_26, 3);
		double L_28 = V_4;
		V_6 = (((double)((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_11, (double)L_12)), (double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_16)))), (double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20)))), (double)((double)il2cpp_codegen_multiply((double)L_23, (double)L_24)))), (double)((double)il2cpp_codegen_multiply((double)L_27, (double)L_28)))))));
		// m_hist[w, 1] = m_hist[w, 0];
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_29 = __this->get_m_hist_6();
		int32_t L_30 = ___w6;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_31 = __this->get_m_hist_6();
		int32_t L_32 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_31);
		double L_33 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_31)->GetAt(L_32, 0);
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_29);
		((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_29)->SetAt(L_30, 1, L_33);
		// m_hist[w, 0] = inx;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_34 = __this->get_m_hist_6();
		int32_t L_35 = ___w6;
		double L_36 = V_5;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_34);
		((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_34)->SetAt(L_35, 0, L_36);
		// m_hist[w, 3] = m_hist[w, 2];
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_37 = __this->get_m_hist_6();
		int32_t L_38 = ___w6;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_39 = __this->get_m_hist_6();
		int32_t L_40 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_39);
		double L_41 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_39)->GetAt(L_40, 2);
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_37);
		((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_37)->SetAt(L_38, 3, L_41);
		// m_hist[w, 2] = denormal_filter(outx);
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_42 = __this->get_m_hist_6();
		int32_t L_43 = ___w6;
		double L_44 = V_6;
		double L_45 = WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88(__this, L_44, /*hidden argument*/NULL);
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_42);
		((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_42)->SetAt(L_43, 2, L_45);
		// outBuffer[outIndex] = (WDL_ResampleSample)m_hist[w, 2];
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_46 = ___outBuffer2;
		int32_t L_47 = ___outIndex3;
		DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175* L_48 = __this->get_m_hist_6();
		int32_t L_49 = ___w6;
		NullCheck((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_48);
		double L_50 = ((DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)(DoubleU5B0___U2C0___U5D_t59641DB06E65742B05CE9AF0B55974EB79E26175*)L_48)->GetAt(L_49, 2);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (float)(((float)((float)L_50))));
		// outIndex += span;
		int32_t L_51 = ___outIndex3;
		int32_t L_52 = ___span5;
		___outIndex3 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52));
	}

IL_00fc:
	{
		// while (ns-- != 0)
		int32_t L_53 = ___ns4;
		int32_t L_54 = L_53;
		___ns4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
		V_7 = (bool)((!(((uint32_t)L_54) <= ((uint32_t)0)))? 1 : 0);
		bool L_55 = V_7;
		if (L_55)
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::denormal_filter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WDL_Resampler_IIRFilter_denormal_filter_mBDE604F5AA1AD41F371F44120C91A8519775D4B5 (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter_denormal_filter_mBDE604F5AA1AD41F371F44120C91A8519775D4B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter_denormal_filter_mBDE604F5AA1AD41F371F44120C91A8519775D4B5_RuntimeMethod_var);
	double V_0 = 0.0;
	{
		// return x;
		float L_0 = ___x0;
		V_0 = (((double)((double)L_0)));
		goto IL_0006;
	}

IL_0006:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
// System.Double NAudio.Dsp.WdlResampler_WDL_Resampler_IIRFilter::denormal_filter(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88 (WDL_Resampler_IIRFilter_tDFD28C9913059872D9240510A7AE2BEEE81B522C * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WDL_Resampler_IIRFilter_denormal_filter_m85D157C89CC8AE4A4A9809B812BFAA10455A9E88_RuntimeMethod_var);
	double V_0 = 0.0;
	{
		// return x;
		double L_0 = ___x0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		double L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NAudio.Wave.WaveFileWriter::.ctor(System.IO.Stream,NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___outStream0, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F_RuntimeMethod_var);
	{
		// public WaveFileWriter(Stream outStream, WaveFormat format)
		IL2CPP_RUNTIME_CLASS_INIT(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var);
		Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5(__this, /*hidden argument*/NULL);
		// _outStream = outStream;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___outStream0;
		__this->set__outStream_5(L_0);
		// WaveFormat = format;
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_1 = ___format1;
		WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_inline(__this, L_1, /*hidden argument*/NULL);
		// _writer = new BinaryWriter(outStream, System.Text.Encoding.ASCII);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___outStream0;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_4 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2859E6B900197645E2B9DC8E447F2A6F25208406(L_4, L_2, L_3, /*hidden argument*/NULL);
		__this->set__writer_6(L_4);
		// _writer.Write(System.Text.Encoding.ASCII.GetBytes("RIFF"));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = __this->get__writer_6();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_6 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397);
		NullCheck(L_5);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_5, L_7);
		// _writer.Write((int)0); // placeholder
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_8 = __this->get__writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_8, 0);
		// _writer.Write(System.Text.Encoding.ASCII.GetBytes("WAVE"));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_9 = __this->get__writer_6();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4);
		NullCheck(L_9);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_9, L_11);
		// _writer.Write(System.Text.Encoding.ASCII.GetBytes("fmt "));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_12 = __this->get__writer_6();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_13 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733);
		NullCheck(L_12);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_12, L_14);
		// _writer.Write((int)(18)); // wave format length
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_15 = __this->get__writer_6();
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_15, ((int32_t)18));
		// _writer.Write((short)0x3);   //encoding:IeeeFloat
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_16 = __this->get__writer_6();
		NullCheck(L_16);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_16, (int16_t)3);
		// _writer.Write((short)format.Channels);     //channels
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_17 = __this->get__writer_6();
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_18 = ___format1;
		NullCheck(L_18);
		int32_t L_19 = WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_17, (((int16_t)((int16_t)L_19))));
		// _writer.Write((int)format.SampleRate);   //sample rate
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_20 = __this->get__writer_6();
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_21 = ___format1;
		NullCheck(L_21);
		int32_t L_22 = WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_20, L_22);
		// _writer.Write((int)format.SampleRate * 4);   //average bytes per second
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_23 = __this->get__writer_6();
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_24 = ___format1;
		NullCheck(L_24);
		int32_t L_25 = WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)4)));
		// _writer.Write((short)4); //block align
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_26 = __this->get__writer_6();
		NullCheck(L_26);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_26, (int16_t)4);
		// _writer.Write((short)32);//bits per sample
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_27 = __this->get__writer_6();
		NullCheck(L_27);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_27, (int16_t)((int32_t)32));
		// _writer.Write((short)0);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_28 = __this->get__writer_6();
		NullCheck(L_28);
		VirtActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_28, (int16_t)0);
		// CreateFactChunk();
		WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD(__this, /*hidden argument*/NULL);
		// WriteDataChunkHeader();
		WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::.ctor(System.String,NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter__ctor_m43E2FA8F1B3EB079832E09C2C005C3DAEC58C045 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, String_t* ___filename0, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter__ctor_m43E2FA8F1B3EB079832E09C2C005C3DAEC58C045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter__ctor_m43E2FA8F1B3EB079832E09C2C005C3DAEC58C045_RuntimeMethod_var);
	{
		// : this(new FileStream(filename, FileMode.Create, FileAccess.Write, FileShare.Read), format)
		String_t* L_0 = ___filename0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_1 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_mB254658F1E758D76B41C942CB91BDF38FD544C83(L_1, L_0, 2, 2, 1, /*hidden argument*/NULL);
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_2 = ___format1;
		WaveFileWriter__ctor_m629DED06C53560916C6152EF859620E4E7A0EB6F(__this, L_1, L_2, /*hidden argument*/NULL);
		// Filename = filename;
		String_t* L_3 = ___filename0;
		WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::WriteDataChunkHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_WriteDataChunkHeader_m45A3CA835F47A8EEFC1F4AE7039D418E9B681471_RuntimeMethod_var);
	{
		// _writer.Write(System.Text.Encoding.ASCII.GetBytes("data"));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get__writer_6();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_1 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD);
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_0, L_2);
		// _dataSizePos = _outStream.Position;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = __this->get__outStream_5();
		NullCheck(L_3);
		int64_t L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		__this->set__dataSizePos_7(L_4);
		// _writer.Write((int)0); // placeholder
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = __this->get__writer_6();
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, 0);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::CreateFactChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_CreateFactChunk_mE4C62F0FE81224C1B8AE8C0CA84061ED8ABD16DD_RuntimeMethod_var);
	bool V_0 = false;
	{
		// if (HasFactChunk())
		bool L_0 = WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// _writer.Write(System.Text.Encoding.ASCII.GetBytes("fact"));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = __this->get__writer_6();
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral58DBFE3D658060E6133943C5784E7700B07EBF87);
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_2, L_4);
		// _writer.Write((int)4);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_5 = __this->get__writer_6();
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, 4);
		// _factSampleCountPos = _outStream.Position;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = __this->get__outStream_5();
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		__this->set__factSampleCountPos_8(L_7);
		// _writer.Write((int)0); // number of samples
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_8 = __this->get__writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_8, 0);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean NAudio.Wave.WaveFileWriter::HasFactChunk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4_RuntimeMethod_var);
	bool V_0 = false;
	{
		// return true;    //assuming encoding == ieeefloat and bits == 32
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.String NAudio.Wave.WaveFileWriter::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFileWriter_get_Filename_m3C058FFC0A3D045A7CC22AC87A5E9AD6F93B925E (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_Filename_m3C058FFC0A3D045A7CC22AC87A5E9AD6F93B925E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_Filename_m3C058FFC0A3D045A7CC22AC87A5E9AD6F93B925E_RuntimeMethod_var);
	{
		// public string Filename { get; private set; }
		String_t* L_0 = __this->get_U3CFilenameU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::set_Filename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_RuntimeMethod_var);
	{
		// public string Filename { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFilenameU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int64 NAudio.Wave.WaveFileWriter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WaveFileWriter_get_Length_m44C0AFACED46C95A692A9A59BB7BCABCEB7CD181 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_Length_m44C0AFACED46C95A692A9A59BB7BCABCEB7CD181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_Length_m44C0AFACED46C95A692A9A59BB7BCABCEB7CD181_RuntimeMethod_var);
	int64_t V_0 = 0;
	{
		// get { return _dataChunkSize; }
		int32_t L_0 = __this->get__dataChunkSize_9();
		V_0 = (((int64_t)((int64_t)L_0)));
		goto IL_000b;
	}

IL_000b:
	{
		// get { return _dataChunkSize; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// NAudio.Wave.WaveFormat NAudio.Wave.WaveFileWriter::get_WaveFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_RuntimeMethod_var);
	{
		// public WaveFormat WaveFormat { get; private set; }
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_0 = __this->get_U3CWaveFormatU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::set_WaveFormat(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_RuntimeMethod_var);
	{
		// public WaveFormat WaveFormat { get; private set; }
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_0 = ___value0;
		__this->set_U3CWaveFormatU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean NAudio.Wave.WaveFileWriter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFileWriter_get_CanRead_m34558C0FAA44EC22052EE21BCC9E5576CA47A14A (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_CanRead_m34558C0FAA44EC22052EE21BCC9E5576CA47A14A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_CanRead_m34558C0FAA44EC22052EE21BCC9E5576CA47A14A_RuntimeMethod_var);
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean NAudio.Wave.WaveFileWriter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFileWriter_get_CanWrite_mDE42E484D4D3A979D7D79A97748226CDD2B6CDC5 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_CanWrite_mDE42E484D4D3A979D7D79A97748226CDD2B6CDC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_CanWrite_mDE42E484D4D3A979D7D79A97748226CDD2B6CDC5_RuntimeMethod_var);
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean NAudio.Wave.WaveFileWriter::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFileWriter_get_CanSeek_m6EBFA5E630E35ABE3495CB91CBE74A531D6D2C15 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_CanSeek_m6EBFA5E630E35ABE3495CB91CBE74A531D6D2C15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_CanSeek_m6EBFA5E630E35ABE3495CB91CBE74A531D6D2C15_RuntimeMethod_var);
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 NAudio.Wave.WaveFileWriter::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71_RuntimeMethod_var);
	{
		// throw new InvalidOperationException("Cannot read from a WaveFileWriter");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_0 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_0, _stringLiteral7D20D5665F15CE739F38E7BF457340F3CEA53B80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, WaveFileWriter_Read_m92151A8AC14DD338B8F328D9FACC54B7F6A50C71_RuntimeMethod_var);
	}
}
// System.Int64 NAudio.Wave.WaveFileWriter::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4_RuntimeMethod_var);
	{
		// throw new InvalidOperationException("Cannot seek within a WaveFileWriter");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_0 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_0, _stringLiteral9B19358D780291752D7266661AA5D7424E5BAD98, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, WaveFileWriter_Seek_m9F56284E1F12DA0E36E73772D7A1F5804A693ED4_RuntimeMethod_var);
	}
}
// System.Void NAudio.Wave.WaveFileWriter::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66_RuntimeMethod_var);
	{
		// throw new InvalidOperationException("Cannot set length of a WaveFileWriter");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_0 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_0, _stringLiteralCE9D8FA6F269A94637158C47DF92276C5546139C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, WaveFileWriter_SetLength_m07A99F88E6331D966CCAB63F81BE980767346B66_RuntimeMethod_var);
	}
}
// System.Int64 NAudio.Wave.WaveFileWriter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WaveFileWriter_get_Position_m59C1E4CFF1CAF73B058272DDE190EC37D56529FD (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_get_Position_m59C1E4CFF1CAF73B058272DDE190EC37D56529FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_get_Position_m59C1E4CFF1CAF73B058272DDE190EC37D56529FD_RuntimeMethod_var);
	int64_t V_0 = 0;
	{
		// get { return _dataChunkSize; }
		int32_t L_0 = __this->get__dataChunkSize_9();
		V_0 = (((int64_t)((int64_t)L_0)));
		goto IL_000b;
	}

IL_000b:
	{
		// get { return _dataChunkSize; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D_RuntimeMethod_var);
	{
		// set { throw new InvalidOperationException("Repositioning a WaveFileWriter is not supported"); }
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_0 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_0, _stringLiteral37F56740BBF41C4BB6C0A29A90ECEC58D6601770, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, WaveFileWriter_set_Position_mBF79DA60D2F689F15A10DD91290A3F9E7A57AB7D_RuntimeMethod_var);
	}
}
// System.Void NAudio.Wave.WaveFileWriter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_Write_m024446D94F0FD957AB83FBE5692D4B1CC3F11156 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Write_m024446D94F0FD957AB83FBE5692D4B1CC3F11156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Write_m024446D94F0FD957AB83FBE5692D4B1CC3F11156_RuntimeMethod_var);
	{
		// _outStream.Write(data, offset, count);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get__outStream_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		// _dataChunkSize += count;
		int32_t L_4 = __this->get__dataChunkSize_9();
		int32_t L_5 = ___count2;
		__this->set__dataChunkSize_9(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::WriteSample(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, float ___sample0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642_RuntimeMethod_var);
	{
		// _writer.Write(sample);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get__writer_6();
		float L_1 = ___sample0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_0, L_1);
		// _dataChunkSize += 4;
		int32_t L_2 = __this->get__dataChunkSize_9();
		__this->set__dataChunkSize_9(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)));
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::WriteSamples(System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_WriteSamples_mCB0C533E3F61B3235FCAC33B6798F3AA906331EC (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___samples0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_WriteSamples_mCB0C533E3F61B3235FCAC33B6798F3AA906331EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_WriteSamples_mCB0C533E3F61B3235FCAC33B6798F3AA906331EC_RuntimeMethod_var);
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int n = 0; n < count; n++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0005:
	{
		// WriteSample(samples[offset + n]);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___samples0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		float L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		WaveFileWriter_WriteSample_mB7AE6F0CAA1098566912D776CF48223DEABC5642(__this, L_4, /*hidden argument*/NULL);
		// for (int n = 0; n < count; n++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// for (int n = 0; n < count; n++)
		int32_t L_6 = V_0;
		int32_t L_7 = ___count2;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_Flush_m18B6D9C9EE92AE816EDAD16C791743135933E871 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Flush_m18B6D9C9EE92AE816EDAD16C791743135933E871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Flush_m18B6D9C9EE92AE816EDAD16C791743135933E871_RuntimeMethod_var);
	{
		// _writer.Flush();
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = __this->get__writer_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryWriter::Flush() */, L_0);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_Dispose_m0F9DFD51499EC8C280800FD5C7795F24B90F27CC (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Dispose_m0F9DFD51499EC8C280800FD5C7795F24B90F27CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Dispose_m0F9DFD51499EC8C280800FD5C7795F24B90F27CC_RuntimeMethod_var);
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (disposing)
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if (_outStream != null)
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get__outStream_5();
		V_1 = (bool)((!(((RuntimeObject*)(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// UpdateHeader(_writer);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_4 = __this->get__writer_6();
		VirtActionInvoker1< BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * >::Invoke(26 /* System.Void NAudio.Wave.WaveFileWriter::UpdateHeader(System.IO.BinaryWriter) */, __this, L_4);
		IL2CPP_LEAVE(0x3C, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		// _outStream.Close(); // will close the underlying base stream
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = __this->get__outStream_5();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_5);
		// _outStream = null;
		__this->set__outStream_5((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
	}

IL_003d:
	{
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::UpdateHeader(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateHeader_m4D7343A69EAA12BCB386EE33F238C74E4DEEF43F (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_UpdateHeader_m4D7343A69EAA12BCB386EE33F238C74E4DEEF43F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_UpdateHeader_m4D7343A69EAA12BCB386EE33F238C74E4DEEF43F_RuntimeMethod_var);
	{
		// Flush();
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, __this);
		// UpdateRiffChunk(writer);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665(__this, L_0, /*hidden argument*/NULL);
		// UpdateFactChunk(writer);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = ___writer0;
		WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246(__this, L_1, /*hidden argument*/NULL);
		// UpdateDataChunk(writer);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = ___writer0;
		WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::UpdateDataChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_UpdateDataChunk_m82E7C6A7B7BD42AF363821931C1B5BDAD1C6E2EB_RuntimeMethod_var);
	{
		// writer.Seek((int)_dataSizePos, SeekOrigin.Begin);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		int64_t L_1 = __this->get__dataSizePos_7();
		NullCheck(L_0);
		VirtFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(7 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_0, (((int32_t)((int32_t)L_1))), 0);
		// writer.Write((int)(_dataChunkSize));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_2 = ___writer0;
		int32_t L_3 = __this->get__dataChunkSize_9();
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::UpdateRiffChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_UpdateRiffChunk_mC208141D89CCEDBE42F274289A31F66531944665_RuntimeMethod_var);
	{
		// writer.Seek(4, SeekOrigin.Begin);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_0 = ___writer0;
		NullCheck(L_0);
		VirtFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(7 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_0, 4, 0);
		// writer.Write((int)(_outStream.Length - 8));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_1 = ___writer0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get__outStream_5();
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)(((int64_t)((int64_t)8)))))))));
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::UpdateFactChunk(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_UpdateFactChunk_m5CBAC6273C9B89A3A749F262D376F150D4659246_RuntimeMethod_var);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (HasFactChunk())
		bool L_0 = WaveFileWriter_HasFactChunk_m7C9B133D83A448A59ABC35BB5A635602EA26EBA4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// int bitsPerSample = 32 * WaveFormat.Channels;//(format.BitsPerSample * format.Channels);
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_2 = WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)32), (int32_t)L_3));
		// if (bitsPerSample != 0)
		int32_t L_4 = V_1;
		V_2 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// writer.Seek((int)_factSampleCountPos, SeekOrigin.Begin);
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_6 = ___writer0;
		int64_t L_7 = __this->get__factSampleCountPos_8();
		NullCheck(L_6);
		VirtFuncInvoker2< int64_t, int32_t, int32_t >::Invoke(7 /* System.Int64 System.IO.BinaryWriter::Seek(System.Int32,System.IO.SeekOrigin) */, L_6, (((int32_t)((int32_t)L_7))), 0);
		// writer.Write((int)((_dataChunkSize * 8) / bitsPerSample));
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_8 = ___writer0;
		int32_t L_9 = __this->get__dataChunkSize_9();
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_8, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)8))/(int32_t)L_10)));
	}

IL_0045:
	{
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void NAudio.Wave.WaveFileWriter::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFileWriter_Finalize_m2073B271038EF5391398ED74E784095993B53902 (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFileWriter_Finalize_m2073B271038EF5391398ED74E784095993B53902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFileWriter_Finalize_m2073B271038EF5391398ED74E784095993B53902_RuntimeMethod_var);
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		VirtActionInvoker1< bool >::Invoke(14 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x14, IL_0014)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0014:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 NAudio.Wave.WaveFormat::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518 (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return _channels;
		int32_t L_0 = __this->get__channels_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63 (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		// return _sampleRate;
		int32_t L_0 = __this->get__sampleRate_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void NAudio.Wave.WaveFormat::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, int32_t ___sampleRate0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C_RuntimeMethod_var);
	bool V_0 = false;
	{
		// public WaveFormat(int sampleRate, int channels)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (channels > 64)
		int32_t L_0 = ___channels1;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)64)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("channels", "More than 64 channels");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_2, _stringLiteral3536F72AC0EC1D785E357FED37A3E83C4BC651E2, _stringLiteral4544E754370903247A6487F49B70E44D32632A60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WaveFormat__ctor_m3A486957C982CC5C8ED314AC89277DDDBF73989C_RuntimeMethod_var);
	}

IL_0021:
	{
		// _channels = channels;
		int32_t L_3 = ___channels1;
		__this->set__channels_0(L_3);
		// _sampleRate = sampleRate;
		int32_t L_4 = ___sampleRate0;
		__this->set__sampleRate_1(L_4);
		// }
		return;
	}
}
// System.Boolean NAudio.Wave.WaveFormat::Equals(NAudio.Wave.WaveFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveFormat_Equals_mA9990E495A988FB273D5906253E3748F94EF2458 (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat_Equals_mA9990E495A988FB273D5906253E3748F94EF2458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat_Equals_mA9990E495A988FB273D5906253E3748F94EF2458_RuntimeMethod_var);
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return other.Channels == Channels
		//     && other.SampleRate == SampleRate;
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518(L_0, /*hidden argument*/NULL);
		int32_t L_2 = WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4 = WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63(L_3, /*hidden argument*/NULL);
		int32_t L_5 = WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Int32 NAudio.Wave.WaveFormat::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveFormat_GetHashCode_mD8342452E46D285D6F682E81900992BDDE080A3C (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat_GetHashCode_mD8342452E46D285D6F682E81900992BDDE080A3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat_GetHashCode_mD8342452E46D285D6F682E81900992BDDE080A3C_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 1022251;
		V_0 = ((int32_t)1022251);
		// hash += _channels;
		int32_t L_0 = V_0;
		int32_t L_1 = __this->get__channels_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		// hash *= 16777619;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)16777619)));
		// hash += _sampleRate;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get__sampleRate_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		// hash *= 16777619;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)16777619)));
		// return hash;
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.String NAudio.Wave.WaveFormat::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveFormat_ToString_m55A5214A49B927F603CDBE20AF53B3E323F1864A (WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveFormat_ToString_m55A5214A49B927F603CDBE20AF53B3E323F1864A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceSentry _stackTraceSentry(WaveFormat_ToString_m55A5214A49B927F603CDBE20AF53B3E323F1864A_RuntimeMethod_var);
	String_t* V_0 = NULL;
	{
		// return string.Format("(Channels:{0}, Rate:{1})", Channels, SampleRate);
		int32_t L_0 = WaveFormat_get_Channels_mC385EEB708D14744512B6A2BAA7013A34EC6C518(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = WaveFormat_get_SampleRate_m74976F5A31715483F2D3111F08EDD453CCBF4F63(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral87F28D81878FCA0A299EBD4261ECF3A6616729B0, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaveFileWriter_set_WaveFormat_mC482469FFBAFCD38838D47BBC1F2A4C0B80C0FE6_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * ___value0, const RuntimeMethod* method)
{
	{
		// public WaveFormat WaveFormat { get; private set; }
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_0 = ___value0;
		__this->set_U3CWaveFormatU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WaveFileWriter_set_Filename_m292C7415408D0A4470566F8668EA2F00BB16B4C0_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Filename { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFilenameU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * WaveFileWriter_get_WaveFormat_m7F7A94FFDD8809C69BD6439506338DFBEE4144BB_inline (WaveFileWriter_t3CBF27B442A56D2A543687882D37C3656AC67EF4 * __this, const RuntimeMethod* method)
{
	{
		// public WaveFormat WaveFormat { get; private set; }
		WaveFormat_t868DC5F475B3431BFA6D049E0FF2316099EB43CB * L_0 = __this->get_U3CWaveFormatU3Ek__BackingField_11();
		return L_0;
	}
}
