/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.MutableContextWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_DECL


namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>


namespace j2cpp {

namespace android { namespace content {

	class MutableContextWrapper;
	class MutableContextWrapper
		: public object<MutableContextWrapper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit MutableContextWrapper(jobject jobj)
		: object<MutableContextWrapper>(jobj)
		{
		}

		operator local_ref<android::content::ContextWrapper>() const;


		MutableContextWrapper(local_ref< android::content::Context > const&);
		void setBaseContext(local_ref< android::content::Context >  const&);
	}; //class MutableContextWrapper

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_IMPL

namespace j2cpp {



android::content::MutableContextWrapper::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::content::MutableContextWrapper::MutableContextWrapper(local_ref< android::content::Context > const &a0)
: object<android::content::MutableContextWrapper>(
	call_new_object<
		android::content::MutableContextWrapper::J2CPP_CLASS_NAME,
		android::content::MutableContextWrapper::J2CPP_METHOD_NAME(0),
		android::content::MutableContextWrapper::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::content::MutableContextWrapper::setBaseContext(local_ref< android::content::Context > const &a0)
{
	return call_method<
		android::content::MutableContextWrapper::J2CPP_CLASS_NAME,
		android::content::MutableContextWrapper::J2CPP_METHOD_NAME(1),
		android::content::MutableContextWrapper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::MutableContextWrapper,"android/content/MutableContextWrapper")
J2CPP_DEFINE_METHOD(android::content::MutableContextWrapper,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::content::MutableContextWrapper,1,"setBaseContext","(Landroid/content/Context;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_MUTABLECONTEXTWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
