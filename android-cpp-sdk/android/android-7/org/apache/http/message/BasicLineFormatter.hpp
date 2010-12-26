/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicLineFormatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>
#include <org/apache/http/StatusLine.hpp>
#include <org/apache/http/message/LineFormatter.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicLineFormatter;
	class BasicLineFormatter
		: public cpp_object<BasicLineFormatter>
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
		J2CPP_DECLARE_FIELD(0)

		BasicLineFormatter(jobject jobj)
		: cpp_object<BasicLineFormatter>(jobj)
		{
		}

		static local_ref< java::lang::String > formatProtocolVersion(local_ref< org::apache::http::ProtocolVersion > const&, local_ref< org::apache::http::message::LineFormatter > const&);
		local_ref< org::apache::http::util::CharArrayBuffer > appendProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::ProtocolVersion > const&);
		static local_ref< java::lang::String > formatRequestLine(local_ref< org::apache::http::RequestLine > const&, local_ref< org::apache::http::message::LineFormatter > const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatRequestLine(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::RequestLine > const&);
		static local_ref< java::lang::String > formatStatusLine(local_ref< org::apache::http::StatusLine > const&, local_ref< org::apache::http::message::LineFormatter > const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatStatusLine(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::StatusLine > const&);
		static local_ref< java::lang::String > formatHeader(local_ref< org::apache::http::Header > const&, local_ref< org::apache::http::message::LineFormatter > const&);
		local_ref< org::apache::http::util::CharArrayBuffer > formatHeader(local_ref< org::apache::http::util::CharArrayBuffer > const&, local_ref< org::apache::http::Header > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< org::apache::http::message::BasicLineFormatter > > DEFAULT;
	}; //class BasicLineFormatter

} //namespace message
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::message::BasicLineFormatter > create< org::apache::http::message::BasicLineFormatter>()
{
	return local_ref< org::apache::http::message::BasicLineFormatter >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::message::BasicLineFormatter::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::message::BasicLineFormatter::J2CPP_CLASS_NAME, org::apache::http::message::BasicLineFormatter::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicLineFormatter::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


local_ref< java::lang::String > org::apache::http::message::BasicLineFormatter::formatProtocolVersion(local_ref< org::apache::http::ProtocolVersion > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicLineFormatter::appendProtocolVersion(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::ProtocolVersion > const &a1)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< java::lang::String > org::apache::http::message::BasicLineFormatter::formatRequestLine(local_ref< org::apache::http::RequestLine > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicLineFormatter::formatRequestLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::RequestLine > const &a1)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< java::lang::String > org::apache::http::message::BasicLineFormatter::formatStatusLine(local_ref< org::apache::http::StatusLine > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicLineFormatter::formatStatusLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::StatusLine > const &a1)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< java::lang::String > org::apache::http::message::BasicLineFormatter::formatHeader(local_ref< org::apache::http::Header > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::util::CharArrayBuffer > org::apache::http::message::BasicLineFormatter::formatHeader(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::Header > const &a1)
{
	return local_ref< org::apache::http::util::CharArrayBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



static_field<
	org::apache::http::message::BasicLineFormatter::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicLineFormatter::J2CPP_FIELD_NAME(0),
	org::apache::http::message::BasicLineFormatter::J2CPP_FIELD_SIGNATURE(0),
	local_ref< org::apache::http::message::BasicLineFormatter >
> org::apache::http::message::BasicLineFormatter::DEFAULT;


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicLineFormatter,"org/apache/http/message/BasicLineFormatter")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,1,"initBuffer","(Lorg/apache/http/util/CharArrayBuffer;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,2,"formatProtocolVersion","(Lorg/apache/http/ProtocolVersion;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,3,"appendProtocolVersion","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/ProtocolVersion;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,4,"estimateProtocolVersionLen","(Lorg/apache/http/ProtocolVersion;)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,5,"formatRequestLine","(Lorg/apache/http/RequestLine;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,6,"formatRequestLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/RequestLine;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,7,"doFormatRequestLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/RequestLine;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,8,"formatStatusLine","(Lorg/apache/http/StatusLine;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,9,"formatStatusLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/StatusLine;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,10,"doFormatStatusLine","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/StatusLine;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,11,"formatHeader","(Lorg/apache/http/Header;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,12,"formatHeader","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/Header;)Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,13,"doFormatHeader","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicLineFormatter,14,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicLineFormatter,0,"DEFAULT","Lorg/apache/http/message/BasicLineFormatter;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICLINEFORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
