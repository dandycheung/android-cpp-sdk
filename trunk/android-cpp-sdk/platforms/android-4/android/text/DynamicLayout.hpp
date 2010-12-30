/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.DynamicLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL
#define J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Directions; } } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Alignment; } } } }
namespace j2cpp { namespace android { namespace text { namespace TextUtils_ { class TruncateAt; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/text/Layout.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/TextUtils.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text {

	class DynamicLayout;
	class DynamicLayout
		: public object<DynamicLayout>
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

		explicit DynamicLayout(jobject jobj)
		: object<DynamicLayout>(jobj)
		{
		}

		operator local_ref<android::text::Layout>() const;


		DynamicLayout(local_ref< java::lang::CharSequence > const&, local_ref< android::text::TextPaint > const&, jint, local_ref< android::text::Layout_::Alignment > const&, jfloat, jfloat, jboolean);
		DynamicLayout(local_ref< java::lang::CharSequence > const&, local_ref< java::lang::CharSequence > const&, local_ref< android::text::TextPaint > const&, jint, local_ref< android::text::Layout_::Alignment > const&, jfloat, jfloat, jboolean);
		DynamicLayout(local_ref< java::lang::CharSequence > const&, local_ref< java::lang::CharSequence > const&, local_ref< android::text::TextPaint > const&, jint, local_ref< android::text::Layout_::Alignment > const&, jfloat, jfloat, jboolean, local_ref< android::text::TextUtils_::TruncateAt > const&, jint);
		jint getLineCount();
		jint getLineTop(jint);
		jint getLineDescent(jint);
		jint getLineStart(jint);
		jboolean getLineContainsTab(jint);
		jint getParagraphDirection(jint);
		local_ref< android::text::Layout_::Directions > getLineDirections(jint);
		jint getTopPadding();
		jint getBottomPadding();
		jint getEllipsizedWidth();
		jint getEllipsisStart(jint);
		jint getEllipsisCount(jint);
	}; //class DynamicLayout

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL

namespace j2cpp {



android::text::DynamicLayout::operator local_ref<android::text::Layout>() const
{
	return local_ref<android::text::Layout>(get_jobject());
}


android::text::DynamicLayout::DynamicLayout(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, jint a2, local_ref< android::text::Layout_::Alignment > const &a3, jfloat a4, jfloat a5, jboolean a6)
: object<android::text::DynamicLayout>(
	call_new_object<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(0),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4, a5, a6)
)
{
}



android::text::DynamicLayout::DynamicLayout(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< android::text::TextPaint > const &a2, jint a3, local_ref< android::text::Layout_::Alignment > const &a4, jfloat a5, jfloat a6, jboolean a7)
: object<android::text::DynamicLayout>(
	call_new_object<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(1),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3, a4, a5, a6, a7)
)
{
}



android::text::DynamicLayout::DynamicLayout(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< android::text::TextPaint > const &a2, jint a3, local_ref< android::text::Layout_::Alignment > const &a4, jfloat a5, jfloat a6, jboolean a7, local_ref< android::text::TextUtils_::TruncateAt > const &a8, jint a9)
: object<android::text::DynamicLayout>(
	call_new_object<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(2),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
)
{
}


jint android::text::DynamicLayout::getLineCount()
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(3),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::text::DynamicLayout::getLineTop(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(4),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0);
}

jint android::text::DynamicLayout::getLineDescent(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(5),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject(), a0);
}

jint android::text::DynamicLayout::getLineStart(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(6),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject(), a0);
}

jboolean android::text::DynamicLayout::getLineContainsTab(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(7),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

jint android::text::DynamicLayout::getParagraphDirection(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(8),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

local_ref< android::text::Layout_::Directions > android::text::DynamicLayout::getLineDirections(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(9),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::text::Layout_::Directions > >
	(get_jobject(), a0);
}

jint android::text::DynamicLayout::getTopPadding()
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(10),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint android::text::DynamicLayout::getBottomPadding()
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(11),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint android::text::DynamicLayout::getEllipsizedWidth()
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(12),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jint android::text::DynamicLayout::getEllipsisStart(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(13),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0);
}

jint android::text::DynamicLayout::getEllipsisCount(jint a0)
{
	return call_method<
		android::text::DynamicLayout::J2CPP_CLASS_NAME,
		android::text::DynamicLayout::J2CPP_METHOD_NAME(14),
		android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::DynamicLayout,"android/text/DynamicLayout")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,0,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,1,"<init>","(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,2,"<init>","(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,3,"getLineCount","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,4,"getLineTop","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,5,"getLineDescent","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,6,"getLineStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,7,"getLineContainsTab","(I)Z")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,8,"getParagraphDirection","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,9,"getLineDirections","(I)Landroid/text/Layout$Directions;")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,10,"getTopPadding","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,11,"getBottomPadding","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,12,"getEllipsizedWidth","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,13,"getEllipsisStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,14,"getEllipsisCount","(I)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
