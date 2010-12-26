/*================================================================================
  code generated by: java2cpp
  class: java.security.PrivilegedActionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PrivilegedActionException;
	class PrivilegedActionException
		: public cpp_object<PrivilegedActionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		PrivilegedActionException(jobject jobj)
		: cpp_object<PrivilegedActionException>(jobj)
		{
		}

		local_ref< java::lang::Exception > getException();
		local_ref< java::lang::Throwable > getCause();
		local_ref< java::lang::String > toString();
	}; //class PrivilegedActionException

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::PrivilegedActionException > create< java::security::PrivilegedActionException>(local_ref< java::lang::Exception > const &a0)
{
	return local_ref< java::security::PrivilegedActionException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::PrivilegedActionException::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::PrivilegedActionException::J2CPP_CLASS_NAME, java::security::PrivilegedActionException::J2CPP_METHOD_NAME(0), java::security::PrivilegedActionException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Exception > java::security::PrivilegedActionException::getException()
{
	return local_ref< java::lang::Exception >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::Throwable > java::security::PrivilegedActionException::getCause()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::security::PrivilegedActionException::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::PrivilegedActionException,"java/security/PrivilegedActionException")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,0,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,1,"getException","()Ljava/lang/Exception;")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,2,"getCause","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
