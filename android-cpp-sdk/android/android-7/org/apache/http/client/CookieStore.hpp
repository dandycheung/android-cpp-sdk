/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.CookieStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class CookieStore;
	class CookieStore
		: public cpp_object<CookieStore>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		CookieStore(jobject jobj)
		: cpp_object<CookieStore>(jobj)
		{
		}

		void addCookie(local_ref< org::apache::http::cookie::Cookie > const&);
		local_ref< java::util::List > getCookies();
		cpp_boolean clearExpired(local_ref< java::util::Date > const&);
		void clear();
	}; //class CookieStore

} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL

namespace j2cpp {


void org::apache::http::client::CookieStore::addCookie(local_ref< org::apache::http::cookie::Cookie > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > org::apache::http::client::CookieStore::getCookies()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean org::apache::http::client::CookieStore::clearExpired(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::CookieStore::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::CookieStore,"org/apache/http/client/CookieStore")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,0,"addCookie","(Lorg/apache/http/cookie/Cookie;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,1,"getCookies","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,2,"clearExpired","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,3,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
