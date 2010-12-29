/*================================================================================
  code generated by: java2cpp
  class: java.security.acl.LastOwnerException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>


namespace j2cpp {

namespace java { namespace security { namespace acl {

	class LastOwnerException;
	class LastOwnerException
		: public cpp_object<LastOwnerException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LastOwnerException(jobject jobj)
		: cpp_object<LastOwnerException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		LastOwnerException();
	}; //class LastOwnerException

} //namespace acl
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::acl::LastOwnerException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jtype());
}


java::security::acl::LastOwnerException::LastOwnerException()
: cpp_object<java::security::acl::LastOwnerException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::acl::LastOwnerException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::acl::LastOwnerException::J2CPP_CLASS_NAME, java::security::acl::LastOwnerException::J2CPP_METHOD_NAME(0), java::security::acl::LastOwnerException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::security::acl::LastOwnerException,"java/security/acl/LastOwnerException")
J2CPP_DEFINE_METHOD(java::security::acl::LastOwnerException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_LASTOWNEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION