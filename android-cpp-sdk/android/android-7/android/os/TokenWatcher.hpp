/*================================================================================
  code generated by: java2cpp
  class: android.os.TokenWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL
#define J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/os/Handler.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class TokenWatcher;
	class TokenWatcher
		: public cpp_object<TokenWatcher>
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

		TokenWatcher(jobject jobj)
		: cpp_object<TokenWatcher>(jobj)
		{
		}

		void acquired();
		void released();
		void acquire(local_ref< android::os::IBinder > const&, local_ref< java::lang::String > const&);
		void cleanup(local_ref< android::os::IBinder > const&, cpp_boolean const&);
		void release(local_ref< android::os::IBinder > const&);
		cpp_boolean isAcquired();
		void dump();
	}; //class TokenWatcher

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_TOKENWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL
#define J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::TokenWatcher > create< android::os::TokenWatcher>(local_ref< android::os::Handler > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::os::TokenWatcher >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::TokenWatcher::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::TokenWatcher::J2CPP_CLASS_NAME, android::os::TokenWatcher::J2CPP_METHOD_NAME(0), android::os::TokenWatcher::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::TokenWatcher::acquired()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::os::TokenWatcher::released()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::os::TokenWatcher::acquire(local_ref< android::os::IBinder > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::TokenWatcher::cleanup(local_ref< android::os::IBinder > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::TokenWatcher::release(local_ref< android::os::IBinder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::os::TokenWatcher::isAcquired()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::os::TokenWatcher::dump()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::TokenWatcher,"android/os/TokenWatcher")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,0,"<init>","(Landroid/os/Handler;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,1,"acquired","()V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,2,"released","()V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,3,"acquire","(Landroid/os/IBinder;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,4,"cleanup","(Landroid/os/IBinder;Z)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,5,"release","(Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,6,"isAcquired","()Z")
J2CPP_DEFINE_METHOD(android::os::TokenWatcher,7,"dump","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_TOKENWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
