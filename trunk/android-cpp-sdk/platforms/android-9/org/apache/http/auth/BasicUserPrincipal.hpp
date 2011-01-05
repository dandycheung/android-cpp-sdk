/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.BasicUserPrincipal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class BasicUserPrincipal;
	class BasicUserPrincipal
		: public object<BasicUserPrincipal>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit BasicUserPrincipal(jobject jobj)
		: object<BasicUserPrincipal>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::Principal>() const;


		BasicUserPrincipal(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class BasicUserPrincipal

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::BasicUserPrincipal::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::auth::BasicUserPrincipal::operator local_ref<java::security::Principal>() const
{
	return local_ref<java::security::Principal>(get_jobject());
}


org::apache::http::auth::BasicUserPrincipal::BasicUserPrincipal(local_ref< java::lang::String > const &a0)
: object<org::apache::http::auth::BasicUserPrincipal>(
	call_new_object<
		org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME,
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::auth::BasicUserPrincipal::getName()
{
	return call_method<
		org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME,
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint org::apache::http::auth::BasicUserPrincipal::hashCode()
{
	return call_method<
		org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME,
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jboolean org::apache::http::auth::BasicUserPrincipal::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME,
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::BasicUserPrincipal::toString()
{
	return call_method<
		org::apache::http::auth::BasicUserPrincipal::J2CPP_CLASS_NAME,
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::BasicUserPrincipal::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::BasicUserPrincipal,"org/apache/http/auth/BasicUserPrincipal")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::BasicUserPrincipal,4,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_BASICUSERPRINCIPAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION