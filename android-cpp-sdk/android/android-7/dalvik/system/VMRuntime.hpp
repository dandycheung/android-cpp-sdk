/*================================================================================
  code generated by: java2cpp
  class: dalvik.system.VMRuntime
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_DECL






namespace j2cpp {

namespace dalvik { namespace system {

	class VMRuntime;
	class VMRuntime
		: public cpp_object<VMRuntime>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		VMRuntime(jobject jobj)
		: cpp_object<VMRuntime>(jobj)
		{
		}

		static local_ref< dalvik::system::VMRuntime > getRuntime();
		cpp_float getTargetHeapUtilization();
		cpp_float setTargetHeapUtilization(cpp_float const&);
		cpp_long getMinimumHeapSize();
		cpp_long setMinimumHeapSize(cpp_long const&);
		void gcSoftReferences();
		void runFinalizationSync();
		cpp_long getExternalBytesAllocated();
	}; //class VMRuntime

} //namespace system
} //namespace dalvik


} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_IMPL

namespace j2cpp {


template <>
local_ref< dalvik::system::VMRuntime > create< dalvik::system::VMRuntime>()
{
	return local_ref< dalvik::system::VMRuntime >(
		environment::get().get_jenv()->NewObject(
			get_class<dalvik::system::VMRuntime::J2CPP_CLASS_NAME>(),
			get_method_id<dalvik::system::VMRuntime::J2CPP_CLASS_NAME, dalvik::system::VMRuntime::J2CPP_METHOD_NAME(0), dalvik::system::VMRuntime::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< dalvik::system::VMRuntime > dalvik::system::VMRuntime::getRuntime()
{
	return local_ref< dalvik::system::VMRuntime >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_float dalvik::system::VMRuntime::getTargetHeapUtilization()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_float dalvik::system::VMRuntime::setTargetHeapUtilization(cpp_float const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long dalvik::system::VMRuntime::getMinimumHeapSize()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long dalvik::system::VMRuntime::setMinimumHeapSize(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void dalvik::system::VMRuntime::gcSoftReferences()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void dalvik::system::VMRuntime::runFinalizationSync()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_long dalvik::system::VMRuntime::getExternalBytesAllocated()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(dalvik::system::VMRuntime,"dalvik/system/VMRuntime")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,1,"getRuntime","()Ldalvik/system/VMRuntime;")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,2,"getTargetHeapUtilization","()F")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,3,"setTargetHeapUtilization","(F)F")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,4,"getMinimumHeapSize","()J")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,5,"setMinimumHeapSize","(J)J")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,6,"gcSoftReferences","()V")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,7,"runFinalizationSync","()V")
J2CPP_DEFINE_METHOD(dalvik::system::VMRuntime,8,"getExternalBytesAllocated","()J")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_VMRUNTIME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
