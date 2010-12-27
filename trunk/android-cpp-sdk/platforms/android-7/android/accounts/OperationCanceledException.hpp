/*================================================================================
  code generated by: java2cpp
  class: android.accounts.OperationCanceledException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace android { namespace accounts { class AccountsException; } } }


#include <android/accounts/AccountsException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace accounts {

	class OperationCanceledException;
	class OperationCanceledException
		: public cpp_object<OperationCanceledException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit OperationCanceledException(jobject jobj)
		: cpp_object<OperationCanceledException>(jobj)
		{
		}

		operator local_ref<android::accounts::AccountsException>() const;


		OperationCanceledException();
		OperationCanceledException(local_ref< java::lang::String > const&);
		OperationCanceledException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		OperationCanceledException(local_ref< java::lang::Throwable > const&);
	}; //class OperationCanceledException

} //namespace accounts
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_IMPL

namespace j2cpp {



android::accounts::OperationCanceledException::operator local_ref<android::accounts::AccountsException>() const
{
	return local_ref<android::accounts::AccountsException>(get_jtype());
}


android::accounts::OperationCanceledException::OperationCanceledException()
: cpp_object<android::accounts::OperationCanceledException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME>(),
		get_method_id<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME, android::accounts::OperationCanceledException::J2CPP_METHOD_NAME(0), android::accounts::OperationCanceledException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::accounts::OperationCanceledException::OperationCanceledException(local_ref< java::lang::String > const &a0)
: cpp_object<android::accounts::OperationCanceledException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME>(),
		get_method_id<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME, android::accounts::OperationCanceledException::J2CPP_METHOD_NAME(1), android::accounts::OperationCanceledException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



android::accounts::OperationCanceledException::OperationCanceledException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: cpp_object<android::accounts::OperationCanceledException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME>(),
		get_method_id<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME, android::accounts::OperationCanceledException::J2CPP_METHOD_NAME(2), android::accounts::OperationCanceledException::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::accounts::OperationCanceledException::OperationCanceledException(local_ref< java::lang::Throwable > const &a0)
: cpp_object<android::accounts::OperationCanceledException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME>(),
		get_method_id<android::accounts::OperationCanceledException::J2CPP_CLASS_NAME, android::accounts::OperationCanceledException::J2CPP_METHOD_NAME(3), android::accounts::OperationCanceledException::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(android::accounts::OperationCanceledException,"android/accounts/OperationCanceledException")
J2CPP_DEFINE_METHOD(android::accounts::OperationCanceledException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::accounts::OperationCanceledException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::accounts::OperationCanceledException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(android::accounts::OperationCanceledException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION