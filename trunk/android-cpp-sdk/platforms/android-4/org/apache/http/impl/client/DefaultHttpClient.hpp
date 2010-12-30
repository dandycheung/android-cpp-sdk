/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.DefaultHttpClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace client { class AbstractHttpClient; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <org/apache/http/conn/ClientConnectionManager.hpp>
#include <org/apache/http/impl/client/AbstractHttpClient.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultHttpClient;
	class DefaultHttpClient
		: public object<DefaultHttpClient>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)

		explicit DefaultHttpClient(jobject jobj)
		: object<DefaultHttpClient>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::client::AbstractHttpClient>() const;


		DefaultHttpClient(local_ref< org::apache::http::conn::ClientConnectionManager > const&, local_ref< org::apache::http::params::HttpParams > const&);
		DefaultHttpClient(local_ref< org::apache::http::params::HttpParams > const&);
		DefaultHttpClient();
	}; //class DefaultHttpClient

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::DefaultHttpClient::operator local_ref<org::apache::http::impl::client::AbstractHttpClient>() const
{
	return local_ref<org::apache::http::impl::client::AbstractHttpClient>(get_jobject());
}


org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient(local_ref< org::apache::http::conn::ClientConnectionManager > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
: object<org::apache::http::impl::client::DefaultHttpClient>(
	call_new_object<
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::impl::client::DefaultHttpClient>(
	call_new_object<
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient()
: object<org::apache::http::impl::client::DefaultHttpClient>(
	call_new_object<
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::DefaultHttpClient::J2CPP_METHOD_SIGNATURE(2)>
	()
)
{
}




















J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultHttpClient,"org/apache/http/impl/client/DefaultHttpClient")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,0,"<init>","(Lorg/apache/http/conn/ClientConnectionManager;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,1,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,2,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,3,"createHttpParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,4,"createRequestExecutor","()Lorg/apache/http/protocol/HttpRequestExecutor;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,5,"createClientConnectionManager","()Lorg/apache/http/conn/ClientConnectionManager;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,6,"createHttpContext","()Lorg/apache/http/protocol/HttpContext;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,7,"createConnectionReuseStrategy","()Lorg/apache/http/ConnectionReuseStrategy;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,8,"createConnectionKeepAliveStrategy","()Lorg/apache/http/conn/ConnectionKeepAliveStrategy;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,9,"createAuthSchemeRegistry","()Lorg/apache/http/auth/AuthSchemeRegistry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,10,"createCookieSpecRegistry","()Lorg/apache/http/cookie/CookieSpecRegistry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,11,"createHttpProcessor","()Lorg/apache/http/protocol/BasicHttpProcessor;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,12,"createHttpRequestRetryHandler","()Lorg/apache/http/client/HttpRequestRetryHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,13,"createRedirectHandler","()Lorg/apache/http/client/RedirectHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,14,"createTargetAuthenticationHandler","()Lorg/apache/http/client/AuthenticationHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,15,"createProxyAuthenticationHandler","()Lorg/apache/http/client/AuthenticationHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,16,"createCookieStore","()Lorg/apache/http/client/CookieStore;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,17,"createCredentialsProvider","()Lorg/apache/http/client/CredentialsProvider;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,18,"createHttpRoutePlanner","()Lorg/apache/http/conn/routing/HttpRoutePlanner;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultHttpClient,19,"createUserTokenHandler","()Lorg/apache/http/client/UserTokenHandler;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTHTTPCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
