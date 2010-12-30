/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.URLEncoder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLENCODER_HPP_DECL
#define J2CPP_JAVA_NET_URLENCODER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace net {

	class URLEncoder;
	class URLEncoder
		: public object<URLEncoder>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit URLEncoder(jobject jobj)
		: object<URLEncoder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::String > encode(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > encode(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class URLEncoder

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLENCODER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLENCODER_HPP_IMPL
#define J2CPP_JAVA_NET_URLENCODER_HPP_IMPL

namespace j2cpp {



java::net::URLEncoder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::net::URLEncoder::encode(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::net::URLEncoder::J2CPP_CLASS_NAME,
		java::net::URLEncoder::J2CPP_METHOD_NAME(1),
		java::net::URLEncoder::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0);
}

local_ref< java::lang::String > java::net::URLEncoder::encode(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::net::URLEncoder::J2CPP_CLASS_NAME,
		java::net::URLEncoder::J2CPP_METHOD_NAME(2),
		java::net::URLEncoder::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(a0, a1);
}


J2CPP_DEFINE_CLASS(java::net::URLEncoder,"java/net/URLEncoder")
J2CPP_DEFINE_METHOD(java::net::URLEncoder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::URLEncoder,1,"encode","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLEncoder,2,"encode","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLENCODER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
