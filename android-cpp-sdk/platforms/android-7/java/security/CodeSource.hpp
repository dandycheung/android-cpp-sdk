/*================================================================================
  code generated by: java2cpp
  class: java.security.CodeSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL
#define J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class CodeSigner; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>
#include <java/security/CodeSigner.hpp>
#include <java/security/cert/Certificate.hpp>


namespace j2cpp {

namespace java { namespace security {

	class CodeSource;
	class CodeSource
		: public cpp_object<CodeSource>
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

		CodeSource(jobject jobj)
		: cpp_object<CodeSource>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::security::cert::Certificate, 1> > getCertificates();
		local_ref< cpp_object_array<java::security::CodeSigner, 1> > getCodeSigners();
		local_ref< java::net::URL > getLocation();
		cpp_int hashCode();
		cpp_boolean implies(local_ref< java::security::CodeSource > const&);
		local_ref< java::lang::String > toString();
	}; //class CodeSource

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::CodeSource > create< java::security::CodeSource>(local_ref< java::net::URL > const &a0, local_ref< cpp_object_array<java::security::cert::Certificate, 1> > const &a1)
{
	return local_ref< java::security::CodeSource >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::CodeSource::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::CodeSource::J2CPP_CLASS_NAME, java::security::CodeSource::J2CPP_METHOD_NAME(0), java::security::CodeSource::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::security::CodeSource > create< java::security::CodeSource>(local_ref< java::net::URL > const &a0, local_ref< cpp_object_array<java::security::CodeSigner, 1> > const &a1)
{
	return local_ref< java::security::CodeSource >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::CodeSource::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::CodeSource::J2CPP_CLASS_NAME, java::security::CodeSource::J2CPP_METHOD_NAME(1), java::security::CodeSource::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::security::CodeSource::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::security::cert::Certificate, 1> > java::security::CodeSource::getCertificates()
{
	return local_ref< cpp_object_array<java::security::cert::Certificate, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::CodeSigner, 1> > java::security::CodeSource::getCodeSigners()
{
	return local_ref< cpp_object_array<java::security::CodeSigner, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::net::URL > java::security::CodeSource::getLocation()
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::security::CodeSource::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::security::CodeSource::implies(local_ref< java::security::CodeSource > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::CodeSource::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::CodeSource,"java/security/CodeSource")
J2CPP_DEFINE_METHOD(java::security::CodeSource,0,"<init>","(Ljava/net/URL;[java.security.cert.Certificate)V")
J2CPP_DEFINE_METHOD(java::security::CodeSource,1,"<init>","(Ljava/net/URL;[java.security.CodeSigner)V")
J2CPP_DEFINE_METHOD(java::security::CodeSource,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::CodeSource,3,"getCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::security::CodeSource,4,"getCodeSigners","()[java.security.CodeSigner")
J2CPP_DEFINE_METHOD(java::security::CodeSource,5,"getLocation","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::security::CodeSource,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::CodeSource,7,"implies","(Ljava/security/CodeSource;)Z")
J2CPP_DEFINE_METHOD(java::security::CodeSource,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION