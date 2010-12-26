/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.scheme.LayeredSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/Socket.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class LayeredSocketFactory;
	class LayeredSocketFactory
		: public cpp_object<LayeredSocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		LayeredSocketFactory(jobject jobj)
		: cpp_object<LayeredSocketFactory>(jobj)
		{
		}

		local_ref< java::net::Socket > createSocket(local_ref< java::net::Socket > const&, local_ref< java::lang::String > const&, cpp_int const&, cpp_boolean const&);
	}; //class LayeredSocketFactory

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_IMPL

namespace j2cpp {


local_ref< java::net::Socket > org::apache::http::conn::scheme::LayeredSocketFactory::createSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, cpp_boolean const &a3)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::LayeredSocketFactory,"org/apache/http/conn/scheme/LayeredSocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::LayeredSocketFactory,0,"createSocket","(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_LAYEREDSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
