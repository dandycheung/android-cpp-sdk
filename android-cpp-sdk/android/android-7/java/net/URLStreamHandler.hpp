/*================================================================================
  code generated by: java2cpp
  class: java.net.URLStreamHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_DECL
#define J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_DECL






namespace j2cpp {

namespace java { namespace net {

	class URLStreamHandler;
	class URLStreamHandler
		: public cpp_object<URLStreamHandler>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)

		URLStreamHandler(jobject jobj)
		: cpp_object<URLStreamHandler>(jobj)
		{
		}

	}; //class URLStreamHandler

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_IMPL
#define J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::URLStreamHandler > create< java::net::URLStreamHandler>()
{
	return local_ref< java::net::URLStreamHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::URLStreamHandler::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::URLStreamHandler::J2CPP_CLASS_NAME, java::net::URLStreamHandler::J2CPP_METHOD_NAME(0), java::net::URLStreamHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}














J2CPP_DEFINE_CLASS(java::net::URLStreamHandler,"java/net/URLStreamHandler")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,1,"openConnection","(Ljava/net/URL;)Ljava/net/URLConnection;")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,2,"openConnection","(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,3,"parseURL","(Ljava/net/URL;Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,4,"setURL","(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,5,"setURL","(Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,6,"toExternalForm","(Ljava/net/URL;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,7,"equals","(Ljava/net/URL;Ljava/net/URL;)Z")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,8,"getDefaultPort","()I")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,9,"getHostAddress","(Ljava/net/URL;)Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,10,"hashCode","(Ljava/net/URL;)I")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,11,"hostsEqual","(Ljava/net/URL;Ljava/net/URL;)Z")
J2CPP_DEFINE_METHOD(java::net::URLStreamHandler,12,"sameFile","(Ljava/net/URL;Ljava/net/URL;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLSTREAMHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
