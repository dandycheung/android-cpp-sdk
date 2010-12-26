/*================================================================================
  code generated by: java2cpp
  class: android.service.wallpaper.WallpaperService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_DECL
#define J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace service { namespace wallpaper { namespace WallpaperService_ { class Engine; } } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/content/Intent.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <android/service/wallpaper/WallpaperService.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace service { namespace wallpaper {

	class WallpaperService;
	namespace WallpaperService_ {

		class Engine;
		class Engine
			: public cpp_object<Engine>
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
			J2CPP_DECLARE_FIELD(0)

			Engine(jobject jobj)
			: cpp_object<Engine>(jobj)
			{
			}

			local_ref< android::view::SurfaceHolder > getSurfaceHolder();
			cpp_int getDesiredMinimumWidth();
			cpp_int getDesiredMinimumHeight();
			cpp_boolean isVisible();
			cpp_boolean isPreview();
			void setTouchEventsEnabled(cpp_boolean const&);
			void onCreate(local_ref< android::view::SurfaceHolder > const&);
			void onDestroy();
			void onVisibilityChanged(cpp_boolean const&);
			void onTouchEvent(local_ref< android::view::MotionEvent > const&);
			void onOffsetsChanged(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_int const&, cpp_int const&);
			local_ref< android::os::Bundle > onCommand(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&, cpp_int const&, local_ref< android::os::Bundle > const&, cpp_boolean const&);
			void onDesiredSizeChanged(cpp_int const&, cpp_int const&);
			void onSurfaceChanged(local_ref< android::view::SurfaceHolder > const&, cpp_int const&, cpp_int const&, cpp_int const&);
			void onSurfaceCreated(local_ref< android::view::SurfaceHolder > const&);
			void onSurfaceDestroyed(local_ref< android::view::SurfaceHolder > const&);

		}; //class Engine

	} //namespace WallpaperService_

	class WallpaperService
		: public cpp_object<WallpaperService>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef WallpaperService_::Engine Engine;

		WallpaperService(jobject jobj)
		: cpp_object<WallpaperService>(jobj)
		{
		}

		void onCreate();
		void onDestroy();
		local_ref< android::os::IBinder > onBind(local_ref< android::content::Intent > const&);
		local_ref< android::service::wallpaper::WallpaperService_::Engine > onCreateEngine();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SERVICE_INTERFACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SERVICE_META_DATA;
	}; //class WallpaperService

} //namespace wallpaper
} //namespace service
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_IMPL
#define J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::service::wallpaper::WallpaperService_::Engine > create< android::service::wallpaper::WallpaperService_::Engine>(local_ref< android::service::wallpaper::WallpaperService > const &a0)
{
	return local_ref< android::service::wallpaper::WallpaperService_::Engine >(
		environment::get().get_jenv()->NewObject(
			get_class<android::service::wallpaper::WallpaperService_::Engine::J2CPP_CLASS_NAME>(),
			get_method_id<android::service::wallpaper::WallpaperService_::Engine::J2CPP_CLASS_NAME, android::service::wallpaper::WallpaperService_::Engine::J2CPP_METHOD_NAME(0), android::service::wallpaper::WallpaperService_::Engine::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SurfaceHolder > android::service::wallpaper::WallpaperService_::Engine::getSurfaceHolder()
{
	return local_ref< android::view::SurfaceHolder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::service::wallpaper::WallpaperService_::Engine::getDesiredMinimumWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::service::wallpaper::WallpaperService_::Engine::getDesiredMinimumHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::service::wallpaper::WallpaperService_::Engine::isVisible()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::service::wallpaper::WallpaperService_::Engine::isPreview()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::setTouchEventsEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onCreate(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onDestroy()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onVisibilityChanged(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onOffsetsChanged(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::service::wallpaper::WallpaperService_::Engine::onCommand(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, local_ref< android::os::Bundle > const &a4, cpp_boolean const &a5)
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onDesiredSizeChanged(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onSurfaceChanged(local_ref< android::view::SurfaceHolder > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onSurfaceCreated(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::service::wallpaper::WallpaperService_::Engine::onSurfaceDestroyed(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::service::wallpaper::WallpaperService_::Engine,"android/service/wallpaper/WallpaperService$Engine")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,0,"<init>","(Landroid/service/wallpaper/WallpaperService;)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,1,"getSurfaceHolder","()Landroid/view/SurfaceHolder;")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,2,"getDesiredMinimumWidth","()I")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,3,"getDesiredMinimumHeight","()I")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,4,"isVisible","()Z")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,5,"isPreview","()Z")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,6,"setTouchEventsEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,7,"onCreate","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,8,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,9,"onVisibilityChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,10,"onTouchEvent","(Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,11,"onOffsetsChanged","(FFFFII)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,12,"onCommand","(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,13,"onDesiredSizeChanged","(II)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,14,"onSurfaceChanged","(Landroid/view/SurfaceHolder;III)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,15,"onSurfaceCreated","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService_::Engine,16,"onSurfaceDestroyed","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_FIELD(android::service::wallpaper::WallpaperService_::Engine,0,"this$0","Landroid/service/wallpaper/WallpaperService;")


template <>
local_ref< android::service::wallpaper::WallpaperService > create< android::service::wallpaper::WallpaperService>()
{
	return local_ref< android::service::wallpaper::WallpaperService >(
		environment::get().get_jenv()->NewObject(
			get_class<android::service::wallpaper::WallpaperService::J2CPP_CLASS_NAME>(),
			get_method_id<android::service::wallpaper::WallpaperService::J2CPP_CLASS_NAME, android::service::wallpaper::WallpaperService::J2CPP_METHOD_NAME(0), android::service::wallpaper::WallpaperService::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::service::wallpaper::WallpaperService::onCreate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::service::wallpaper::WallpaperService::onDestroy()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::os::IBinder > android::service::wallpaper::WallpaperService::onBind(local_ref< android::content::Intent > const &a0)
{
	return local_ref< android::os::IBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::service::wallpaper::WallpaperService_::Engine > android::service::wallpaper::WallpaperService::onCreateEngine()
{
	return local_ref< android::service::wallpaper::WallpaperService_::Engine >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


static_field<
	android::service::wallpaper::WallpaperService::J2CPP_CLASS_NAME,
	android::service::wallpaper::WallpaperService::J2CPP_FIELD_NAME(0),
	android::service::wallpaper::WallpaperService::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::service::wallpaper::WallpaperService::SERVICE_INTERFACE;

static_field<
	android::service::wallpaper::WallpaperService::J2CPP_CLASS_NAME,
	android::service::wallpaper::WallpaperService::J2CPP_FIELD_NAME(1),
	android::service::wallpaper::WallpaperService::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::service::wallpaper::WallpaperService::SERVICE_META_DATA;


J2CPP_DEFINE_CLASS(android::service::wallpaper::WallpaperService,"android/service/wallpaper/WallpaperService")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService,1,"onCreate","()V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService,2,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService,3,"onBind","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::service::wallpaper::WallpaperService,4,"onCreateEngine","()Landroid/service/wallpaper/WallpaperService$Engine;")
J2CPP_DEFINE_FIELD(android::service::wallpaper::WallpaperService,0,"SERVICE_INTERFACE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::service::wallpaper::WallpaperService,1,"SERVICE_META_DATA","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
