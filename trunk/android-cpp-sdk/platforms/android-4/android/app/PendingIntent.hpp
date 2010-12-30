/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.PendingIntent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_PENDINGINTENT_HPP_DECL
#define J2CPP_ANDROID_APP_PENDINGINTENT_HPP_DECL


namespace j2cpp { namespace android { namespace app { namespace PendingIntent_ { class OnFinished; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace util { class AndroidException; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class IntentSender; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/PendingIntent.hpp>
#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/content/IntentSender.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Handler.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AndroidException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class PendingIntent;
	namespace PendingIntent_ {

		class CanceledException;
		class CanceledException
			: public object<CanceledException>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit CanceledException(jobject jobj)
			: object<CanceledException>(jobj)
			{
			}

			operator local_ref<android::util::AndroidException>() const;


			CanceledException();
			CanceledException(local_ref< java::lang::String > const&);
			CanceledException(local_ref< java::lang::Exception > const&);
		}; //class CanceledException

		class OnFinished;
		class OnFinished
			: public object<OnFinished>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnFinished(jobject jobj)
			: object<OnFinished>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onSendFinished(local_ref< android::app::PendingIntent >  const&, local_ref< android::content::Intent >  const&, jint, local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		}; //class OnFinished

	} //namespace PendingIntent_

	class PendingIntent
		: public object<PendingIntent>
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
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		typedef PendingIntent_::CanceledException CanceledException;
		typedef PendingIntent_::OnFinished OnFinished;

		explicit PendingIntent(jobject jobj)
		: object<PendingIntent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		static local_ref< android::app::PendingIntent > getActivity(local_ref< android::content::Context >  const&, jint, local_ref< android::content::Intent >  const&, jint);
		static local_ref< android::app::PendingIntent > getBroadcast(local_ref< android::content::Context >  const&, jint, local_ref< android::content::Intent >  const&, jint);
		static local_ref< android::app::PendingIntent > getService(local_ref< android::content::Context >  const&, jint, local_ref< android::content::Intent >  const&, jint);
		local_ref< android::content::IntentSender > getIntentSender();
		void cancel();
		void send();
		void send(jint);
		void send(local_ref< android::content::Context >  const&, jint, local_ref< android::content::Intent >  const&);
		void send(jint, local_ref< android::app::PendingIntent_::OnFinished >  const&, local_ref< android::os::Handler >  const&);
		void send(local_ref< android::content::Context >  const&, jint, local_ref< android::content::Intent >  const&, local_ref< android::app::PendingIntent_::OnFinished >  const&, local_ref< android::os::Handler >  const&);
		local_ref< java::lang::String > getTargetPackage();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		static void writePendingIntentOrNullToParcel(local_ref< android::app::PendingIntent >  const&, local_ref< android::os::Parcel >  const&);
		static local_ref< android::app::PendingIntent > readPendingIntentOrNullFromParcel(local_ref< android::os::Parcel >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > FLAG_ONE_SHOT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > FLAG_NO_CREATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > FLAG_CANCEL_CURRENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > FLAG_UPDATE_CURRENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PendingIntent

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_PENDINGINTENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_PENDINGINTENT_HPP_IMPL
#define J2CPP_ANDROID_APP_PENDINGINTENT_HPP_IMPL

namespace j2cpp {




android::app::PendingIntent_::CanceledException::operator local_ref<android::util::AndroidException>() const
{
	return local_ref<android::util::AndroidException>(get_jobject());
}


android::app::PendingIntent_::CanceledException::CanceledException()
: object<android::app::PendingIntent_::CanceledException>(
	call_new_object<
		android::app::PendingIntent_::CanceledException::J2CPP_CLASS_NAME,
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_NAME(0),
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::app::PendingIntent_::CanceledException::CanceledException(local_ref< java::lang::String > const &a0)
: object<android::app::PendingIntent_::CanceledException>(
	call_new_object<
		android::app::PendingIntent_::CanceledException::J2CPP_CLASS_NAME,
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_NAME(1),
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::app::PendingIntent_::CanceledException::CanceledException(local_ref< java::lang::Exception > const &a0)
: object<android::app::PendingIntent_::CanceledException>(
	call_new_object<
		android::app::PendingIntent_::CanceledException::J2CPP_CLASS_NAME,
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_NAME(2),
		android::app::PendingIntent_::CanceledException::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::app::PendingIntent_::CanceledException,"android/app/PendingIntent$CanceledException")
J2CPP_DEFINE_METHOD(android::app::PendingIntent_::CanceledException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent_::CanceledException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent_::CanceledException,2,"<init>","(Ljava/lang/Exception;)V")


android::app::PendingIntent_::OnFinished::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::app::PendingIntent_::OnFinished::onSendFinished(local_ref< android::app::PendingIntent > const &a0, local_ref< android::content::Intent > const &a1, jint a2, local_ref< java::lang::String > const &a3, local_ref< android::os::Bundle > const &a4)
{
	return call_method<
		android::app::PendingIntent_::OnFinished::J2CPP_CLASS_NAME,
		android::app::PendingIntent_::OnFinished::J2CPP_METHOD_NAME(0),
		android::app::PendingIntent_::OnFinished::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(android::app::PendingIntent_::OnFinished,"android/app/PendingIntent$OnFinished")
J2CPP_DEFINE_METHOD(android::app::PendingIntent_::OnFinished,0,"onSendFinished","(Landroid/app/PendingIntent;Landroid/content/Intent;ILjava/lang/String;Landroid/os/Bundle;)V")



android::app::PendingIntent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::PendingIntent::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


local_ref< android::app::PendingIntent > android::app::PendingIntent::getActivity(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::content::Intent > const &a2, jint a3)
{
	return call_static_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(1),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::PendingIntent > >
	(a0, a1, a2, a3);
}

local_ref< android::app::PendingIntent > android::app::PendingIntent::getBroadcast(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::content::Intent > const &a2, jint a3)
{
	return call_static_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(2),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::app::PendingIntent > >
	(a0, a1, a2, a3);
}

local_ref< android::app::PendingIntent > android::app::PendingIntent::getService(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::content::Intent > const &a2, jint a3)
{
	return call_static_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(3),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::app::PendingIntent > >
	(a0, a1, a2, a3);
}

local_ref< android::content::IntentSender > android::app::PendingIntent::getIntentSender()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(4),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::IntentSender > >
	(get_jobject());
}

void android::app::PendingIntent::cancel()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(5),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::app::PendingIntent::send()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(6),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void android::app::PendingIntent::send(jint a0)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(7),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void android::app::PendingIntent::send(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::content::Intent > const &a2)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(8),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::PendingIntent::send(jint a0, local_ref< android::app::PendingIntent_::OnFinished > const &a1, local_ref< android::os::Handler > const &a2)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(9),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::PendingIntent::send(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::content::Intent > const &a2, local_ref< android::app::PendingIntent_::OnFinished > const &a3, local_ref< android::os::Handler > const &a4)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(10),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< java::lang::String > android::app::PendingIntent::getTargetPackage()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(11),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean android::app::PendingIntent::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(12),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

jint android::app::PendingIntent::hashCode()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(13),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > android::app::PendingIntent::toString()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(14),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::app::PendingIntent::describeContents()
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(15),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}

void android::app::PendingIntent::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(16),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1);
}

void android::app::PendingIntent::writePendingIntentOrNullToParcel(local_ref< android::app::PendingIntent > const &a0, local_ref< android::os::Parcel > const &a1)
{
	return call_static_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(17),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(a0, a1);
}

local_ref< android::app::PendingIntent > android::app::PendingIntent::readPendingIntentOrNullFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_static_method<
		android::app::PendingIntent::J2CPP_CLASS_NAME,
		android::app::PendingIntent::J2CPP_METHOD_NAME(18),
		android::app::PendingIntent::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::app::PendingIntent > >
	(a0);
}



static_field<
	android::app::PendingIntent::J2CPP_CLASS_NAME,
	android::app::PendingIntent::J2CPP_FIELD_NAME(0),
	android::app::PendingIntent::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::app::PendingIntent::FLAG_ONE_SHOT;

static_field<
	android::app::PendingIntent::J2CPP_CLASS_NAME,
	android::app::PendingIntent::J2CPP_FIELD_NAME(1),
	android::app::PendingIntent::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::app::PendingIntent::FLAG_NO_CREATE;

static_field<
	android::app::PendingIntent::J2CPP_CLASS_NAME,
	android::app::PendingIntent::J2CPP_FIELD_NAME(2),
	android::app::PendingIntent::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::app::PendingIntent::FLAG_CANCEL_CURRENT;

static_field<
	android::app::PendingIntent::J2CPP_CLASS_NAME,
	android::app::PendingIntent::J2CPP_FIELD_NAME(3),
	android::app::PendingIntent::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::app::PendingIntent::FLAG_UPDATE_CURRENT;

static_field<
	android::app::PendingIntent::J2CPP_CLASS_NAME,
	android::app::PendingIntent::J2CPP_FIELD_NAME(4),
	android::app::PendingIntent::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::app::PendingIntent::CREATOR;


J2CPP_DEFINE_CLASS(android::app::PendingIntent,"android/app/PendingIntent")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,1,"getActivity","(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,2,"getBroadcast","(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,3,"getService","(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,4,"getIntentSender","()Landroid/content/IntentSender;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,5,"cancel","()V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,6,"send","()V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,7,"send","(I)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,8,"send","(Landroid/content/Context;ILandroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,9,"send","(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,10,"send","(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,11,"getTargetPackage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,12,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,13,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,15,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,16,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,17,"writePendingIntentOrNullToParcel","(Landroid/app/PendingIntent;Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,18,"readPendingIntentOrNullFromParcel","(Landroid/os/Parcel;)Landroid/app/PendingIntent;")
J2CPP_DEFINE_METHOD(android::app::PendingIntent,19,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::app::PendingIntent,0,"FLAG_ONE_SHOT","I")
J2CPP_DEFINE_FIELD(android::app::PendingIntent,1,"FLAG_NO_CREATE","I")
J2CPP_DEFINE_FIELD(android::app::PendingIntent,2,"FLAG_CANCEL_CURRENT","I")
J2CPP_DEFINE_FIELD(android::app::PendingIntent,3,"FLAG_UPDATE_CURRENT","I")
J2CPP_DEFINE_FIELD(android::app::PendingIntent,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_PENDINGINTENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
