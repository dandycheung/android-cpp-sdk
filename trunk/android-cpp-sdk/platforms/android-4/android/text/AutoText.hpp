/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.AutoText
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_DECL
#define J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class AutoText;
	class AutoText
		: public object<AutoText>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AutoText(jobject jobj)
		: object<AutoText>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::String > get(local_ref< java::lang::CharSequence >  const&, jint, jint, local_ref< android::view::View >  const&);
		static jint getSize(local_ref< android::view::View >  const&);
	}; //class AutoText

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_IMPL

namespace j2cpp {



android::text::AutoText::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::text::AutoText::get(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, local_ref< android::view::View > const &a3)
{
	return call_static_method<
		android::text::AutoText::J2CPP_CLASS_NAME,
		android::text::AutoText::J2CPP_METHOD_NAME(1),
		android::text::AutoText::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0, a1, a2, a3);
}

jint android::text::AutoText::getSize(local_ref< android::view::View > const &a0)
{
	return call_static_method<
		android::text::AutoText::J2CPP_CLASS_NAME,
		android::text::AutoText::J2CPP_METHOD_NAME(2),
		android::text::AutoText::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(a0);
}


J2CPP_DEFINE_CLASS(android::text::AutoText,"android/text/AutoText")
J2CPP_DEFINE_METHOD(android::text::AutoText,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::AutoText,1,"get","(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::AutoText,2,"getSize","(Landroid/view/View;)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_AUTOTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
