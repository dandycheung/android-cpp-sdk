/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.InputMethodInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ServiceInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ResolveInfo; } } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Context.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/content/pm/ResolveInfo.hpp>
#include <android/content/pm/ServiceInfo.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputMethodInfo;
	class InputMethodInfo
		: public object<InputMethodInfo>
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

		explicit InputMethodInfo(jobject jobj)
		: object<InputMethodInfo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		InputMethodInfo(local_ref< android::content::Context > const&, local_ref< android::content::pm::ResolveInfo > const&);
		InputMethodInfo(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::CharSequence > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getId();
		local_ref< java::lang::String > getPackageName();
		local_ref< java::lang::String > getServiceName();
		local_ref< android::content::pm::ServiceInfo > getServiceInfo();
		local_ref< android::content::ComponentName > getComponent();
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager >  const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager >  const&);
		local_ref< java::lang::String > getSettingsActivity();
		jint getIsDefaultResourceId();
		void dump(local_ref< android::util::Printer >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		jboolean equals(local_ref< java::lang::Object >  const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class InputMethodInfo

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::InputMethodInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::inputmethod::InputMethodInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::view::inputmethod::InputMethodInfo::InputMethodInfo(local_ref< android::content::Context > const &a0, local_ref< android::content::pm::ResolveInfo > const &a1)
: object<android::view::inputmethod::InputMethodInfo>(
	call_new_object<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::view::inputmethod::InputMethodInfo::InputMethodInfo(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::CharSequence > const &a2, local_ref< java::lang::String > const &a3)
: object<android::view::inputmethod::InputMethodInfo>(
	call_new_object<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3)
)
{
}


local_ref< java::lang::String > android::view::inputmethod::InputMethodInfo::getId()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::view::inputmethod::InputMethodInfo::getPackageName()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::view::inputmethod::InputMethodInfo::getServiceName()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< android::content::pm::ServiceInfo > android::view::inputmethod::InputMethodInfo::getServiceInfo()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::content::pm::ServiceInfo > >
	(get_jobject());
}

local_ref< android::content::ComponentName > android::view::inputmethod::InputMethodInfo::getComponent()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::ComponentName > >
	(get_jobject());
}

local_ref< java::lang::CharSequence > android::view::inputmethod::InputMethodInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::view::inputmethod::InputMethodInfo::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::view::inputmethod::InputMethodInfo::getSettingsActivity()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(9),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::view::inputmethod::InputMethodInfo::getIsDefaultResourceId()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(10),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

void android::view::inputmethod::InputMethodInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(11),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::view::inputmethod::InputMethodInfo::toString()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(12),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean android::view::inputmethod::InputMethodInfo::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(13),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject(), a0);
}

void android::view::inputmethod::InputMethodInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(14),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1);
}

jint android::view::inputmethod::InputMethodInfo::describeContents()
{
	return call_method<
		android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_NAME(15),
		android::view::inputmethod::InputMethodInfo::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}



static_field<
	android::view::inputmethod::InputMethodInfo::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethodInfo::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::InputMethodInfo::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::InputMethodInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethodInfo,"android/view/inputmethod/InputMethodInfo")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,0,"<init>","(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,2,"getId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,3,"getPackageName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,4,"getServiceName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,5,"getServiceInfo","()Landroid/content/pm/ServiceInfo;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,6,"getComponent","()Landroid/content/ComponentName;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,7,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,8,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,9,"getSettingsActivity","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,10,"getIsDefaultResourceId","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,11,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,12,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,14,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,15,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodInfo,16,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethodInfo,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
