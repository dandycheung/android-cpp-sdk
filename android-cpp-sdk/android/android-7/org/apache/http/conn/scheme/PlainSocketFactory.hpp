/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.scheme.PlainSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class HostNameResolver; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/conn/scheme/HostNameResolver.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class PlainSocketFactory;
	class PlainSocketFactory
		: public cpp_object<PlainSocketFactory>
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

		PlainSocketFactory(jobject jobj)
		: cpp_object<PlainSocketFactory>(jobj)
		{
		}

		static local_ref< org::apache::http::conn::scheme::PlainSocketFactory > getSocketFactory();
		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > connectSocket(local_ref< java::net::Socket > const&, local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::net::InetAddress > const&, cpp_int const&, local_ref< org::apache::http::params::HttpParams > const&);
		cpp_boolean isSecure(local_ref< java::net::Socket > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
	}; //class PlainSocketFactory

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::scheme::PlainSocketFactory > create< org::apache::http::conn::scheme::PlainSocketFactory>(local_ref< org::apache::http::conn::scheme::HostNameResolver > const &a0)
{
	return local_ref< org::apache::http::conn::scheme::PlainSocketFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME, org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(0), org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::conn::scheme::PlainSocketFactory > create< org::apache::http::conn::scheme::PlainSocketFactory>()
{
	return local_ref< org::apache::http::conn::scheme::PlainSocketFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_CLASS_NAME, org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_NAME(1), org::apache::http::conn::scheme::PlainSocketFactory::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::conn::scheme::PlainSocketFactory > org::apache::http::conn::scheme::PlainSocketFactory::getSocketFactory()
{
	return local_ref< org::apache::http::conn::scheme::PlainSocketFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::PlainSocketFactory::createSocket()
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::PlainSocketFactory::connectSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::net::InetAddress > const &a3, cpp_int const &a4, local_ref< org::apache::http::params::HttpParams > const &a5)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::scheme::PlainSocketFactory::isSecure(local_ref< java::net::Socket > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::scheme::PlainSocketFactory::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::conn::scheme::PlainSocketFactory::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::PlainSocketFactory,"org/apache/http/conn/scheme/PlainSocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,0,"<init>","(Lorg/apache/http/conn/scheme/HostNameResolver;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,2,"getSocketFactory","()Lorg/apache/http/conn/scheme/PlainSocketFactory;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,3,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,4,"connectSocket","(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,5,"isSecure","(Ljava/net/Socket;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::PlainSocketFactory,7,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
