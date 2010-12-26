/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLSessionBindingEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLSessionBindingEvent;
	class SSLSessionBindingEvent
		: public cpp_object<SSLSessionBindingEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		SSLSessionBindingEvent(jobject jobj)
		: cpp_object<SSLSessionBindingEvent>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< javax::net::ssl::SSLSession > getSession();
	}; //class SSLSessionBindingEvent

} //namespace ssl
} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::net::ssl::SSLSessionBindingEvent > create< javax::net::ssl::SSLSessionBindingEvent>(local_ref< javax::net::ssl::SSLSession > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::net::ssl::SSLSessionBindingEvent >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLSessionBindingEvent::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLSessionBindingEvent::J2CPP_CLASS_NAME, javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::net::ssl::SSLSessionBindingEvent::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLSessionBindingEvent::getSession()
{
	return local_ref< javax::net::ssl::SSLSession >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLSessionBindingEvent,"javax/net/ssl/SSLSessionBindingEvent")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,0,"<init>","(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,2,"getSession","()Ljavax/net/ssl/SSLSession;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
