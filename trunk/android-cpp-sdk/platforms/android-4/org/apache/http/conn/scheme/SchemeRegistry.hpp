/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.scheme.SchemeRegistry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class Scheme; } } } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/scheme/Scheme.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class SchemeRegistry;
	class SchemeRegistry
		: public object<SchemeRegistry>
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

		explicit SchemeRegistry(jobject jobj)
		: object<SchemeRegistry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SchemeRegistry();
		local_ref< org::apache::http::conn::scheme::Scheme > getScheme(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::conn::scheme::Scheme > getScheme(local_ref< org::apache::http::HttpHost >  const&);
		local_ref< org::apache::http::conn::scheme::Scheme > get(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::conn::scheme::Scheme > register_(local_ref< org::apache::http::conn::scheme::Scheme >  const&);
		local_ref< org::apache::http::conn::scheme::Scheme > unregister(local_ref< java::lang::String >  const&);
		local_ref< java::util::List > getSchemeNames();
		void setItems(local_ref< java::util::Map >  const&);
	}; //class SchemeRegistry

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::scheme::SchemeRegistry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::conn::scheme::SchemeRegistry::SchemeRegistry()
: object<org::apache::http::conn::scheme::SchemeRegistry>(
	call_new_object<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< org::apache::http::conn::scheme::Scheme > org::apache::http::conn::scheme::SchemeRegistry::getScheme(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::conn::scheme::Scheme > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::conn::scheme::Scheme > org::apache::http::conn::scheme::SchemeRegistry::getScheme(local_ref< org::apache::http::HttpHost > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::conn::scheme::Scheme > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::conn::scheme::Scheme > org::apache::http::conn::scheme::SchemeRegistry::get(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::conn::scheme::Scheme > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::conn::scheme::Scheme > org::apache::http::conn::scheme::SchemeRegistry::register_(local_ref< org::apache::http::conn::scheme::Scheme > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::conn::scheme::Scheme > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::conn::scheme::Scheme > org::apache::http::conn::scheme::SchemeRegistry::unregister(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::conn::scheme::Scheme > >
	(get_jobject(), a0);
}

local_ref< java::util::List > org::apache::http::conn::scheme::SchemeRegistry::getSchemeNames()
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::List > >
	(get_jobject());
}

void org::apache::http::conn::scheme::SchemeRegistry::setItems(local_ref< java::util::Map > const &a0)
{
	return call_method<
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_CLASS_NAME,
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::scheme::SchemeRegistry::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::SchemeRegistry,"org/apache/http/conn/scheme/SchemeRegistry")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,1,"getScheme","(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,2,"getScheme","(Lorg/apache/http/HttpHost;)Lorg/apache/http/conn/scheme/Scheme;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,3,"get","(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,4,"register","(Lorg/apache/http/conn/scheme/Scheme;)Lorg/apache/http/conn/scheme/Scheme;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,5,"unregister","(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,6,"getSchemeNames","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SchemeRegistry,7,"setItems","(Ljava/util/Map;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEMEREGISTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
