/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertStoreParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertStoreParameters;
	class CertStoreParameters
		: public object<CertStoreParameters>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit CertStoreParameters(jobject jobj)
		: object<CertStoreParameters>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		local_ref< java::lang::Object > clone();
	}; //class CertStoreParameters

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_IMPL

namespace j2cpp {



java::security::cert::CertStoreParameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::cert::CertStoreParameters::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

local_ref< java::lang::Object > java::security::cert::CertStoreParameters::clone()
{
	return call_method<
		java::security::cert::CertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::CertStoreParameters::J2CPP_METHOD_NAME(0),
		java::security::cert::CertStoreParameters::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::CertStoreParameters,"java/security/cert/CertStoreParameters")
J2CPP_DEFINE_METHOD(java::security::cert::CertStoreParameters,0,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTOREPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
