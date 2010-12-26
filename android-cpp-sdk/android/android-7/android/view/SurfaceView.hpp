/*================================================================================
  code generated by: java2cpp
  class: android.view.SurfaceView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL
#define J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Region.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/SurfaceHolder.hpp>


namespace j2cpp {

namespace android { namespace view {

	class SurfaceView;
	class SurfaceView
		: public cpp_object<SurfaceView>
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

		SurfaceView(jobject jobj)
		: cpp_object<SurfaceView>(jobj)
		{
		}

		local_ref< android::view::SurfaceHolder > getHolder();
		void setVisibility(cpp_int const&);
		cpp_boolean gatherTransparentRegion(local_ref< android::graphics::Region > const&);
		void draw(local_ref< android::graphics::Canvas > const&);
		void setZOrderMediaOverlay(cpp_boolean const&);
		void setZOrderOnTop(cpp_boolean const&);
	}; //class SurfaceView

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL
#define J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::SurfaceView > create< android::view::SurfaceView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::view::SurfaceView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::SurfaceView::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::SurfaceView::J2CPP_CLASS_NAME, android::view::SurfaceView::J2CPP_METHOD_NAME(0), android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::view::SurfaceView > create< android::view::SurfaceView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::view::SurfaceView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::SurfaceView::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::SurfaceView::J2CPP_CLASS_NAME, android::view::SurfaceView::J2CPP_METHOD_NAME(1), android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::view::SurfaceView > create< android::view::SurfaceView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::view::SurfaceView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::SurfaceView::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::SurfaceView::J2CPP_CLASS_NAME, android::view::SurfaceView::J2CPP_METHOD_NAME(2), android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::SurfaceHolder > android::view::SurfaceView::getHolder()
{
	return local_ref< android::view::SurfaceHolder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}



void android::view::SurfaceView::setVisibility(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}





cpp_boolean android::view::SurfaceView::gatherTransparentRegion(local_ref< android::graphics::Region > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::SurfaceView::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}


void android::view::SurfaceView::setZOrderMediaOverlay(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::SurfaceView::setZOrderOnTop(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::SurfaceView,"android/view/SurfaceView")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,3,"getHolder","()Landroid/view/SurfaceHolder;")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,4,"onAttachedToWindow","()V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,5,"onWindowVisibilityChanged","(I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,6,"setVisibility","(I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,7,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,8,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,9,"onScrollChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,10,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,11,"gatherTransparentRegion","(Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,12,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,13,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,14,"setZOrderMediaOverlay","(Z)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,15,"setZOrderOnTop","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
