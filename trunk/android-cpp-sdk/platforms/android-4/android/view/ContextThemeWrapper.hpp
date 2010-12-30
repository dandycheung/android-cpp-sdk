/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.ContextThemeWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_DECL
#define J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_DECL


namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { namespace res { namespace Resources_ { class Theme; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/res/Resources.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ContextThemeWrapper;
	class ContextThemeWrapper
		: public object<ContextThemeWrapper>
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

		explicit ContextThemeWrapper(jobject jobj)
		: object<ContextThemeWrapper>(jobj)
		{
		}

		operator local_ref<android::content::ContextWrapper>() const;


		ContextThemeWrapper();
		ContextThemeWrapper(local_ref< android::content::Context > const&, jint);
		void setTheme(jint);
		local_ref< android::content::res::Resources_::Theme > getTheme();
		local_ref< java::lang::Object > getSystemService(local_ref< java::lang::String >  const&);
	}; //class ContextThemeWrapper

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_IMPL

namespace j2cpp {



android::view::ContextThemeWrapper::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::view::ContextThemeWrapper::ContextThemeWrapper()
: object<android::view::ContextThemeWrapper>(
	call_new_object<
		android::view::ContextThemeWrapper::J2CPP_CLASS_NAME,
		android::view::ContextThemeWrapper::J2CPP_METHOD_NAME(0),
		android::view::ContextThemeWrapper::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::view::ContextThemeWrapper::ContextThemeWrapper(local_ref< android::content::Context > const &a0, jint a1)
: object<android::view::ContextThemeWrapper>(
	call_new_object<
		android::view::ContextThemeWrapper::J2CPP_CLASS_NAME,
		android::view::ContextThemeWrapper::J2CPP_METHOD_NAME(1),
		android::view::ContextThemeWrapper::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



void android::view::ContextThemeWrapper::setTheme(jint a0)
{
	return call_method<
		android::view::ContextThemeWrapper::J2CPP_CLASS_NAME,
		android::view::ContextThemeWrapper::J2CPP_METHOD_NAME(3),
		android::view::ContextThemeWrapper::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< android::content::res::Resources_::Theme > android::view::ContextThemeWrapper::getTheme()
{
	return call_method<
		android::view::ContextThemeWrapper::J2CPP_CLASS_NAME,
		android::view::ContextThemeWrapper::J2CPP_METHOD_NAME(4),
		android::view::ContextThemeWrapper::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::res::Resources_::Theme > >
	(get_jobject());
}

local_ref< java::lang::Object > android::view::ContextThemeWrapper::getSystemService(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::view::ContextThemeWrapper::J2CPP_CLASS_NAME,
		android::view::ContextThemeWrapper::J2CPP_METHOD_NAME(5),
		android::view::ContextThemeWrapper::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::view::ContextThemeWrapper,"android/view/ContextThemeWrapper")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,1,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,2,"attachBaseContext","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,3,"setTheme","(I)V")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,4,"getTheme","()Landroid/content/res/Resources$Theme;")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,5,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::view::ContextThemeWrapper,6,"onApplyThemeResource","(Landroid/content/res/Resources$Theme;IZ)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTTHEMEWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
