/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.hardware.Camera
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_CAMERA_HPP_DECL
#define J2CPP_ANDROID_HARDWARE_CAMERA_HPP_DECL


namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class ErrorCallback; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class Parameters; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class PreviewCallback; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class AutoFocusCallback; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class ShutterCallback; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class PictureCallback; } } } }
namespace j2cpp { namespace android { namespace hardware { namespace Camera_ { class Size; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/hardware/Camera.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace hardware {

	class Camera;
	namespace Camera_ {

		class ErrorCallback;
		class ErrorCallback
			: public object<ErrorCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ErrorCallback(jobject jobj)
			: object<ErrorCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onError(jint, local_ref< android::hardware::Camera >  const&);
		}; //class ErrorCallback

		class Parameters;
		class Parameters
			: public object<Parameters>
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
			J2CPP_DECLARE_METHOD(17)
			J2CPP_DECLARE_FIELD(0)

			explicit Parameters(jobject jobj)
			: object<Parameters>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::String > flatten();
			void unflatten(local_ref< java::lang::String >  const&);
			void remove(local_ref< java::lang::String >  const&);
			void set(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
			void set(local_ref< java::lang::String >  const&, jint);
			local_ref< java::lang::String > get(local_ref< java::lang::String >  const&);
			jint getInt(local_ref< java::lang::String >  const&);
			void setPreviewSize(jint, jint);
			local_ref< android::hardware::Camera_::Size > getPreviewSize();
			void setPreviewFrameRate(jint);
			jint getPreviewFrameRate();
			void setPreviewFormat(jint);
			jint getPreviewFormat();
			void setPictureSize(jint, jint);
			local_ref< android::hardware::Camera_::Size > getPictureSize();
			void setPictureFormat(jint);
			jint getPictureFormat();

		}; //class Parameters

		class PreviewCallback;
		class PreviewCallback
			: public object<PreviewCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit PreviewCallback(jobject jobj)
			: object<PreviewCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onPreviewFrame(local_ref< array<jbyte,1> >  const&, local_ref< android::hardware::Camera >  const&);
		}; //class PreviewCallback

		class AutoFocusCallback;
		class AutoFocusCallback
			: public object<AutoFocusCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit AutoFocusCallback(jobject jobj)
			: object<AutoFocusCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onAutoFocus(jboolean, local_ref< android::hardware::Camera >  const&);
		}; //class AutoFocusCallback

		class ShutterCallback;
		class ShutterCallback
			: public object<ShutterCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ShutterCallback(jobject jobj)
			: object<ShutterCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onShutter();
		}; //class ShutterCallback

		class PictureCallback;
		class PictureCallback
			: public object<PictureCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit PictureCallback(jobject jobj)
			: object<PictureCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onPictureTaken(local_ref< array<jbyte,1> >  const&, local_ref< android::hardware::Camera >  const&);
		}; //class PictureCallback

		class Size;
		class Size
			: public object<Size>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit Size(jobject jobj)
			: object<Size>(jobj)
			, width(jobj)
			, height(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Size(local_ref< android::hardware::Camera > const&, jint, jint);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > width;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > height;
		}; //class Size

	} //namespace Camera_

	class Camera
		: public object<Camera>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef Camera_::ErrorCallback ErrorCallback;
		typedef Camera_::Parameters Parameters;
		typedef Camera_::PreviewCallback PreviewCallback;
		typedef Camera_::AutoFocusCallback AutoFocusCallback;
		typedef Camera_::ShutterCallback ShutterCallback;
		typedef Camera_::PictureCallback PictureCallback;
		typedef Camera_::Size Size;

		explicit Camera(jobject jobj)
		: object<Camera>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::hardware::Camera > open();
		void release();
		void setPreviewDisplay(local_ref< android::view::SurfaceHolder >  const&);
		void startPreview();
		void stopPreview();
		void setPreviewCallback(local_ref< android::hardware::Camera_::PreviewCallback >  const&);
		void setOneShotPreviewCallback(local_ref< android::hardware::Camera_::PreviewCallback >  const&);
		void autoFocus(local_ref< android::hardware::Camera_::AutoFocusCallback >  const&);
		void takePicture(local_ref< android::hardware::Camera_::ShutterCallback >  const&, local_ref< android::hardware::Camera_::PictureCallback >  const&, local_ref< android::hardware::Camera_::PictureCallback >  const&);
		void setErrorCallback(local_ref< android::hardware::Camera_::ErrorCallback >  const&);
		void setParameters(local_ref< android::hardware::Camera_::Parameters >  const&);
		local_ref< android::hardware::Camera_::Parameters > getParameters();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > CAMERA_ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CAMERA_ERROR_SERVER_DIED;
	}; //class Camera

} //namespace hardware
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_CAMERA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_CAMERA_HPP_IMPL
#define J2CPP_ANDROID_HARDWARE_CAMERA_HPP_IMPL

namespace j2cpp {




android::hardware::Camera_::ErrorCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::hardware::Camera_::ErrorCallback::onError(jint a0, local_ref< android::hardware::Camera > const &a1)
{
	return call_method<
		android::hardware::Camera_::ErrorCallback::J2CPP_CLASS_NAME,
		android::hardware::Camera_::ErrorCallback::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::ErrorCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::hardware::Camera_::ErrorCallback,"android/hardware/Camera$ErrorCallback")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::ErrorCallback,0,"onError","(ILandroid/hardware/Camera;)V")


android::hardware::Camera_::Parameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::hardware::Camera_::Parameters::flatten()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(1),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void android::hardware::Camera_::Parameters::unflatten(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(2),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera_::Parameters::remove(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(3),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera_::Parameters::set(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(4),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::hardware::Camera_::Parameters::set(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(5),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::hardware::Camera_::Parameters::get(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(6),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

jint android::hardware::Camera_::Parameters::getInt(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(7),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

void android::hardware::Camera_::Parameters::setPreviewSize(jint a0, jint a1)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(8),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::hardware::Camera_::Size > android::hardware::Camera_::Parameters::getPreviewSize()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(9),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::hardware::Camera_::Size > >
	(get_jobject());
}

void android::hardware::Camera_::Parameters::setPreviewFrameRate(jint a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(10),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

jint android::hardware::Camera_::Parameters::getPreviewFrameRate()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(11),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

void android::hardware::Camera_::Parameters::setPreviewFormat(jint a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(12),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

jint android::hardware::Camera_::Parameters::getPreviewFormat()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(13),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

void android::hardware::Camera_::Parameters::setPictureSize(jint a0, jint a1)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(14),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::hardware::Camera_::Size > android::hardware::Camera_::Parameters::getPictureSize()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(15),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::hardware::Camera_::Size > >
	(get_jobject());
}

void android::hardware::Camera_::Parameters::setPictureFormat(jint a0)
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(16),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

jint android::hardware::Camera_::Parameters::getPictureFormat()
{
	return call_method<
		android::hardware::Camera_::Parameters::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Parameters::J2CPP_METHOD_NAME(17),
		android::hardware::Camera_::Parameters::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(android::hardware::Camera_::Parameters,"android/hardware/Camera$Parameters")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,0,"<init>","(Landroid/hardware/Camera;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,1,"flatten","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,2,"unflatten","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,3,"remove","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,4,"set","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,5,"set","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,6,"get","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,7,"getInt","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,8,"setPreviewSize","(II)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,9,"getPreviewSize","()Landroid/hardware/Camera$Size;")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,10,"setPreviewFrameRate","(I)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,11,"getPreviewFrameRate","()I")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,12,"setPreviewFormat","(I)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,13,"getPreviewFormat","()I")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,14,"setPictureSize","(II)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,15,"getPictureSize","()Landroid/hardware/Camera$Size;")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,16,"setPictureFormat","(I)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Parameters,17,"getPictureFormat","()I")
J2CPP_DEFINE_FIELD(android::hardware::Camera_::Parameters,0,"this$0","Landroid/hardware/Camera;")


android::hardware::Camera_::PreviewCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::hardware::Camera_::PreviewCallback::onPreviewFrame(local_ref< array<jbyte,1> > const &a0, local_ref< android::hardware::Camera > const &a1)
{
	return call_method<
		android::hardware::Camera_::PreviewCallback::J2CPP_CLASS_NAME,
		android::hardware::Camera_::PreviewCallback::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::PreviewCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::hardware::Camera_::PreviewCallback,"android/hardware/Camera$PreviewCallback")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::PreviewCallback,0,"onPreviewFrame","([BLandroid/hardware/Camera;)V")


android::hardware::Camera_::AutoFocusCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::hardware::Camera_::AutoFocusCallback::onAutoFocus(jboolean a0, local_ref< android::hardware::Camera > const &a1)
{
	return call_method<
		android::hardware::Camera_::AutoFocusCallback::J2CPP_CLASS_NAME,
		android::hardware::Camera_::AutoFocusCallback::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::AutoFocusCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::hardware::Camera_::AutoFocusCallback,"android/hardware/Camera$AutoFocusCallback")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::AutoFocusCallback,0,"onAutoFocus","(ZLandroid/hardware/Camera;)V")


android::hardware::Camera_::ShutterCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::hardware::Camera_::ShutterCallback::onShutter()
{
	return call_method<
		android::hardware::Camera_::ShutterCallback::J2CPP_CLASS_NAME,
		android::hardware::Camera_::ShutterCallback::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::ShutterCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::hardware::Camera_::ShutterCallback,"android/hardware/Camera$ShutterCallback")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::ShutterCallback,0,"onShutter","()V")


android::hardware::Camera_::PictureCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::hardware::Camera_::PictureCallback::onPictureTaken(local_ref< array<jbyte,1> > const &a0, local_ref< android::hardware::Camera > const &a1)
{
	return call_method<
		android::hardware::Camera_::PictureCallback::J2CPP_CLASS_NAME,
		android::hardware::Camera_::PictureCallback::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::PictureCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::hardware::Camera_::PictureCallback,"android/hardware/Camera$PictureCallback")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::PictureCallback,0,"onPictureTaken","([BLandroid/hardware/Camera;)V")


android::hardware::Camera_::Size::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::hardware::Camera_::Size::Size(local_ref< android::hardware::Camera > const &a0, jint a1, jint a2)
: object<android::hardware::Camera_::Size>(
	call_new_object<
		android::hardware::Camera_::Size::J2CPP_CLASS_NAME,
		android::hardware::Camera_::Size::J2CPP_METHOD_NAME(0),
		android::hardware::Camera_::Size::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
, width(get_jobject())
, height(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::hardware::Camera_::Size,"android/hardware/Camera$Size")
J2CPP_DEFINE_METHOD(android::hardware::Camera_::Size,0,"<init>","(Landroid/hardware/Camera;II)V")
J2CPP_DEFINE_FIELD(android::hardware::Camera_::Size,0,"width","I")
J2CPP_DEFINE_FIELD(android::hardware::Camera_::Size,1,"height","I")
J2CPP_DEFINE_FIELD(android::hardware::Camera_::Size,2,"this$0","Landroid/hardware/Camera;")



android::hardware::Camera::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::hardware::Camera > android::hardware::Camera::open()
{
	return call_static_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(1),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::hardware::Camera > >
	();
}


void android::hardware::Camera::release()
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(3),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::hardware::Camera::setPreviewDisplay(local_ref< android::view::SurfaceHolder > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(4),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera::startPreview()
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(5),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::hardware::Camera::stopPreview()
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(6),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void android::hardware::Camera::setPreviewCallback(local_ref< android::hardware::Camera_::PreviewCallback > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(7),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera::setOneShotPreviewCallback(local_ref< android::hardware::Camera_::PreviewCallback > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(8),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera::autoFocus(local_ref< android::hardware::Camera_::AutoFocusCallback > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(9),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera::takePicture(local_ref< android::hardware::Camera_::ShutterCallback > const &a0, local_ref< android::hardware::Camera_::PictureCallback > const &a1, local_ref< android::hardware::Camera_::PictureCallback > const &a2)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(10),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::hardware::Camera::setErrorCallback(local_ref< android::hardware::Camera_::ErrorCallback > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(11),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::hardware::Camera::setParameters(local_ref< android::hardware::Camera_::Parameters > const &a0)
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(12),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< android::hardware::Camera_::Parameters > android::hardware::Camera::getParameters()
{
	return call_method<
		android::hardware::Camera::J2CPP_CLASS_NAME,
		android::hardware::Camera::J2CPP_METHOD_NAME(13),
		android::hardware::Camera::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::hardware::Camera_::Parameters > >
	(get_jobject());
}


static_field<
	android::hardware::Camera::J2CPP_CLASS_NAME,
	android::hardware::Camera::J2CPP_FIELD_NAME(0),
	android::hardware::Camera::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::hardware::Camera::CAMERA_ERROR_UNKNOWN;

static_field<
	android::hardware::Camera::J2CPP_CLASS_NAME,
	android::hardware::Camera::J2CPP_FIELD_NAME(1),
	android::hardware::Camera::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::hardware::Camera::CAMERA_ERROR_SERVER_DIED;


J2CPP_DEFINE_CLASS(android::hardware::Camera,"android/hardware/Camera")
J2CPP_DEFINE_METHOD(android::hardware::Camera,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,1,"open","()Landroid/hardware/Camera;")
J2CPP_DEFINE_METHOD(android::hardware::Camera,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,3,"release","()V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,4,"setPreviewDisplay","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,5,"startPreview","()V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,6,"stopPreview","()V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,7,"setPreviewCallback","(Landroid/hardware/Camera$PreviewCallback;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,8,"setOneShotPreviewCallback","(Landroid/hardware/Camera$PreviewCallback;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,9,"autoFocus","(Landroid/hardware/Camera$AutoFocusCallback;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,10,"takePicture","(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,11,"setErrorCallback","(Landroid/hardware/Camera$ErrorCallback;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,12,"setParameters","(Landroid/hardware/Camera$Parameters;)V")
J2CPP_DEFINE_METHOD(android::hardware::Camera,13,"getParameters","()Landroid/hardware/Camera$Parameters;")
J2CPP_DEFINE_FIELD(android::hardware::Camera,0,"CAMERA_ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::hardware::Camera,1,"CAMERA_ERROR_SERVER_DIED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_CAMERA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
