/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.params.ClientPNames
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace params {

	class ClientPNames;
	class ClientPNames
		: public object<ClientPNames>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)

		explicit ClientPNames(jobject jobj)
		: object<ClientPNames>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > CONNECTION_MANAGER_FACTORY_CLASS_NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > CONNECTION_MANAGER_FACTORY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > HANDLE_REDIRECTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > REJECT_RELATIVE_REDIRECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > MAX_REDIRECTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > ALLOW_CIRCULAR_REDIRECTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > HANDLE_AUTHENTICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > COOKIE_POLICY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > VIRTUAL_HOST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > DEFAULT_HEADERS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > DEFAULT_HOST;
	}; //class ClientPNames

} //namespace params
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_IMPL

namespace j2cpp {



org::apache::http::client::params::ClientPNames::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(0),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::CONNECTION_MANAGER_FACTORY_CLASS_NAME;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(1),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::CONNECTION_MANAGER_FACTORY;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(2),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::HANDLE_REDIRECTS;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(3),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::REJECT_RELATIVE_REDIRECT;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(4),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::MAX_REDIRECTS;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(5),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::ALLOW_CIRCULAR_REDIRECTS;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(6),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::HANDLE_AUTHENTICATION;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(7),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::COOKIE_POLICY;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(8),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::VIRTUAL_HOST;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(9),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::DEFAULT_HEADERS;

static_field<
	org::apache::http::client::params::ClientPNames::J2CPP_CLASS_NAME,
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_NAME(10),
	org::apache::http::client::params::ClientPNames::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> org::apache::http::client::params::ClientPNames::DEFAULT_HOST;


J2CPP_DEFINE_CLASS(org::apache::http::client::params::ClientPNames,"org/apache/http/client/params/ClientPNames")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,0,"CONNECTION_MANAGER_FACTORY_CLASS_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,1,"CONNECTION_MANAGER_FACTORY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,2,"HANDLE_REDIRECTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,3,"REJECT_RELATIVE_REDIRECT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,4,"MAX_REDIRECTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,5,"ALLOW_CIRCULAR_REDIRECTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,6,"HANDLE_AUTHENTICATION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,7,"COOKIE_POLICY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,8,"VIRTUAL_HOST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,9,"DEFAULT_HEADERS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::params::ClientPNames,10,"DEFAULT_HOST","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_CLIENTPNAMES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION