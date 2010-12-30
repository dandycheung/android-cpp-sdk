/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.ContentLengthStrategy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class ContentLengthStrategy;
	class ContentLengthStrategy
		: public object<ContentLengthStrategy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit ContentLengthStrategy(jobject jobj)
		: object<ContentLengthStrategy>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jlong determineLength(local_ref< org::apache::http::HttpMessage >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > IDENTITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CHUNKED;
	}; //class ContentLengthStrategy

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::ContentLengthStrategy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jlong org::apache::http::entity::ContentLengthStrategy::determineLength(local_ref< org::apache::http::HttpMessage > const &a0)
{
	return call_method<
		org::apache::http::entity::ContentLengthStrategy::J2CPP_CLASS_NAME,
		org::apache::http::entity::ContentLengthStrategy::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::ContentLengthStrategy::J2CPP_METHOD_SIGNATURE(0), 
		jlong >
	(get_jobject(), a0);
}


static_field<
	org::apache::http::entity::ContentLengthStrategy::J2CPP_CLASS_NAME,
	org::apache::http::entity::ContentLengthStrategy::J2CPP_FIELD_NAME(0),
	org::apache::http::entity::ContentLengthStrategy::J2CPP_FIELD_SIGNATURE(0),
	jint
> org::apache::http::entity::ContentLengthStrategy::IDENTITY;

static_field<
	org::apache::http::entity::ContentLengthStrategy::J2CPP_CLASS_NAME,
	org::apache::http::entity::ContentLengthStrategy::J2CPP_FIELD_NAME(1),
	org::apache::http::entity::ContentLengthStrategy::J2CPP_FIELD_SIGNATURE(1),
	jint
> org::apache::http::entity::ContentLengthStrategy::CHUNKED;


J2CPP_DEFINE_CLASS(org::apache::http::entity::ContentLengthStrategy,"org/apache/http/entity/ContentLengthStrategy")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ContentLengthStrategy,0,"determineLength","(Lorg/apache/http/HttpMessage;)J")
J2CPP_DEFINE_FIELD(org::apache::http::entity::ContentLengthStrategy,0,"IDENTITY","I")
J2CPP_DEFINE_FIELD(org::apache::http::entity::ContentLengthStrategy,1,"CHUNKED","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
