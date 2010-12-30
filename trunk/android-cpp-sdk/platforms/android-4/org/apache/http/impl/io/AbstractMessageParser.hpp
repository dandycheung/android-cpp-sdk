/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.AbstractMessageParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpMessageParser; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/io/HttpMessageParser.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/message/LineParser.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class AbstractMessageParser;
	class AbstractMessageParser
		: public object<AbstractMessageParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit AbstractMessageParser(jobject jobj)
		: object<AbstractMessageParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::io::HttpMessageParser>() const;


		AbstractMessageParser(local_ref< org::apache::http::io::SessionInputBuffer > const&, local_ref< org::apache::http::message::LineParser > const&, local_ref< org::apache::http::params::HttpParams > const&);
		static local_ref< array< local_ref< org::apache::http::Header >, 1> > parseHeaders(local_ref< org::apache::http::io::SessionInputBuffer >  const&, jint, jint, local_ref< org::apache::http::message::LineParser >  const&);
		local_ref< org::apache::http::HttpMessage > parse();

	}; //class AbstractMessageParser

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::AbstractMessageParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::io::AbstractMessageParser::operator local_ref<org::apache::http::io::HttpMessageParser>() const
{
	return local_ref<org::apache::http::io::HttpMessageParser>(get_jobject());
}


org::apache::http::impl::io::AbstractMessageParser::AbstractMessageParser(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, local_ref< org::apache::http::message::LineParser > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
: object<org::apache::http::impl::io::AbstractMessageParser>(
	call_new_object<
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


local_ref< array< local_ref< org::apache::http::Header >, 1> > org::apache::http::impl::io::AbstractMessageParser::parseHeaders(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, jint a1, jint a2, local_ref< org::apache::http::message::LineParser > const &a3)
{
	return call_static_method<
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< org::apache::http::Header >, 1> > >
	(a0, a1, a2, a3);
}


local_ref< org::apache::http::HttpMessage > org::apache::http::impl::io::AbstractMessageParser::parse()
{
	return call_method<
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::io::AbstractMessageParser::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpMessage > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::io::AbstractMessageParser,"org/apache/http/impl/io/AbstractMessageParser")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageParser,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageParser,1,"parseHeaders","(Lorg/apache/http/io/SessionInputBuffer;IILorg/apache/http/message/LineParser;)[org.apache.http.Header")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageParser,2,"parseHead","(Lorg/apache/http/io/SessionInputBuffer;)Lorg/apache/http/HttpMessage;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageParser,3,"parse","()Lorg/apache/http/HttpMessage;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::io::AbstractMessageParser,0,"lineParser","Lorg/apache/http/message/LineParser;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
