/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.cert.Certificate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_DECL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_DECL


namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/PublicKey.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace cert {

	class Certificate;
	class Certificate
		: public object<Certificate>
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

		explicit Certificate(jobject jobj)
		: object<Certificate>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Certificate();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< array<jbyte,1> > getEncoded();
		void verify(local_ref< java::security::PublicKey >  const&);
		void verify(local_ref< java::security::PublicKey >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::security::PublicKey > getPublicKey();
	}; //class Certificate

} //namespace cert
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_IMPL

namespace j2cpp {



javax::security::cert::Certificate::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::security::cert::Certificate::Certificate()
: object<javax::security::cert::Certificate>(
	call_new_object<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(0),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean javax::security::cert::Certificate::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(1),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jint javax::security::cert::Certificate::hashCode()
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(2),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< array<jbyte,1> > javax::security::cert::Certificate::getEncoded()
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(3),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void javax::security::cert::Certificate::verify(local_ref< java::security::PublicKey > const &a0)
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(4),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void javax::security::cert::Certificate::verify(local_ref< java::security::PublicKey > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(5),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > javax::security::cert::Certificate::toString()
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(6),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::PublicKey > javax::security::cert::Certificate::getPublicKey()
{
	return call_method<
		javax::security::cert::Certificate::J2CPP_CLASS_NAME,
		javax::security::cert::Certificate::J2CPP_METHOD_NAME(7),
		javax::security::cert::Certificate::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::PublicKey > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::security::cert::Certificate,"javax/security/cert/Certificate")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,3,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,4,"verify","(Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,5,"verify","(Ljava/security/PublicKey;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::security::cert::Certificate,7,"getPublicKey","()Ljava/security/PublicKey;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
