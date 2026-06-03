#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E;
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85;
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F;
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257;
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD;
struct ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77;
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13;
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885;
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1;
struct ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E;
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85;
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F;
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257;
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD;
struct ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77;
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13;
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885;
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1;
struct ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F  : public RuntimeObject
{
};
struct EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452  : public RuntimeObject
{
};
struct EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738  : public RuntimeObject
{
};
struct EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383  : public RuntimeObject
{
};
struct EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999  : public RuntimeObject
{
};
struct EmptyArray_1_tEEBA432F625347612EDF171386752603C2967CE5  : public RuntimeObject
{
};
struct EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A  : public RuntimeObject
{
};
struct EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB  : public RuntimeObject
{
};
struct EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D  : public RuntimeObject
{
};
struct EmptyArray_1_t999D766D6405B55390194BEB8B14B59328289B9F  : public RuntimeObject
{
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9  : public RuntimeObject
{
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498  : public RuntimeObject
{
};
struct EmptyArray_1_t8E0F64E8D6F60B7A4C17A9B51807BBCD5DBD4BA6  : public RuntimeObject
{
};
struct EmptyArray_1_tE5C2ADC4FDB25BE3231B4C8B67AF6D0B49C4E03A  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB 
{
	int32_t ___Id;
	int32_t ___Version;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct U3CDataU3Ee__FixedBuffer_t685A7D014FEDB66EE0EB646A3F0878CD27436120 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t685A7D014FEDB66EE0EB646A3F0878CD27436120__padding[1472];
	};
};
struct U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F__padding[8];
	};
};
struct DTLSConnectionData_t826F3755B5988EFB0472E317D12DDD6A088379FF 
{
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___UnityTLSClientPtr;
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___ReconnectionClientPtr;
	int64_t ___LastHandshakeUpdate;
	int64_t ___LastReceive;
};
struct ConnectionData_t047259821C45CA9102A1337567BA69F793E7C336 
{
	int64_t ___LastConnectAttempt;
};
struct U3CDataU3Ee__FixedBuffer_tEF3C6378FCD354AE4E59EC3AE14B690150B7B8D0 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_tEF3C6378FCD354AE4E59EC3AE14B690150B7B8D0__padding[2944];
	};
};
struct U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596__padding[2944];
	};
};
struct U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179__padding[2944];
	};
};
struct U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E__padding[16];
	};
};
struct U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91__padding[1458];
	};
};
struct ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 
{
	intptr_t ____value;
};
struct ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 
{
	intptr_t ____value;
};
struct ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 
{
	intptr_t ____value;
};
struct ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 
{
	intptr_t ____value;
};
struct ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 
{
	intptr_t ____value;
};
struct ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 
{
	intptr_t ____value;
};
struct ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C 
{
	intptr_t ____value;
};
struct ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C 
{
	intptr_t ____value;
};
struct ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 
{
	intptr_t ____value;
};
struct ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 
{
	intptr_t ____value;
};
struct ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 
{
	intptr_t ____value;
};
struct ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 
{
	intptr_t ____value;
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 
{
	intptr_t ____value;
};
struct ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF 
{
	int32_t ___Version;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___Value;
};
struct ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 
{
	int32_t ___Version;
	DTLSConnectionData_t826F3755B5988EFB0472E317D12DDD6A088379FF ___Value;
};
struct ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 
{
	int32_t ___Version;
	ConnectionData_t047259821C45CA9102A1337567BA69F793E7C336 ___Value;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A 
{
	U3CDataU3Ee__FixedBuffer_t685A7D014FEDB66EE0EB646A3F0878CD27436120 ___Data;
	int32_t ___Length;
};
struct ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F ___Value;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CValueU3Ee__FixedBuffer_t69BFA289EC1CC537A6BECE4C3783CFE49B78077F ___Value_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___m_ValueLongWorkaround;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_ValueLongWorkaround_forAlignmentOnly;
		};
	};
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 
{
	intptr_t ___handle;
};
struct State_t58277D770B48C86476C47DA7091149AE7927FAFE 
{
	int32_t ___value__;
};
struct ConnectionState_t482E5F413BDC06FDEBE98C5BBA778142B597F137 
{
	int32_t ___value__;
};
struct StreamToDatagramLayerPacketBuffer_t691B819881626554A6FE1A774DB6352F38DC51CB 
{
	U3CDataU3Ee__FixedBuffer_tEF3C6378FCD354AE4E59EC3AE14B690150B7B8D0 ___Data;
	int32_t ___Length;
};
struct TLSConnectionData_tFC3A9A0934E0286BB1220A5984FAC6EFD55AC6DD 
{
	unitytls_client_t24835A1F9F3B994DE3AE5B3B84792289F563AC80* ___UnityTLSClientPtr;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	int64_t ___LastHandshakeUpdate;
	U3CDecryptBufferU3Ee__FixedBuffer_t99EFBE0AEE5F594B833AF7CE45BB275855C78596 ___DecryptBuffer;
	int32_t ___DecryptBufferLength;
};
struct Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 
{
	U3CDataU3Ee__FixedBuffer_t1D35629FEF74B6CCE225C6E300D965BC6E60A179 ___Data;
	int32_t ___Length;
};
struct Keys_t0341510CDC4CCC1D4F1EEA2DD45AA94F984975A3 
{
	U3CKeyU3Ee__FixedBuffer_t0A5EBC1ABD67AE7DB30E930A11B038355758D32E ___Key;
};
struct Payload_t7A64623BF132C6AF0FA8FD8E5FC5DD042F2A5758 
{
	U3CDataU3Ee__FixedBuffer_t8D146C336A688DCDD5E4A4153B9A8FA93347AC91 ___Data;
	int32_t ___Length;
};
struct Role_t8E1886B2C39FB839AB5EF48887B183978F82845E 
{
	int32_t ___value__;
};
struct State_t57AA1DD540C133D1BD727601B455DEFC644D0AEE 
{
	int32_t ___value__;
};
struct ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 
{
	int32_t ___Version;
	TLSConnectionData_tFC3A9A0934E0286BB1220A5984FAC6EFD55AC6DD ___Value;
};
struct FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 ____pointer;
	int32_t ____length;
};
struct Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 ____pointer;
	int32_t ____length;
};
struct Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 ____pointer;
	int32_t ____length;
};
struct Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 ____pointer;
	int32_t ____length;
};
struct Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 ____pointer;
	int32_t ____length;
};
struct Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 ____pointer;
	int32_t ____length;
};
struct Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C ____pointer;
	int32_t ____length;
};
struct Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C ____pointer;
	int32_t ____length;
};
struct Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 ____pointer;
	int32_t ____length;
};
struct Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 ____pointer;
	int32_t ____length;
};
struct Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 ____pointer;
	int32_t ____length;
};
struct Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	bool ___IsLocal;
	bool ___ReceivedMtuAck;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4_marshaled_pinvoke
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	int32_t ___IsLocal;
	int32_t ___ReceivedMtuAck;
};
struct SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4_marshaled_com
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnection;
	ConnectionToken_tC4332AD93CD9451E95FE2AD7805E547B2A2A9F52 ___Token;
	int32_t ___State;
	int64_t ___LastReceiveTime;
	int64_t ___LastSendTime;
	int64_t ___LastMtuSendTime;
	int32_t ___ConnectionAttempts;
	int32_t ___IsLocal;
	int32_t ___ReceivedMtuAck;
};
struct ConnectionData_t43DFB28225E32B5C10610EFD826F215227913E3E 
{
	StreamToDatagramLayerPacketBuffer_t691B819881626554A6FE1A774DB6352F38DC51CB ___RecvBuffer;
	int32_t ___ReceiveIgnore;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5 
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	bool ___HasPendingSends;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5_marshaled_pinvoke
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	int32_t ___HasPendingSends;
};
struct ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5_marshaled_com
{
	Baselib_Socket_Handle_t5BB40490AAC0DA7C5B3CAA9C93447B28D6474FA1 ___Socket;
	int64_t ___ConnectTime;
	int64_t ___LastConnectAttemptTime;
	int32_t ___LastConnectAttempt;
	int32_t ___HasPendingSends;
};
struct ConnectionData_t008EEAA99771DD2346A073E3F59B0121482F46F6 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___UnderlyingConnectionId;
	int32_t ___WebSocketState;
	int32_t ___Role;
	Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 ___SendBuffer;
	Buffer_tABA3AFC724DBB678EE82E9C77F9340F0E5C89571 ___RecvBuffer;
	Payload_t7A64623BF132C6AF0FA8FD8E5FC5DD042F2A5758 ___RecvPayload;
	uint8_t ___isReceivingPayload;
	uint8_t ___isWaitingForPong;
	Keys_t0341510CDC4CCC1D4F1EEA2DD45AA94F984975A3 ___Keys;
	int64_t ___CreateTimeStamp;
	int64_t ___CloseTimeStamp;
	int64_t ___ReceiveTimeStamp;
};
struct ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 
{
	int32_t ___Version;
	SimpleConnectionData_t9DF6B0F90ADE109C095852276716C03D3B397BE4 ___Value;
};
struct ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 
{
	int32_t ___Version;
	ConnectionData_t43DFB28225E32B5C10610EFD826F215227913E3E ___Value;
};
struct ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 
{
	int32_t ___Version;
	ConnectionData_t3BEBDF28C0A7A2F719E5F6D298735DCC6B0AE8F5 ___Value;
};
struct ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB 
{
	int32_t ___Version;
	ConnectionData_t008EEAA99771DD2346A073E3F59B0121482F46F6 ___Value;
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 
{
	FixedList64Bytes_1_t137BDA0D26652E438404CA31731069295DAC8E1C ___m_RawAddressContainer;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC 
{
	TransferrableData_tE4092BB2D19869881CCCD6B9B3E54FDC904B3197 ___Transferrable;
};
struct ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED 
{
	NetworkEndpoint_t0F60A2EF4E82ED5F26845E5537772D24C32426AC ___Endpoint;
	int32_t ___State;
	int32_t ___PathMtu;
};
struct ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 
{
	int32_t ___Version;
	ConnectionData_tC8FFF2547B5E7AC5023FBF19644E71C20A62B7ED ___Value;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F_StaticFields
{
	ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___Value;
};
struct EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452_StaticFields
{
	ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___Value;
};
struct EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738_StaticFields
{
	ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___Value;
};
struct EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383_StaticFields
{
	ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___Value;
};
struct EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999_StaticFields
{
	ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___Value;
};
struct EmptyArray_1_tEEBA432F625347612EDF171386752603C2967CE5_StaticFields
{
	ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___Value;
};
struct EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A_StaticFields
{
	ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___Value;
};
struct EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB_StaticFields
{
	ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___Value;
};
struct EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D_StaticFields
{
	ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___Value;
};
struct EmptyArray_1_t999D766D6405B55390194BEB8B14B59328289B9F_StaticFields
{
	Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___Value;
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields
{
	BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___Value;
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___Value;
};
struct EmptyArray_1_t8E0F64E8D6F60B7A4C17A9B51807BBCD5DBD4BA6_StaticFields
{
	ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___Value;
};
struct EmptyArray_1_tE5C2ADC4FDB25BE3231B4C8B67AF6D0B49C4E03A_StaticFields
{
	ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_StaticFields
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___U3CInvalidU3Ek__BackingField;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_StaticFields
{
	int32_t ___s_count;
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 ___s_zero;
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 ___s_one;
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 ___s_allOnes;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF m_Items[1];

	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 m_Items[1];

	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 m_Items[1];

	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 m_Items[1];

	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 m_Items[1];

	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 m_Items[1];

	inline ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 m_Items[1];

	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 m_Items[1];

	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB m_Items[1];

	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB value)
	{
		m_Items[index] = value;
	}
};
struct Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 m_Items[1];

	inline Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 value)
	{
		m_Items[index] = value;
	}
};
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80  : public RuntimeArray
{
	ALIGN_FIELD (8) BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D m_Items[1];

	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB m_Items[1];

	inline ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB value)
	{
		m_Items[index] = value;
	}
};
struct ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A m_Items[1];

	inline ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C_gshared (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_gshared_inline (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F_gshared (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_gshared_inline (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7_gshared (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_gshared_inline (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298_gshared (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_gshared_inline (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018_gshared (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_gshared_inline (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD_gshared (ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_destination, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5DC840A7966A8C391FC4C2C257A78881BDAF8CCF_gshared_inline (ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* Array_Empty_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_m9610CF27DDEB0303A77BE0D04AB086D26F5B633B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1_gshared (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_gshared_inline (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25_gshared (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_gshared_inline (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602_gshared (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_gshared_inline (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30_gshared (Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_destination, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7AA8768EE6E19C2D70DE5AE3844FD9792954C197_gshared_inline (ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* Array_Empty_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mE4640DBE17BCF2AD25DF6E18DDD33FFE0B77D234_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02_gshared (ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_destination, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m116B26F5D9687E30AAEEC7CA0D6799209E85B0D8_gshared_inline (ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* Array_Empty_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m66600286ECF824C65CCFB9B48D2696708471D766_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1_gshared (ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_destination, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1B1612A0CD2C0F18BB18DAC25376D14ED5FF7E55_gshared_inline (ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* Array_Empty_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mF92E9733522F85C07496167FFD21DEC5B7FC5F15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_gshared)(__this, ___0_sortedList, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, const RuntimeMethod*))Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_destination, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_inline (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C*, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*, int32_t, const RuntimeMethod*))Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3*, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*, const RuntimeMethod*))Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, const RuntimeMethod*))Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_destination, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_inline (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75*, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*, int32_t, const RuntimeMethod*))Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_gshared_inline)(method);
}
inline void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E*, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*, const RuntimeMethod*))Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, const RuntimeMethod*))Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7 (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_destination, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_inline (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF*, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*, int32_t, const RuntimeMethod*))Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_gshared_inline)(method);
}
inline void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389*, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*, const RuntimeMethod*))Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, const RuntimeMethod*))Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298 (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_destination, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_inline (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E*, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*, int32_t, const RuntimeMethod*))Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_gshared_inline)(method);
}
inline void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801*, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*, const RuntimeMethod*))Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, const RuntimeMethod*))Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018 (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_destination, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_inline (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14*, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*, int32_t, const RuntimeMethod*))Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_gshared_inline)(method);
}
inline void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0*, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*, const RuntimeMethod*))Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380*, const RuntimeMethod*))Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD (ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_destination, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m5DC840A7966A8C391FC4C2C257A78881BDAF8CCF_inline (ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060*, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m5DC840A7966A8C391FC4C2C257A78881BDAF8CCF_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380*, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*, int32_t, const RuntimeMethod*))Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* Array_Empty_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_m9610CF27DDEB0303A77BE0D04AB086D26F5B633B_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_m9610CF27DDEB0303A77BE0D04AB086D26F5B633B_gshared_inline)(method);
}
inline void Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380*, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77*, const RuntimeMethod*))Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, const RuntimeMethod*))Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1 (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_destination, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_inline (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC*, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*, int32_t, const RuntimeMethod*))Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_gshared_inline)(method);
}
inline void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6*, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*, const RuntimeMethod*))Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, const RuntimeMethod*))Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25 (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_destination, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_inline (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026*, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*, int32_t, const RuntimeMethod*))Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_gshared_inline)(method);
}
inline void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2*, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*, const RuntimeMethod*))Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, const RuntimeMethod*))Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602 (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_destination, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_inline (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E*, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*, int32_t, const RuntimeMethod*))Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline (const RuntimeMethod* method)
{
	return ((  ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* (*) (const RuntimeMethod*))Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_gshared_inline)(method);
}
inline void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2*, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*, const RuntimeMethod*))Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19*, const RuntimeMethod*))Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30 (Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_destination, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m7AA8768EE6E19C2D70DE5AE3844FD9792954C197_inline (ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073*, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7AA8768EE6E19C2D70DE5AE3844FD9792954C197_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19*, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*, int32_t, const RuntimeMethod*))Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* Array_Empty_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mE4640DBE17BCF2AD25DF6E18DDD33FFE0B77D234_inline (const RuntimeMethod* method)
{
	return ((  Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* (*) (const RuntimeMethod*))Array_Empty_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mE4640DBE17BCF2AD25DF6E18DDD33FFE0B77D234_gshared_inline)(method);
}
inline void Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19*, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02*, const RuntimeMethod*))Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, const RuntimeMethod*))Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method)
{
	return ((  BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* (*) (const RuntimeMethod*))Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline)(method);
}
inline void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*, const RuntimeMethod*))Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, const RuntimeMethod*))Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (bool*, bool*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2*, bool*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, bool*, int32_t, const RuntimeMethod*))Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
inline void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, const RuntimeMethod*))Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline (const RuntimeMethod* method)
{
	return ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (const RuntimeMethod*))Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline)(method);
}
inline void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, const RuntimeMethod*))Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method)
{
	return ((  Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*) (const RuntimeMethod*))Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline)(method);
}
inline void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, const RuntimeMethod*))Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B*, const RuntimeMethod*))Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02 (ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_destination, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m116B26F5D9687E30AAEEC7CA0D6799209E85B0D8_inline (ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F*, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m116B26F5D9687E30AAEEC7CA0D6799209E85B0D8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B*, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*, int32_t, const RuntimeMethod*))Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* Array_Empty_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m66600286ECF824C65CCFB9B48D2696708471D766_inline (const RuntimeMethod* method)
{
	return ((  ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* (*) (const RuntimeMethod*))Array_Empty_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m66600286ECF824C65CCFB9B48D2696708471D766_gshared_inline)(method);
}
inline void Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B*, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1*, const RuntimeMethod*))Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F*, const RuntimeMethod*))Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1 (ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_destination, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m1B1612A0CD2C0F18BB18DAC25376D14ED5FF7E55_inline (ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0*, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1B1612A0CD2C0F18BB18DAC25376D14ED5FF7E55_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F*, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*, int32_t, const RuntimeMethod*))Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* Array_Empty_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mF92E9733522F85C07496167FFD21DEC5B7FC5F15_inline (const RuntimeMethod* method)
{
	return ((  ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* (*) (const RuntimeMethod*))Array_Empty_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mF92E9733522F85C07496167FFD21DEC5B7FC5F15_gshared_inline)(method);
}
inline void Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F*, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A*, const RuntimeMethod*))Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_gshared_inline)(__this, ___0_array, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m9CDE8A15F6710C47591CDE1AE5C0241C6380306D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_1);
		__this->____size = 0;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___comparer = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_9);
		String_t* L_11;
		L_11 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5E28CD6EF4775439631781B0B8C1C21FB0BCB624_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5B95DE8F62031E2CFF5C1B79AACB9D4A29322B48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3AA632F529E8104E858B38BEBD3E51FADCEA69DE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		int32_t L_0 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = ___0_value;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002d:
	{
		int32_t L_8 = ___0_value;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_9 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 24), (uint32_t)L_9);
		V_0 = L_10;
		int32_t L_11 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 25), (uint32_t)L_11);
		V_1 = L_12;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->___keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		int32_t L_16 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, L_16, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_19, NULL);
	}

IL_0070:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		__this->___keys = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_20);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_1;
		__this->___values = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_21);
		return;
	}

IL_007f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22;
		L_22 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->___keys = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_22);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23;
		L_23 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___values = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_23);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Add_m4866D80E4CC9798CB02F14658273996701069A48_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_0, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_3);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_7 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_7, (RuntimeObject*)L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0054:
	{
		RuntimeObject* L_12 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_13 = ___1_value;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_14 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_14, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_007f:
	{
		RuntimeObject* L_19 = ___0_key;
		void* L_21 = UnBox_Any(L_19, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_20);
		RuntimeObject* L_22 = ___1_value;
		void* L_24 = UnBox_Any(L_22, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_23);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mA3436A3CB54F895668B37B743E580AC66847E86C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Keys_m4242C0DE7B18F0CAD6F21CDC2CDB1D162487C0CA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6404F05280DB64D95FCBFA6D912FDD82DB0FFC1F_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_m3629A631F9E91380D33AF97AB0022D43F799F8BA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4D4F34CD5D4C8ACA4F369647D286BA598EA4A091_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Values_m439BF2A831D64DFCA3E25F90533820DD34C025FC_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m15B1319DA31A9A9A5C49D2E540BA1B67F2A34743_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0 = __this->___keyList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_1 = (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
		((  void (*) (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		__this->___keyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList), (void*)L_1);
	}

IL_0014:
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_2 = __this->___keyList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0 = __this->___valueList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_1 = (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 33));
		((  void (*) (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		__this->___valueList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList), (void*)L_1);
	}

IL_0014:
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_2 = __this->___valueList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m918055FE29F64F5A3829E6B58933240CBD7CF80A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsReadOnly_mC0715D1726D2216C2BBA4C4665DC448D06A40D43_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsFixedSize_m2E8BE4D04E3E169C345AD04BB8E30F373FB93797_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_ICollection_get_IsSynchronized_m0C699123D6114FF7A6285B60728B72CB9ED2BD64_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_ICollection_get_SyncRoot_m20ED86A54769C61DE751A3952BBDD778D3B1F701_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mD7568EA1182318C8D54FF2F3BD633C7D4B161CE2_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___keys;
		int32_t L_3 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_3, NULL);
	}

IL_0027:
	{
		bool L_4;
		L_4 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0040:
	{
		__this->____size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_Contains_m31D1A606D3202F88790C274AE45023C52D3ABD8A_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3BF3B25F198D66132212DE2A3BEEE316C1BDF1AF_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_24 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	int32_t V_0 = 0;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = ___1_arrayIndex;
		int32_t L_11;
		L_11 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0046:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->___keys;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___values;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_20: *(void**)L_20));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		il2cpp_codegen_memcpy(L_24, V_1, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_24, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), (void*)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0077:
	{
		int32_t L_26 = V_0;
		int32_t L_27;
		L_27 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_ICollection_CopyTo_m0DE93E0255FA7B7EC7A5D41A276741CB2A19C133_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_49 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_54 = L_34;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_53 = L_33;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_55 = L_35;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_36 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_56 = L_36;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
		int32_t L_18 = ___1_index;
		int32_t L_19;
		L_19 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		RuntimeArray* L_21 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInst((RuntimeObject*)L_21, il2cpp_rgctx_data(method->klass->rgctx_data, 45)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		V_1 = 0;
		goto IL_00b6;
	}

IL_008c:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->___keys;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = __this->___values;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		memset(L_36, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_34, L_29, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_33), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_36, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 13), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b6:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		RuntimeArray* L_40 = ___0_array;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_40, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
		if (L_41)
		{
			goto IL_00da;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00da:
	{
	}
	try
	{
		{
			V_3 = 0;
			goto IL_010a_1;
		}

IL_00df_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = __this->___keys;
			int32_t L_47 = V_3;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			il2cpp_codegen_memcpy(L_49, (L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = __this->___values;
			int32_t L_51 = V_3;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			il2cpp_codegen_memcpy(L_53, (L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
			memset(L_56, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_54, L_49, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_53), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13), L_56);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_57);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, L_45))), (RuntimeObject*)L_57);
			int32_t L_58 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_010a_1:
		{
			int32_t L_59 = V_3;
			int32_t L_60;
			L_60 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00df_1;
			}
		}
		{
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___keys;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0025:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_min;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___0_min;
		V_0 = L_5;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11A03CF9E906BAF59C1F708CE0150B89E36F5F32_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_GetEnumerator_m8FDF835FE585FFADB347CDB3EC09F78A53502006_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IEnumerable_GetEnumerator_m7E1C72FB502649A3054AA6D3BCB06BF198E9DF6C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 49), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetKey_m977764A3D57285814E6D5D9B191021BF4DCF8621_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_get_Item_m4B9BA956EABFE4BE97DF5CA24A015A651D09D3A7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 9)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___values;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}

IL_0019:
	{
		String_t* L_8;
		L_8 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 9), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key));
		String_t* L_9;
		L_9 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), (RuntimeObject*)L_8, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_10 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_15 = L_11;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->___values;
		int32_t L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
		int32_t L_12 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Item_m97EC5F8C45891CC6F911F817655589D9203057B4_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_10);
		return L_11;
	}

IL_002b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_set_Item_m8B859F5250231E8D677DF031E5E0FEDFE8C94BF9_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_value;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0031:
	{
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_8);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9))), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	}
	try
	{
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_11 = ___1_value;
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_12);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)))));
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_14 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_15 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 27)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_15, (RuntimeObject*)L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_19, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0068:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___values;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 55));
	}

IL_001e:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___keys;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->___values;
		int32_t L_12 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->___values;
		int32_t L_14 = ___0_index;
		int32_t L_15 = __this->____size;
		int32_t L_16 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
	}

IL_0061:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->___keys;
		int32_t L_18 = ___0_index;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_key : &___1_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_17);
		il2cpp_codegen_memcpy((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), L_19, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), (void*)L_19);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->___values;
		int32_t L_21 = ___0_index;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? ___2_value : &___2_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_20);
		il2cpp_codegen_memcpy((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), L_22, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), (void*)L_22);
		int32_t L_23 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_m6130DC03E87B7D7278E93114284F5B95602AE039_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_7, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_7);
		return (bool)1;
	}

IL_0020:
	{
		Il2CppFullySharedGenericAny* L_8 = ___1_value;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___keys;
		int32_t L_11 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___keys;
		int32_t L_13 = ___0_index;
		int32_t L_14 = __this->____size;
		int32_t L_15 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___values;
		int32_t L_17 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		int32_t L_19 = ___0_index;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), (RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0074:
	{
		bool L_22;
		L_22 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->___keys;
		int32_t L_24 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_25, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), L_25, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), (void*)L_25);
	}

IL_0095:
	{
		bool L_26;
		L_26 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->___values;
		int32_t L_28 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_29, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_27);
		il2cpp_codegen_memcpy((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_29, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (void**)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_29);
	}

IL_00b6:
	{
		int32_t L_30 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_30, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Remove_m4A5603583AFC8DE869154A5D1B5973C81FADC18D_gshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_3);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAE78CED8A7F80A5176ECBFCC018818AC6E4CE904_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_11, L_12);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m55C55F93D8AF10CF269BD9A00A37CEB86BEEA3E8_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>((uint8_t*)L_1);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_0 = ___0_ptr;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* Span_1_get_Item_mE286FCA60FE0B4DAF2DDF5FA21CAF4CBAEDADA7A_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* Span_1_GetPinnableReference_mB43FC6D4E6A54B51AAE344206AC46F58387BD835_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE0E1920C90808D250022F090EC289C4386B0F5A9_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mA2449BA768449645188C34A2289095A376316BA4_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_19 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_18 = L_19;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_24 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_23 = L_24;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_29 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_28 = L_29;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_34 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_33 = L_34;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_39 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_38 = L_39;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_44 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_43 = L_44;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_49 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_48 = L_49;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_54 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_64 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_63 = L_64;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_69 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_68 = L_69;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_74 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_73 = L_74;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_79 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF L_85 = ___0_value;
		*(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m63C456656628E779A8500F8CBBE1157BBA96EEA3_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_2 = ___0_destination;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m2973E1B9DDD06F47C08E63D2CEAD68C783105862_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_2 = ___0_destination;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_1));
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C Span_1_op_Implicit_mC1B2D2DF7A5AE05F4BC68CB59E0CDF442C3EDB36_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_0 = ___0_span;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mDAF2FDCB362C3BDA46F28FB98F38201FE8C81F36_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_Slice_m9A401C53CEA77D05976939724AF49A4D248FE07E_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_Slice_m3704114055D41FD2CD49E6568148C9AD15F28528_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Span_1_ToArray_m9868B14AC485494DDE053AEB7C0F88FD7AA7BD5D_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_3 = (ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)(ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_5);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_mE3B827CD2EB92286185DEDECD92FB8620B37E54C(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD6062D3D7805F692EF406774A839A30253F3CB73_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mA0B400852DF6D253C83D451048EAFF8B20BF5B50_gshared (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 Span_1_op_Implicit_mDCAA72116DDE12BB276E84AE54C2E20B7DF4895F_gshared (ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_3);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6FCD3079647BFBE244F769CF3FAFBDA49A372172_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_11, L_12);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m34FB394D94EAE8C621DB5ADAA2575CDFD24FC332_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>((uint8_t*)L_1);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_0 = ___0_ptr;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* Span_1_get_Item_mBD303234A7E9B753184D757EC24A06FF04A8E5AE_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* Span_1_GetPinnableReference_m5E82EA56561532C155DB2A8ECCE59F96746C95F7_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mC521241CDA15620D238576515F9BB45FEE425C97_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m2D5A001C23AA3F8429919013660938BE893740D0_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_19 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_18 = L_19;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_24 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_23 = L_24;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_29 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_28 = L_29;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_34 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_33 = L_34;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_39 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_38 = L_39;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_44 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_43 = L_44;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_49 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_48 = L_49;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_54 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_64 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_63 = L_64;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_69 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_68 = L_69;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_74 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_73 = L_74;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_79 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 L_85 = ___0_value;
		*(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC80A60121A9D2BAAEF45247B6B3C4CF623E83547_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_2 = ___0_destination;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m9269E77EE12D8EC5560B3365FB1719C7693C60F0_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_2 = ___0_destination;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_1));
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 Span_1_op_Implicit_m13151A2073638337571C33EED289818C7BA6BB8A_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_0 = ___0_span;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m30CCED276E225BF8FD8AD50F2F743E677C7BBBF0_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_Slice_m01F1F664A4746BAFB934A64802D98367C91A97B9_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_Slice_m07C422D3B656A2BDE018D4219242753088B8F9A4_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Span_1_ToArray_mDB79A4A53BACAF323A00DD2D38DD3E9CF65463CF_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_3 = (ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)(ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_5);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_m26B52FA01F4D2401DF1F1FE8C792A9D5BFB3C73F(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m284F37151401DB45FA134AF8DA0F7CD0EC25C62B_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m271B76F16679472890726605D94206698FF54DD3_gshared (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E Span_1_op_Implicit_mCC5DE035D560A0B712F0A504C62F932249494DA1_gshared (ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_3);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mADE2AEBB7C3D2FBFF33E7E422E8203C832203E28_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_11, L_12);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB139A873BA87F40A24427804F2F31C106E055EE4_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>((uint8_t*)L_1);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_0 = ___0_ptr;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* Span_1_get_Item_m88F98C0E18FAB1D3BB592A3F3612B3F0A1189B76_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* Span_1_GetPinnableReference_m8563165C512530B220EA02D296F47FE0D8217F7E_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mF89623E796627913E0F0B5CFE1555DC09A916332_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m11DA0EF750356D001F572C61050E725B2A220E56_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_19 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_18 = L_19;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_24 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_23 = L_24;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_29 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_28 = L_29;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_34 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_33 = L_34;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_39 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_38 = L_39;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_44 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_43 = L_44;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_49 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_48 = L_49;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_54 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_64 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_63 = L_64;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_69 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_68 = L_69;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_74 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_73 = L_74;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_79 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 L_85 = ___0_value;
		*(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m8A236A232CA205797669FAD508412B6752E7BC62_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_2 = ___0_destination;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m00D7FFF409DA079506FDDC7023F53CF492449325_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_2 = ___0_destination;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_1));
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF Span_1_op_Implicit_m43BB193D0DC58E9A76B620DA6ABA2C204E415FDD_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_0 = ___0_span;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m4BFB824E24A3831CB21595359FB94FCF091A3957_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_Slice_m993DC1FE369BC64665715FDE0BF9733E03EA1F87_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_Slice_m74912E46EFB63B51BF31271491E8780B705957C5_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Span_1_ToArray_mBA5546049EB448632E503D3E34DCFE3499D306EF_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_3 = (ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)(ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_5);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_m5A7E189B4D5EC3B1D1D4E80956202965A328E2D7(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mD9997FEB1175FCE7C1C672C8165A5564CD31362B_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mE94AE0685AEA474E6D500440FFB64FBD4F7F41C3_gshared (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 Span_1_op_Implicit_mD40611EF95BD13FC5FC2C95625751F5B4E77449A_gshared (ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_3);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4587ECB93C291373BD50F102CC858DFD82415B6A_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_11, L_12);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA681DC9E059FDD25BA3A03DBC25F43DCE861B392_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>((uint8_t*)L_1);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_0 = ___0_ptr;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* Span_1_get_Item_m5E1E11AA5E8AF9C49950B23F8B5CCD12CFC81D0E_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* Span_1_GetPinnableReference_mFEDC24A680C6A3C92AB1C0DC18F2D91244294FBB_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCEFC77AACCE118F65E7ED0D4E31A4CF89547C9D9_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mD924D338027F32D2F6F9B3CE3DF9123A1107654A_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_19 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_18 = L_19;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_24 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_23 = L_24;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_29 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_28 = L_29;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_34 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_33 = L_34;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_39 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_38 = L_39;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_44 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_43 = L_44;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_49 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_48 = L_49;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_54 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_64 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_63 = L_64;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_69 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_68 = L_69;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_74 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_73 = L_74;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_79 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 L_85 = ___0_value;
		*(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m42E9C7A600011495FD6F0B2010CAC2BE97A2532D_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_2 = ___0_destination;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mBD7A41436DC0CE7CE5976BE763BC4658F448C68F_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_2 = ___0_destination;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_1));
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E Span_1_op_Implicit_m86F253AE0E5F442F4F828CA649F3B93528F1D394_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_0 = ___0_span;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m84C896977355D1614F97685460F590C10A614E63_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_Slice_m1C3C2C4D5574AE1A20DB29F356034A05D3CE78F0_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_Slice_mAA339F7DDD4AEFA70643BC48EF0AA966F8BE46D5_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Span_1_ToArray_mBA18ABF477FEF417A431B2637AD3B3CDC978B9F3_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_3 = (ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)(ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_5);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3D67C96FB7439E337470C35B3EAFDEA4B6DFC298(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m8A1BD62C36E76D7B416A9E664D3599FA48E6BAA4_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m22461099C3CAE9B1208C2B904529469A33C6A930_gshared (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 Span_1_op_Implicit_mBA0FA337777821BB38E7B269E5FE737CA64F41EF_gshared (ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_3);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7963C8C2BB2BDF5D2029232ACF1071D9B8D5F76D_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_11, L_12);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1F8390129D136D7B2379294CDB3EC704E4B3B4DD_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>((uint8_t*)L_1);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_0 = ___0_ptr;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* Span_1_get_Item_m3B4836296385C837101C67BD31972D40ACDA7783_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* Span_1_GetPinnableReference_m06B3765656F09DA09F603CBE9C0812F41410FD95_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m043D21F663F984E4CB70BDCA4065F892B29650FD_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mEAED338CCED73B3A1FCDC04BA325EBB715836CC8_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_19 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_18 = L_19;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_24 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_23 = L_24;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_29 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_28 = L_29;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_34 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_33 = L_34;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_39 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_38 = L_39;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_44 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_43 = L_44;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_49 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_48 = L_49;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_54 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_64 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_63 = L_64;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_69 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_68 = L_69;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_74 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_73 = L_74;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_79 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 L_85 = ___0_value;
		*(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m138241886D789A88F4F4672329A40B0985BCD44E_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_2 = ___0_destination;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFEB0E87463316F899F30419CEE901A94F9CFA415_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_2 = ___0_destination;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_1));
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 Span_1_op_Implicit_mD0E9F86B712B4B87128A87DDB325EF93E1098CFD_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_0 = ___0_span;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m535501D0994F9BBFBAEEA6B74B3718BC28D19BB1_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_Slice_mE19FF3B85E362F4E50DFDBF637069A8A5388C3B7_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_Slice_m14E9331C4343A0F3D495CE5E4164395CAF06EF23_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Span_1_ToArray_mF67339C4C3807F5EA8B10BE58A4D592D5E440BCF_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_3 = (ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)(ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_5);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mB426B6150927A4611C2221DC9D429FCF918DC018(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m362660374890B1B609CD3ADCC5EE35A96C30FCC7_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m917C4618E9A6507F538B967C56F88FE6A90295B6_gshared (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 Span_1_op_Implicit_m20043CA32C568A371E32ADC2A53ABF534517AA28_gshared (ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>(L_3);
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6202A66935A1F2C54DD251452AC9922AC51DC388_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,int32_t>(L_11, L_12);
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDA76062A27DF69B9650E3F1BA5F295506BF581BC_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>((uint8_t*)L_1);
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_0 = ___0_ptr;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* Span_1_get_Item_mAF4896ED82DF387990DB37F41249D6F8915F0472_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* Span_1_GetPinnableReference_mF7C369D5B6FFD138E622A97D747BA1A67491B0C5_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mB253BC9AB75E5CE61E0113FC4378ED670C10B15A_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m920FEC0DF4A1B9F4F9B2CE70E9D150164A8AFBAA_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_19 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_18 = L_19;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_24 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_23 = L_24;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_29 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_28 = L_29;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_34 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_33 = L_34;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_39 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_38 = L_39;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_44 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_43 = L_44;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_49 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_48 = L_49;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_54 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_64 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_63 = L_64;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_69 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_68 = L_69;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_74 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_73 = L_74;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_79 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 L_85 = ___0_value;
		*(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0F96E533A34D3CA9DEEEA85B8974B4388AD72766_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_2 = ___0_destination;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mDEE805FFC52D7B757DADAE5D37A6DA917BE1901C_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_2 = ___0_destination;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_1));
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060 Span_1_op_Implicit_mA32A55EB56310FA525FB17CDE269DD65BCD6D92F_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_0 = ___0_span;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m5DC840A7966A8C391FC4C2C257A78881BDAF8CCF_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB44C0CA453AE954726C0A20140A9C5BF689ECCB6_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 Span_1_Slice_m7BB6C47C13018CADDEFF5801C81D30825AFFC6DC_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 Span_1_Slice_m1FDEFC7EFBBA862DCBDDE27A1E5140603D1B6861_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* Span_1_ToArray_m7D3EB0DEA882B724678108AE738B6C15BFE9E606_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_1;
		L_1 = Array_Empty_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_m9610CF27DDEB0303A77BE0D04AB086D26F5B633B_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_3 = (ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77*)(ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>(L_5);
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_mA62826EC26435604BF609847FBBFA4479C7BFFAD(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mFAC2C414C75809B60CF2C5C272B1D9106044C186_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1B37A9ED188E790573836B5D96BC6A601C9BF21B_gshared (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 Span_1_op_Implicit_m0FD94A7A9E4E953373EF3AC677DD51A898214A84_gshared (ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_0 = ___0_array;
		Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_3);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2C8DC4F59B93DC89880FB0CDC1ED0014EB9662BC_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_11, L_12);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7622D193EC24E0C2F72015ADCD4D80DBC22B839C_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>((uint8_t*)L_1);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_0 = ___0_ptr;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* Span_1_get_Item_m527D5C26342D9D634651F4255F5A190D32D3C6CF_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* Span_1_GetPinnableReference_m10568574C644536E2A84A332FF82E96AD36E0B9D_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE971DE8F7FBC3FDABB91E590246095E5B2BF5959_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m309FDEA3C4BAE56A51A76664193DE62055FF297C_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_19 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_18 = L_19;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_24 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_23 = L_24;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_29 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_28 = L_29;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_34 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_33 = L_34;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_39 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_38 = L_39;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_44 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_43 = L_44;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_49 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_48 = L_49;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_54 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_64 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_63 = L_64;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_69 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_68 = L_69;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_74 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_73 = L_74;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_79 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 L_85 = ___0_value;
		*(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA05AD0DC0F6AEA4A322CBFE97A0FAEBFEF029F41_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_2 = ___0_destination;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m65A774F4891F26014FD264D92037DAC258E1726E_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_2 = ___0_destination;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_1));
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC Span_1_op_Implicit_mBF18A3513FB5B339224F001779FA0DDE09138360_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_0 = ___0_span;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB2E6B63179C292CC46DF3E4408F76214E232F4B4_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_Slice_m1F1AF7380AC4E39426980C6B85066C0DA35056B5_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_Slice_m2AB4990B59A49C82593A4B79CE642219B361B312_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Span_1_ToArray_m68E68AEF610408894D41450567BE6EF6633C16AA_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_3 = (ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)(ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_5);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mEFDEB0288367005E5A913CF68C9D6520A1E521F1(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m30F088F4385C9140B3EB71BBB1C10C824F6DB6EA_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m12CBECA3CA5D0BBFF6E4F1E50E4405E22CABDE05_gshared (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 Span_1_op_Implicit_m19556EEEE335B5D124A4A4A3655220856DD730B0_gshared (ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_3);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE202C0BF66D1B90557261BBF7E49AEBC563AEC0B_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_11, L_12);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m84D64B79439718C114CD0BE716813179D3B40F5E_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>((uint8_t*)L_1);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_0 = ___0_ptr;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* Span_1_get_Item_mDA105C9F226EE831CEDAAA87E26F6310F584ED76_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* Span_1_GetPinnableReference_m47E738017B77610D06A88B4D92B6752265F6D455_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDA677C68D19B00A3C7F1CB9958AEF42284468D94_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCB747B184BEE6CCE645F6F690FCABE759F3C9CED_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_19 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_18 = L_19;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_24 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_23 = L_24;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_29 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_28 = L_29;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_34 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_33 = L_34;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_39 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_38 = L_39;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_44 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_43 = L_44;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_49 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_48 = L_49;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_54 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_64 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_63 = L_64;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_69 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_68 = L_69;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_74 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_73 = L_74;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_79 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 L_85 = ___0_value;
		*(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m86690A98A08A4E02559D5C1C90221E02DD4E2073_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_2 = ___0_destination;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mF6EE2638BC83053FD4927FC6196ED4898B8D6D04_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_2 = ___0_destination;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_1));
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 Span_1_op_Implicit_mAA587BE631FD82ADBCAC984F5DAE98F30E1B19A3_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_0 = ___0_span;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m552B96DF329A7AD5B8D3776DE4F41513F5E4CB21_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_Slice_m383DBBEBFD0852D831DEAF09F5D4500733FBBA49_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_Slice_m106D95FE5B210303F185C478F7ED3F3354F73E17_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Span_1_ToArray_m97EF347F61CB22662DAFCB4653CE499107C815CE_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_3 = (ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)(ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_5);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_mD628BDA4AA7174CCCAE74A7616186B62F9CFBC25(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mF43D0A9F72ED6E90D0CB71E871A26469218072EE_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m15AF83111097C4CA3F5F0EF958D8D08C53318D2F_gshared (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 Span_1_op_Implicit_m0EC5F027065C715AECB362A17AD0D8ED44BE7019_gshared (ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_3);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2A3D7278F00E3E54B872AC140EAF4E7B6B5F1819_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_11, L_12);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD747FC46BBD31A05E715646C2E425B372461A11C_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>((uint8_t*)L_1);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_0 = ___0_ptr;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* Span_1_get_Item_mE7D311EE835A9DB090555D850FDE2B122E11578E_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* Span_1_GetPinnableReference_mE009049303E4B2E5169205271896A5B76A27226E_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6493B7BB5AC5F53438F14C4A85363AC34A378BB3_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC4EA5E9354A24DC5E014F73D6922084CFFAC8B36_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_19 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_18 = L_19;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_24 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_23 = L_24;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_29 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_28 = L_29;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_34 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_33 = L_34;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_39 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_38 = L_39;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_44 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_43 = L_44;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_49 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_48 = L_49;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_54 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_64 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_63 = L_64;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_69 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_68 = L_69;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_74 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_73 = L_74;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_79 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB L_85 = ___0_value;
		*(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m4B48971A61380BDA06907037F673964707BFF86A_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_2 = ___0_destination;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mA25DCB18666DB601406F447CCB669117B54C9282_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_2 = ___0_destination;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_1));
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E Span_1_op_Implicit_m27EFD9CD0754E3C71FDDEB6CDC708D2F1DEA17FF_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_0 = ___0_span;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m72E8BA9B870F18FBF9F60E8ECEF2B6F4A9C0BF96_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_Slice_m47A4152F3B90B66A03656DC588C95B120A46AC32_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_Slice_mABCFD7CB0A6360832A85B773813448567CE013E2_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Span_1_ToArray_m6FA877603F5C58FA6CF6C62B9922FDA63DE9533A_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_1;
		L_1 = Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_3 = (ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)(ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_5);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_m1F05EE0A1453140CB343F7F6078DCA731CF99602(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m763F899FACCE281C13F43298223A09D1ACAC3A35_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1E6DC5431A2D3458E075DF80E348E1C11FDE2F67_gshared (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 Span_1_op_Implicit_m71065A14DC84B1B0A014243A394CC709B42B0B1A_gshared (ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, const RuntimeMethod* method) 
{
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241));
		goto IL_0037;
	}

IL_0037:
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>(L_3);
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m25919B4413360540CFCD772D03508255089A2B61_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_11;
		L_11 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>(L_10);
		int32_t L_12 = ___1_start;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_13;
		L_13 = il2cpp_unsafe_add<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,int32_t>(L_11, L_12);
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m37C54DF95F209297137BA043972B8B99A8ED3F53_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_2;
		L_2 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>((uint8_t*)L_1);
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_0 = ___0_ptr;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* Span_1_get_Item_mE7EB30E7E23A50C1934003CF7FCA24B634A0407C_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_5;
		L_5 = il2cpp_unsafe_add<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* Span_1_GetPinnableReference_m235F3BD2BB671C07EE7C47586E7D4133AA2C2872_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_1;
		L_1 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m78FA20DD3C4EA914DA27EFD1AB31A5C2EAC63910_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_0 = __this->____pointer;
		V_0 = L_0;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m8A2D7D5122688536ABEF5EE8AFF5D4CF9DDE7CBA_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_4 = __this->____pointer;
		V_2 = L_4;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_12 = __this->____pointer;
		V_2 = L_12;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_19 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_18 = L_19;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_24 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_23 = L_24;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_29 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_28 = L_29;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_34 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_33 = L_34;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_39 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_38 = L_39;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_44 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_43 = L_44;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_49 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_48 = L_49;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_54 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_64 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_63 = L_64;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_69 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_68 = L_69;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_74 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_73 = L_74;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_79 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 L_85 = ___0_value;
		*(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD77DD397B3A9B2CF5BC206DA9C12018C1A52250D_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_2 = ___0_destination;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_3 = L_2.____pointer;
		V_0 = L_3;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m566EED15EE7E301DCF8B5DB44F568CDD8C4ADA4E_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_2 = ___0_destination;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_3 = L_2.____pointer;
		V_1 = L_3;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_1));
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073 Span_1_op_Implicit_m7E89A00967A40B319A4B605DC3EE1D649B2CC4C0_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_0 = ___0_span;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_1 = L_0.____pointer;
		V_0 = L_1;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m7AA8768EE6E19C2D70DE5AE3844FD9792954C197_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m73613EE6FC79B0CEE60603AC957D7413194CFE1B_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5 = __this->____pointer;
		V_1 = L_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 Span_1_Slice_m13D0FF882D40B79276F4096146EEFCDBB447240B_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_2 = __this->____pointer;
		V_0 = L_2;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_5;
		L_5 = il2cpp_unsafe_add<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 Span_1_Slice_mD5EBCB317CEC6B9DB9F0A2F49027E108C33FB25C_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5 = __this->____pointer;
		V_0 = L_5;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_8;
		L_8 = il2cpp_unsafe_add<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* Span_1_ToArray_m89A3CB7FE5A80FEE3D59ABE4786AA782D7FE9191_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_1;
		L_1 = Array_Empty_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mE4640DBE17BCF2AD25DF6E18DDD33FFE0B77D234_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_3 = (Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02*)(Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_6;
		L_6 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>(L_5);
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_7 = __this->____pointer;
		V_0 = L_7;
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mBF9884FB9E4299F07AB2C413E6567D080099FB30(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m0C969D407FC63C7FF56497F5CCE03D0BEFA76D86_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCB4A04D5FE03147279D67C0B6C35DED714BD22BF_gshared (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 Span_1_op_Implicit_m680FFD5E1030324FE5F2987787C9FA6EE3EC9359_gshared (Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, const RuntimeMethod* method) 
{
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_0 = ___0_array;
		Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0037;
	}

IL_0037:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_3);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6AD4D32958406E99771BD80D95955B6C1C1D8C7E_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_11;
		L_11 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_10);
		int32_t L_12 = ___1_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_13;
		L_13 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_11, L_12);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF21BAD08783861F66A5DC64B2008B831D4E70ECD_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((uint8_t*)L_1);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* Span_1_get_Item_m8F05BEF265BF6D467B7F3EC7E0FC6144A17514B9_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* Span_1_GetPinnableReference_m1651F4B2CE8A49E7C5F7AFA47B2C760465CD6E77_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_1;
		L_1 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1B718013A2B8F944A651556CC5C238834972E189_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_0 = __this->____pointer;
		V_0 = L_0;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCFE2C408BFC0620F17CED47CB3A5E4E9097A2A2C_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_4 = __this->____pointer;
		V_2 = L_4;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_12 = __this->____pointer;
		V_2 = L_12;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_19 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_18 = L_19;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_24 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_23 = L_24;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_29 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_28 = L_29;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_34 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_33 = L_34;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_39 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_38 = L_39;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_44 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_43 = L_44;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_49 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_48 = L_49;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_54 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_64 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_63 = L_64;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_69 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_68 = L_69;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_74 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_73 = L_74;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_79 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_85 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mDCB97095A5B438EEDD243FF0924E8AFE4D0F040F_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_0 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE4C5E1C41D72D994C9A4EAA1714F82F57ACB3D1D_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_1 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 Span_1_op_Implicit_m55793F89576C91F51F84FEE419581F8B4B5F38C5_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_0 = ___0_span;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1 = L_0.____pointer;
		V_0 = L_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6103F745B1C7B9A9BD3A3116AF5F988065C25AF4_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_Slice_m755E9ED71968348BB9C4E8463E30DE839E3FEFD0_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_Slice_mA98F6A471377545511DC5E22FD4DF75F4E10F707_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Span_1_ToArray_m33F9F235649E5BECFA4795C77789731BF922CFC7_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_1;
		L_1 = Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_3 = (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)(BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_5);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_7 = __this->____pointer;
		V_0 = L_7;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m31F00188DB58D0A6AC422C1110FE121512B83A8B_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mB00CEDEC6497D53AB78D6B46111F2695915CF97A_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_op_Implicit_m94CCC4AEF130B0783BEB1BFB5ACB39512FB9EF03_gshared (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF010B57B13C6597DA14D7957BD2E07090F8336A6_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		bool* L_11;
		L_11 = il2cpp_unsafe_as_ref<bool>(L_10);
		int32_t L_12 = ___1_start;
		bool* L_13;
		L_13 = il2cpp_unsafe_add<bool,int32_t>(L_11, L_12);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9863659F38934C7B3CF0E727F433498C43070D2F_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		bool* L_2;
		L_2 = il2cpp_unsafe_as_ref<bool>((uint8_t*)L_1);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_get_Item_m27BAFEC8B3FFE7DEB25D60F10C9941C139B90E41_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_GetPinnableReference_mC68E9B3CD4F8680E06367DD4736FA06D7D3CA4F2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_1;
		L_1 = il2cpp_unsafe_as_ref<bool>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m519E41C1F421677B73AAFBBC520A75F377A7CF34_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_0 = __this->____pointer;
		V_0 = L_0;
		bool* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<bool>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m82EADA29C24D18F714A43323334596A4FCB9FD82_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	bool* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<bool>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		bool L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_4 = __this->____pointer;
		V_2 = L_4;
		bool* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_12 = __this->____pointer;
		V_2 = L_12;
		bool* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<bool>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		bool* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		bool* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		bool L_19 = ___0_value;
		*(bool*)L_18 = L_19;
		bool* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		bool* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		bool L_24 = ___0_value;
		*(bool*)L_23 = L_24;
		bool* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		bool* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		bool L_29 = ___0_value;
		*(bool*)L_28 = L_29;
		bool* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		bool* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		bool L_34 = ___0_value;
		*(bool*)L_33 = L_34;
		bool* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		bool* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		bool L_39 = ___0_value;
		*(bool*)L_38 = L_39;
		bool* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		bool* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		bool L_44 = ___0_value;
		*(bool*)L_43 = L_44;
		bool* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		bool* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		bool L_49 = ___0_value;
		*(bool*)L_48 = L_49;
		bool* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		bool* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		bool L_54 = ___0_value;
		*(bool*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		bool* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		bool* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		bool L_64 = ___0_value;
		*(bool*)L_63 = L_64;
		bool* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		bool* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		bool L_69 = ___0_value;
		*(bool*)L_68 = L_69;
		bool* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		bool* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		bool L_74 = ___0_value;
		*(bool*)L_73 = L_74;
		bool* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		bool* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		bool L_79 = ___0_value;
		*(bool*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		bool* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		bool* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		bool L_85 = ___0_value;
		*(bool*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD4A4E2B11E4B55D0E34818F92516CA8C73F66E52_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_0 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m840B35C6072B9118C6B103D322BACAAE77E2F08B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_1 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 Span_1_op_Implicit_m532947D2F4A072CD15514EE6D890A44C2B4C465B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_0 = ___0_span;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1 = L_0.____pointer;
		V_0 = L_1;
		bool* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF5B8BAB40C1B80B9B1A0921B31B2968310CB65A3_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_mF6D7367FEA695E2CE8E186FC9798415839735753_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_m673F7A3E7082015E7E5AA80ACF267623570ABB84_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Span_1_ToArray_mFC04BEB2B94DC9AB1599B278616C046F62EA99C2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		bool* L_6;
		L_6 = il2cpp_unsafe_as_ref<bool>(L_5);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_7 = __this->____pointer;
		V_0 = L_7;
		bool* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55CEACD776C1B696BF7E0EEA57CA12538E5B6A93_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1F00FAF1BC9554C7D07229B28319B50B119EAF21_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_op_Implicit_m1F838ECD24613509CFE3CA0A82DD6F0762357A99_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m61CB4E239F4B8535AE2EB854BD18DDFC1142FD07_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_10);
		int32_t L_12 = ___1_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_11, L_12);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m03647096ABFA9C361BD608B88E888E6D24BD45B6_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((uint8_t*)L_1);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_get_Item_m52CBA5BCE5D91D266DC53BC8CAA58B6B838758C9_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_GetPinnableReference_mEFCAEA30D41DF35EEA06996BF69E98951950937B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCB7BFD6347A5FC9F5C98881FBB6EED05DC7CEAFB_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_0 = __this->____pointer;
		V_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m179EE62D8B2DFC60ADF134F7DF0633D7949836EE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_4 = __this->____pointer;
		V_2 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_12 = __this->____pointer;
		V_2 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_18 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = L_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_33 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_38 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_43 = L_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_48 = L_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_63 = L_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_68 = L_69;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_73 = L_74;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m312B7E6091A77C90731BB4B3B0F9013A0380E8FE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m222A33CADBBA4AE2718BA2E3FB364B9595A83E5E_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 Span_1_op_Implicit_m37C59BB49FE22493B2449536D2487DC02E45B376_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_0 = ___0_span;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2DA66DEE0290DEFDE874C1F418EF5AEB17E8E2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_m0348A44E5418C052C9535570A1DE71BB4AE61E71_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_mE5AD8E826B11284EBF2D856E2D337D31DE34D25B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Span_1_ToArray_m6F8FFA52461A0D5172130CD6B6AF02461326AF5C_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_5);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_7 = __this->____pointer;
		V_0 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB55BD6134EA35A11485DCF408D6D5FFC0BD3F533_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6962C2A5B1AD4080D5573C23E91A19EB6D728CF7_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_op_Implicit_m9C1413FB618ED0B2E091F5EF63CE03A4C0AEC1A2_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7F27D45B1D68DA5173A121174DC1B8EEF1D43D5E_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_10);
		int32_t L_12 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_11, L_12);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3F2D12A6DE9449A7F172A8190B51721D3533512A_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((uint8_t*)L_1);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_get_Item_mCE0F47FEF30AFC052EE646724CF0CCA095E61295_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_GetPinnableReference_m123DCF19CBBED00AF2DA4DF6BB89335CFBAD4285_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m44937991C3C572BAA1C7D8B220198A6D73296EFD_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_0 = __this->____pointer;
		V_0 = L_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC1DCF00C88E61AB4C769979DAB36C6AC2FD7AC8F_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_4 = __this->____pointer;
		V_2 = L_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_12 = __this->____pointer;
		V_2 = L_12;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_18 = L_19;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_23 = L_24;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_28 = L_29;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_33 = L_34;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_38 = L_39;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_43 = L_44;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_49 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_48 = L_49;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_63 = L_64;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_69 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_68 = L_69;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_74 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_73 = L_74;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_79 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_85 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9D9E0B986FEB6121776F6E72762BFA348872D32D_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m5751351E4F7B9348F5F42D82F5219BC76C16AEAF_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC Span_1_op_Implicit_mF3E148EA33236C003117DE38E62DE33D938EC163_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_0 = ___0_span;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mECADFF7BF87B76EA399CEE34F582D9F58876B9C6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_m7D6809980EE719FEF240C5A1F91ED1F8A49438D6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_mC32C0950E410BE1C194BBA46C50AD868A23A25B8_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Span_1_ToArray_mC46741F43EE2A7AF5495CB3595312D25F9E437E5_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_5);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_7 = __this->____pointer;
		V_0 = L_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1BC77A3C37539F0BD54EC0D5E1062B0612D351CA_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mE5B1E8B27CA89868BA83DBD5092B62AB77DF4565_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_op_Implicit_m8E6421CEC98AFF0BFB7F1C0A6796C55428A58195_gshared (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, const RuntimeMethod* method) 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>(L_3);
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7D534950CFDFB5710C1CB1B322A86ACC1E7A572C_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,int32_t>(L_11, L_12);
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m13A9B59ABEBE973B05E17199897F3322E90D7B79_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>((uint8_t*)L_1);
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_0 = ___0_ptr;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* Span_1_get_Item_m164AD9329BC2621C2E68016931C8344A902CCAF1_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* Span_1_GetPinnableReference_mC455810C8B70058152035FC30949B95D2F017852_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mD4DC5E7DA1899738137EA6BEA36D715F73831422_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m540C6DCD47C0ED9B575F5E8CC99E0433043FF76D_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_19 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_18 = L_19;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_24 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_23 = L_24;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_29 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_28 = L_29;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_34 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_33 = L_34;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_39 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_38 = L_39;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_44 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_43 = L_44;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_49 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_48 = L_49;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_54 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_64 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_63 = L_64;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_69 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_68 = L_69;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_74 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_73 = L_74;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_79 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB L_85 = ___0_value;
		*(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA74F74A12F3B0D10CD042E5D63822375FA64A0E2_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_2 = ___0_destination;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m8D690E276DE0F757E95AB776729EBC389E12CDF5_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_2 = ___0_destination;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_1));
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F Span_1_op_Implicit_m6844D480366FAD9A504550088A58A20B07F4BEF1_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_0 = ___0_span;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m116B26F5D9687E30AAEEC7CA0D6799209E85B0D8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m31DF93CD98E54C5B9A6CCA02AA123745ACA88151_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B Span_1_Slice_mB98F9EF39949C28432B4CC4EDA01346948F9DF25_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B Span_1_Slice_m9BF1BDDC204B11FE04245C871BF2C323FC286BA9_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* Span_1_ToArray_m1EA2702A1D12F42732B7D6354369AFC66B9E7A5B_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_1;
		L_1 = Array_Empty_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m66600286ECF824C65CCFB9B48D2696708471D766_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_3 = (ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1*)(ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>(L_5);
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m29BE455436643C8CD86C0BAE1194253CC0074C02(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mDC5FBCB2AC401F7DBEAD80B8603E000DEA8C01DB_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m2A85DB70F80F999ADCCAADB07EC578E00E66B16A_gshared (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B Span_1_op_Implicit_mED906E00061284BD7F37541D1944211B1E1E38D5_gshared (ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_0 = ___0_array;
		Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, const RuntimeMethod* method) 
{
	ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>(L_3);
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5E5845CEC36984A570EC0D17BEE9AAB70C703241_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>(L_10);
		int32_t L_12 = ___1_start;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_13;
		L_13 = il2cpp_unsafe_add<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,int32_t>(L_11, L_12);
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB174CD31CBE1458B43EFD49BF33DAA026B950530_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>((uint8_t*)L_1);
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_0 = ___0_ptr;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* Span_1_get_Item_m109A93A1A3C4657144E05ED568C284598788A6E0_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,int32_t>(L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* Span_1_GetPinnableReference_m53B420B4D04F485F1699322FD3D930407DD8828C_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mC14B8DE15D056DD879F98260EDD4BA842A44AFCE_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_0 = __this->____pointer;
		V_0 = L_0;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m6A38F0E76A1E2C2D4A9239EE1C04E5F6F9063789_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_4 = __this->____pointer;
		V_2 = L_4;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_12 = __this->____pointer;
		V_2 = L_12;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_19 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_18 = L_19;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_24 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_23 = L_24;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_29 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_28 = L_29;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_34 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_33 = L_34;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_39 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_38 = L_39;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_44 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_43 = L_44;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_49 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_48 = L_49;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_54 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_64 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_63 = L_64;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_69 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_68 = L_69;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_74 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_73 = L_74;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_79 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A L_85 = ___0_value;
		*(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m20459E178B2F7CC8B9960A0EE1A451C3DD6BA160_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_2 = ___0_destination;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m9DC9890F96B7DE430F6BDED38DEC1CBBC462981E_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_2 = ___0_destination;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_1));
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0 Span_1_op_Implicit_m36850ACB2B19230FC882E8F7A984EE799ADAA377_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_0 = ___0_span;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m1B1612A0CD2C0F18BB18DAC25376D14ED5FF7E55_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m95229524FF80677F2BC6E256061ECAC8E31A67A6_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5 = __this->____pointer;
		V_1 = L_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F Span_1_Slice_m3668C2F5784EE8C510C489E8ED1B9C1B7B11CB74_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_2 = __this->____pointer;
		V_0 = L_2;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_5;
		L_5 = il2cpp_unsafe_add<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F Span_1_Slice_mC045325979A8462ADDD0E3314107546F48BA187F_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5 = __this->____pointer;
		V_0 = L_5;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_8;
		L_8 = il2cpp_unsafe_add<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* Span_1_ToArray_m77F257AEE0AA9A511CE2EB76B74330A67E23DA4F_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_1;
		L_1 = Array_Empty_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mF92E9733522F85C07496167FFD21DEC5B7FC5F15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_3 = (ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A*)(ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20), (uint32_t)L_2);
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>(L_5);
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_7 = __this->____pointer;
		V_0 = L_7;
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mD8F954048F068878334A6D5F134B99E711BD5CE1(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m018C073463A437252E7BEF60616CC974EB0EA7CF_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m0603936569060AC025195B5FF7ED3E8CC85FFF43_gshared (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F Span_1_op_Implicit_m06148BF8A1589A93EFF329E113FBF65DF6D6002D_gshared (ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, const RuntimeMethod* method) 
{
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_0 = ___0_array;
		Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m64487A9B75AD6158F95444705EE659CB302E9643_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m486814B04933AE0AD908A6E84F054E69E593F519_gshared_inline (ReadOnlySpan_1_tE5B6C6B06B181D9FB3ABD652791402650C0A4D2C* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_0 = ___0_ptr;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5148F4274D7F06375E41819699D3819D4AB53D49_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_0 = ___0_ptr;
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* Array_Empty_TisConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF_m72EF3253C2E9789F8985ECF068D062D84F629DE8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ((EmptyArray_1_t5645AFD0E8443842BF722C48FE084A0AD8FB9C3F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mECEBB7C1E2BC9AF81AD47EE53D2B0AF011E45284_gshared_inline (Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3* __this, ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t35F04CB70AAB4058E6405A6BDEA494E252DACAF3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t89618F8D46BDC8F0A492202E68A183958F2FC4FF>(L_3);
		ByReference_1_t83F35C7EFBC572EB95F815B848281BDE8B44A4F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t57C56D499AA85F4642EDDD29DE3F9828836B090E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mACC5E03813D2C2E2E5812AB445801A9C89B752F7_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB5D26FA83D7E73B9FE0DA2358AFEC25DCD334136_gshared_inline (ReadOnlySpan_1_t6626CBD98C7082307B463E4D420E1E92870FDC75* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_0 = ___0_ptr;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3D9E8BE46934027B9617DC9F0FCEA467E015A2A3_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_0 = ___0_ptr;
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* Array_Empty_TisConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311_mF13347190D7D0EE065876325D56BB224D6F08BAB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ((EmptyArray_1_t80380D195D0EA1035062D1FC1D4A1A0C1FB2A452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m82F3A15D23CB782A3B6F4AE6D5BBF38D4CC49A25_gshared_inline (Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E* __this, ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2B1BDA80752478A46C9D81B4BAF735A2BE9F889E));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tDBA110D3F752E674C011C313AD05A5DC8E988311>(L_3);
		ByReference_1_tE1A5CD3454DA17B50077794D217E52DD32D9AC16 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t5AEC64301F69FA99A09E399F6074BB46C49F7D85* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4EE401795868F0D0EC7D16E1AE1214C64417B201_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m091B9228C833C805E0E66BCD0A4FB8099569AAB5_gshared_inline (ReadOnlySpan_1_tD2200ABCAC36D4F21B226DECE959822215A7B3CF* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_0 = ___0_ptr;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6417F54F9D24991E7F1EC11F8ABF59C3C55D0A43_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_0 = ___0_ptr;
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* Array_Empty_TisConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9_mEFBB7F990A1930431CE93FCEB3E2E0F4D4D256DB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ((EmptyArray_1_t326678ECDD356906907BCD03308AE05FCBB14738_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m16CA5D3A9032B99C2475FCE66F4B39F15DDFD9C7_gshared_inline (Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389* __this, ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2CBA60496AA487311BB9CE7FC3FA7B41ECC3C389));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t1BCC06C0F60F07E29531D84899C4892ECAC0A3A9>(L_3);
		ByReference_1_tD252E8502399F2F7A9BACEA8E2FCDCB413E15965 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t51C3D2D328411159203A7F170636CEEA8596368F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m036FEB4A0533F1CC3661A23345874CD37871B612_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m55CEB560D31889797B918E4F6954706A137E80CB_gshared_inline (ReadOnlySpan_1_tD88F9E955C20276FDF60215E83835A4EDBA8B22E* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_0 = ___0_ptr;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m80CF5D4924E66B9369C75957E9B580797CAB2548_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_0 = ___0_ptr;
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* Array_Empty_TisConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2_m3F9CDF736961046BF3B086C0C3BB438BE8F1BE9A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ((EmptyArray_1_t5DA3D6F58CFF7067A4473CC5C94140F6B0BB1383_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0017717306885D4CA7DFD90FA6E301FC9981DDA3_gshared_inline (Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801* __this, ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBC76F9CBE2CDB6B4082ED718343650B16863F801));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tFBC6B3ACE9611FE5642C0B1D89856983337DE8B2>(L_3);
		ByReference_1_t679433D06E149C06B120AF9C12F1F7644CB980D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF55311DBA7E59985DFB4DB89244E0784A36C3257* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mE14A112DB751D65FC86DCE9C269FCA057063DC92_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3E9BB899D766CC925C9E1A881252171272EF2825_gshared_inline (ReadOnlySpan_1_t950DAC27BD476F57C43E72B6B65F6EBF6F577F14* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_0 = ___0_ptr;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m6B3467AFCDE3AAD422A8027DAABA296C71498356_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_0 = ___0_ptr;
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* Array_Empty_TisConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33_mEEC4D7B76EF580FB1D1C63F788F236E64F4EB032_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ((EmptyArray_1_tD03B86572C4D1451C9314D535A6E0F8CA5939999_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF53C32F305919957A9F431D261DC0D802525CACF_gshared_inline (Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0* __this, ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF71D3F348F768F763B6B3EE7636D29972FD69FB0));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t37FAC4A786F0CC30B58ECE2BD80477617DC98A33>(L_3);
		ByReference_1_t3B3FFE05B66B174A384160A015F0C24596A0B793 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t59D0FD7C31468EB7FDB645579F1D7845B6CD26FD* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mC46D9080A05C6CF866F9C6A5C9E43474EA827C15_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5DC840A7966A8C391FC4C2C257A78881BDAF8CCF_gshared_inline (ReadOnlySpan_1_t8E1B73090C81CB59CF453AE41F98E721DA559060* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_0 = ___0_ptr;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7DC32810850688DE11D1015A989B68AF00E0D2FD_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_0 = ___0_ptr;
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* Array_Empty_TisConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3_m9610CF27DDEB0303A77BE0D04AB086D26F5B633B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_0 = ((EmptyArray_1_tEEBA432F625347612EDF171386752603C2967CE5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC4EC37C43B80495839248ED81C4F393A26C340B4_gshared_inline (Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380* __this, ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t76C6DCFC8BD850E208C145C3D50FD153FF352380));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_t424336CC957E4448CD318AF4AFB3360AD64144E3>(L_3);
		ByReference_1_t5885B706B4ED9C4C74D037A68A48EC0A23F7B436 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tDD82811763B262A89DCEE0D37E159ABCBC3BDB77* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4FF547CAB19AD276C3A5D1BB2D1A2C43F9D81675_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m19748547A24A1E73F0E008F1B10E99E211AB1743_gshared_inline (ReadOnlySpan_1_t11C8FCE2C8C30D31BDDCDC0332039DDFCC5BAABC* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_0 = ___0_ptr;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7CE2A3145C5E446CD467BA6C50BDF18F730481BD_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_0 = ___0_ptr;
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* Array_Empty_TisConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4_mF18A757E481B39D1DE64F132DD488C8508E0E3D7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ((EmptyArray_1_t0FF66F0AD14209D95E74DC5AE956BC83003DBC4A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m890A7E941E811843F92E0B31DA915154A9D50CA4_gshared_inline (Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6* __this, ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t977F792D48D429BC74F745C897081BB9515CC0E6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tC0124B98FB257C2891FA55F734034FCCFE3377F4>(L_3);
		ByReference_1_tFF3EAB58362204D547260A8AEB4711F91413707C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t4A26F22836A927373D3C4ECB9DB9E23DDE003C13* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mBC467F018FDF089E6965BFD2A3D22C6D06E9FDCA_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD3A1B337389DF31530D83D99CA02CB50613F9C03_gshared_inline (ReadOnlySpan_1_t3FEB487C92070CECD95C42DE98504E228F263026* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_0 = ___0_ptr;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5546077CFDA3A021EECF8F459715C5415CB2B970_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_0 = ___0_ptr;
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* Array_Empty_TisConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2_m43DE511EC7BC1859DE202865566CC1F1C61481A7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ((EmptyArray_1_t26C7C247835B54DC3E87DB46010E7758BC6655DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m07C8ECE0A8394E1D723847FCE4BD608B54281F8F_gshared_inline (Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2* __this, ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9995EC7836AE22AE647DE46DCC7F37B28967FEF2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB4CAAD06D82027332DB93AF6BC08243A57FE4AF2>(L_3);
		ByReference_1_tB8D13A6BB38E4496EAE16AABBF5B0C603072D68C L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_tF297619AB26C7B91638F2A817CE8EB9D04B37885* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m69C4962BA2F0FFF252F7BD22C7DA3A8502F56A62_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9E826A6B5D5571A8B7ADA227155903C0470343DD_gshared_inline (ReadOnlySpan_1_t842C253553FD3FC181A2E55C33DD4450A71DBA3E* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_0 = ___0_ptr;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m577B2B0385CA891E716F1A4F3C253BE43E297194_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_0 = ___0_ptr;
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* Array_Empty_TisConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB_mA54E5E0A15E3DC24280ECB5B6FFB7A4EA36934A8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ((EmptyArray_1_t38E96CD689D1FFA2AF9EABCEFD08457D8D280F4D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9EB87E7F98A56BF453C54B14935CB2BE4A5272A_gshared_inline (Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2* __this, ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* ___0_array, const RuntimeMethod* method) 
{
	ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t848A75DA2693676DFD2020BD7E74F8BBA4ABEDD2));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionSlot_tB6A19CABA0CD55690A8B03EDF6411698184952AB>(L_3);
		ByReference_1_t3CC720437A9FA70F0888F2F057BF8E3954D08BC4 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionSlotU5BU5D_t8F4D5A81508C27F7D145B4115D1C3F0718F27931* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m5C9031DC02BCBF6A57C8E4AA3636F032356DB80A_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7AA8768EE6E19C2D70DE5AE3844FD9792954C197_gshared_inline (ReadOnlySpan_1_t1EB49EBBDCFE288E1B10D0CAB7C32D912ECA9073* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_0 = ___0_ptr;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m03403BED31CE3ABFF377320DD4F41E08EB4C68C7_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_0 = ___0_ptr;
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* Array_Empty_TisVector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241_mE4640DBE17BCF2AD25DF6E18DDD33FFE0B77D234_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_0 = ((EmptyArray_1_t999D766D6405B55390194BEB8B14B59328289B9F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAD292B13682D01572B2BA55A30BE5583B9E7056B_gshared_inline (Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19* __this, Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* ___0_array, const RuntimeMethod* method) 
{
	Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB63A231FB12834D1358FDFE9CA42144A559AEB19));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241));
		goto IL_0037;
	}

IL_0037:
	{
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector_1_t0A7E4A8A4704F8E1E7C3DF592BB50E687CFA9241>(L_3);
		ByReference_1_t2373FC4E297E35218CDDCDFA5BD35328B83ECB91 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector_1U5BU5D_t768D95ED5389E98F705CD6456B4F8C7899897B02* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ((EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0037;
	}

IL_0037:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_3);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ((EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ((EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m251F63B1649B0EA971BE6DC2D9C55A0A7551C0F3_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m116B26F5D9687E30AAEEC7CA0D6799209E85B0D8_gshared_inline (ReadOnlySpan_1_t685C891C238F2C3850A66339E12DC0A896BF649F* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_0 = ___0_ptr;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m215276FD257B661FBF9025EF73E2E213D2B9409C_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_0 = ___0_ptr;
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* Array_Empty_TisConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB_m66600286ECF824C65CCFB9B48D2696708471D766_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_0 = ((EmptyArray_1_t8E0F64E8D6F60B7A4C17A9B51807BBCD5DBD4BA6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m46267684E3529B5E06C25B757E92B6DC22DF87CD_gshared_inline (Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B* __this, ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* ___0_array, const RuntimeMethod* method) 
{
	ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCE4A3C1ABF3CA6A3F352B89760B21227DB515E1B));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionId_tEA78CDC27F3C855E62B4A8046ECAFF5DB06128EB>(L_3);
		ByReference_1_tAA61A56F7C01F0C70B59738D897BEDD76A2E8E20 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionIdU5BU5D_t12C336E55CB8BF19CEBC146AEB383BA4A83E0BA1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m7B2C867CF5AD3D455F6E80D9C306C000BB574161_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1B1612A0CD2C0F18BB18DAC25376D14ED5FF7E55_gshared_inline (ReadOnlySpan_1_tCBC8D2C37E45E273A954D3F4A64DA846D05D1CB0* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_0 = ___0_ptr;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD9D563ED0694F2A644F66B763F93B61CB623980C_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_0 = ___0_ptr;
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* Array_Empty_TisConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A_mF92E9733522F85C07496167FFD21DEC5B7FC5F15_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_0 = ((EmptyArray_1_tE5C2ADC4FDB25BE3231B4C8B67AF6D0B49C4E03A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mAB4FABE2AAF284E955C7DB1398093EB64BC6EC9D_gshared_inline (Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F* __this, ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* ___0_array, const RuntimeMethod* method) 
{
	ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t6ECEB0C601284EE5BE76AF340D47B08E33AA702F));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A));
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConnectionPayload_t5A6593DB8A4009F8657F006D8CE47EE4882AF87A>(L_3);
		ByReference_1_t2E54776174279CAECECC2B7AE044F8647B8D7067 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConnectionPayloadU5BU5D_tB9986EC139FFCECF0A5F5E93731B0FBFDD81F62A* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
