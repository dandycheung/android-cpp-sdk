/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.interfaces.RSAKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class RSAKey;
	class RSAKey
		: public object<RSAKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RSAKey(jobject jobj)
		: object<RSAKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::math::BigInteger > getModulus();
	}; //class RSAKey

} //namespace interfaces
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_IMPL

namespace j2cpp {



java::security::interfaces::RSAKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAKey::getModulus()
{
	return call_method<
		java::security::interfaces::RSAKey::J2CPP_CLASS_NAME,
		java::security::interfaces::RSAKey::J2CPP_METHOD_NAME(0),
		java::security::interfaces::RSAKey::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::interfaces::RSAKey,"java/security/interfaces/RSAKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAKey,0,"getModulus","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
