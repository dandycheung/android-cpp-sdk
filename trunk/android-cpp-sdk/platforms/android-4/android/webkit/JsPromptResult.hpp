/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.JsPromptResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_DECL


namespace j2cpp { namespace android { namespace webkit { class JsResult; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/webkit/JsResult.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class JsPromptResult;
	class JsPromptResult
		: public object<JsPromptResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit JsPromptResult(jobject jobj)
		: object<JsPromptResult>(jobj)
		{
		}

		operator local_ref<android::webkit::JsResult>() const;


		void confirm(local_ref< java::lang::String >  const&);
	}; //class JsPromptResult

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_IMPL

namespace j2cpp {



android::webkit::JsPromptResult::operator local_ref<android::webkit::JsResult>() const
{
	return local_ref<android::webkit::JsResult>(get_jobject());
}


void android::webkit::JsPromptResult::confirm(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::webkit::JsPromptResult::J2CPP_CLASS_NAME,
		android::webkit::JsPromptResult::J2CPP_METHOD_NAME(1),
		android::webkit::JsPromptResult::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::webkit::JsPromptResult,"android/webkit/JsPromptResult")
J2CPP_DEFINE_METHOD(android::webkit::JsPromptResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::JsPromptResult,1,"confirm","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_JSPROMPTRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
