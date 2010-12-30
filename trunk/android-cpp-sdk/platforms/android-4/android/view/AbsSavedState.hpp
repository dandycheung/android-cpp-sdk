/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.AbsSavedState
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_DECL
#define J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class AbsSavedState;
	class AbsSavedState
		: public object<AbsSavedState>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit AbsSavedState(jobject jobj)
		: object<AbsSavedState>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		local_ref< android::os::Parcelable > getSuperState();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::AbsSavedState > > EMPTY_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AbsSavedState

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_IMPL

namespace j2cpp {



android::view::AbsSavedState::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::AbsSavedState::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}



local_ref< android::os::Parcelable > android::view::AbsSavedState::getSuperState()
{
	return call_method<
		android::view::AbsSavedState::J2CPP_CLASS_NAME,
		android::view::AbsSavedState::J2CPP_METHOD_NAME(2),
		android::view::AbsSavedState::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::Parcelable > >
	(get_jobject());
}

jint android::view::AbsSavedState::describeContents()
{
	return call_method<
		android::view::AbsSavedState::J2CPP_CLASS_NAME,
		android::view::AbsSavedState::J2CPP_METHOD_NAME(3),
		android::view::AbsSavedState::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::view::AbsSavedState::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::AbsSavedState::J2CPP_CLASS_NAME,
		android::view::AbsSavedState::J2CPP_METHOD_NAME(4),
		android::view::AbsSavedState::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::view::AbsSavedState::J2CPP_CLASS_NAME,
	android::view::AbsSavedState::J2CPP_FIELD_NAME(0),
	android::view::AbsSavedState::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::view::AbsSavedState >
> android::view::AbsSavedState::EMPTY_STATE;

static_field<
	android::view::AbsSavedState::J2CPP_CLASS_NAME,
	android::view::AbsSavedState::J2CPP_FIELD_NAME(1),
	android::view::AbsSavedState::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::os::Parcelable_::Creator >
> android::view::AbsSavedState::CREATOR;


J2CPP_DEFINE_CLASS(android::view::AbsSavedState,"android/view/AbsSavedState")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,0,"<init>","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,2,"getSuperState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::AbsSavedState,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::AbsSavedState,0,"EMPTY_STATE","Landroid/view/AbsSavedState;")
J2CPP_DEFINE_FIELD(android::view::AbsSavedState,1,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ABSSAVEDSTATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
