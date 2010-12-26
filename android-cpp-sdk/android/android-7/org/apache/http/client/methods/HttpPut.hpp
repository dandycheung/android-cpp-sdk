/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.methods.HttpPut
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/URI.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace methods {

	class HttpPut;
	class HttpPut
		: public cpp_object<HttpPut>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		HttpPut(jobject jobj)
		: cpp_object<HttpPut>(jobj)
		{
		}

		local_ref< java::lang::String > getMethod();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > METHOD_NAME;
	}; //class HttpPut

} //namespace methods
} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::client::methods::HttpPut > create< org::apache::http::client::methods::HttpPut>()
{
	return local_ref< org::apache::http::client::methods::HttpPut >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME, org::apache::http::client::methods::HttpPut::J2CPP_METHOD_NAME(0), org::apache::http::client::methods::HttpPut::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::apache::http::client::methods::HttpPut > create< org::apache::http::client::methods::HttpPut>(local_ref< java::net::URI > const &a0)
{
	return local_ref< org::apache::http::client::methods::HttpPut >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME, org::apache::http::client::methods::HttpPut::J2CPP_METHOD_NAME(1), org::apache::http::client::methods::HttpPut::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::client::methods::HttpPut > create< org::apache::http::client::methods::HttpPut>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::client::methods::HttpPut >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME, org::apache::http::client::methods::HttpPut::J2CPP_METHOD_NAME(2), org::apache::http::client::methods::HttpPut::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::client::methods::HttpPut::getMethod()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


static_field<
	org::apache::http::client::methods::HttpPut::J2CPP_CLASS_NAME,
	org::apache::http::client::methods::HttpPut::J2CPP_FIELD_NAME(0),
	org::apache::http::client::methods::HttpPut::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::methods::HttpPut::METHOD_NAME;


J2CPP_DEFINE_CLASS(org::apache::http::client::methods::HttpPut,"org/apache/http/client/methods/HttpPut")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPut,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPut,1,"<init>","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPut,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpPut,3,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::methods::HttpPut,0,"METHOD_NAME","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPPUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
