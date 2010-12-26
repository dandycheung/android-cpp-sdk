/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.cookie.BestMatchSpecFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <org/apache/http/cookie/CookieSpec.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BestMatchSpecFactory;
	class BestMatchSpecFactory
		: public cpp_object<BestMatchSpecFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		BestMatchSpecFactory(jobject jobj)
		: cpp_object<BestMatchSpecFactory>(jobj)
		{
		}

		local_ref< org::apache::http::cookie::CookieSpec > newInstance(local_ref< org::apache::http::params::HttpParams > const&);
	}; //class BestMatchSpecFactory

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::cookie::BestMatchSpecFactory > create< org::apache::http::impl::cookie::BestMatchSpecFactory>()
{
	return local_ref< org::apache::http::impl::cookie::BestMatchSpecFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_NAME(0), org::apache::http::impl::cookie::BestMatchSpecFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::apache::http::cookie::CookieSpec > org::apache::http::impl::cookie::BestMatchSpecFactory::newInstance(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< org::apache::http::cookie::CookieSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BestMatchSpecFactory,"org/apache/http/impl/cookie/BestMatchSpecFactory")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpecFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpecFactory,1,"newInstance","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/cookie/CookieSpec;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
