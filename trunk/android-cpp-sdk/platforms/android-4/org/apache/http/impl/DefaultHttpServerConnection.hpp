/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.DefaultHttpServerConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { class SocketHttpServerConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/impl/SocketHttpServerConnection.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class DefaultHttpServerConnection;
	class DefaultHttpServerConnection
		: public object<DefaultHttpServerConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DefaultHttpServerConnection(jobject jobj)
		: object<DefaultHttpServerConnection>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::SocketHttpServerConnection>() const;


		DefaultHttpServerConnection();
		void bind(local_ref< java::net::Socket >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		local_ref< java::lang::String > toString();
	}; //class DefaultHttpServerConnection

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::DefaultHttpServerConnection::operator local_ref<org::apache::http::impl::SocketHttpServerConnection>() const
{
	return local_ref<org::apache::http::impl::SocketHttpServerConnection>(get_jobject());
}


org::apache::http::impl::DefaultHttpServerConnection::DefaultHttpServerConnection()
: object<org::apache::http::impl::DefaultHttpServerConnection>(
	call_new_object<
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::impl::DefaultHttpServerConnection::bind(local_ref< java::net::Socket > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::apache::http::impl::DefaultHttpServerConnection::toString()
{
	return call_method<
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::DefaultHttpServerConnection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::DefaultHttpServerConnection,"org/apache/http/impl/DefaultHttpServerConnection")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpServerConnection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpServerConnection,1,"bind","(Ljava/net/Socket;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultHttpServerConnection,2,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTHTTPSERVERCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
