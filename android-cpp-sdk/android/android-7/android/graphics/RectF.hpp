/*================================================================================
  code generated by: java2cpp
  class: android.graphics.RectF
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECTF_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_RECTF_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/graphics/Rect.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class RectF;
	class RectF
		: public cpp_object<RectF>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		RectF(jobject jobj)
		: cpp_object<RectF>(jobj)
		, left(jobj)
		, top(jobj)
		, right(jobj)
		, bottom(jobj)
		{
		}

		local_ref< java::lang::String > toString();
		cpp_boolean isEmpty();
		cpp_float width();
		cpp_float height();
		cpp_float centerX();
		cpp_float centerY();
		void setEmpty();
		void set(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void set(local_ref< android::graphics::RectF > const&);
		void set(local_ref< android::graphics::Rect > const&);
		void offset(cpp_float const&, cpp_float const&);
		void offsetTo(cpp_float const&, cpp_float const&);
		void inset(cpp_float const&, cpp_float const&);
		cpp_boolean contains(cpp_float const&, cpp_float const&);
		cpp_boolean contains(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		cpp_boolean contains(local_ref< android::graphics::RectF > const&);
		cpp_boolean intersect(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		cpp_boolean intersect(local_ref< android::graphics::RectF > const&);
		cpp_boolean setIntersect(local_ref< android::graphics::RectF > const&, local_ref< android::graphics::RectF > const&);
		cpp_boolean intersects(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static cpp_boolean intersects(local_ref< android::graphics::RectF > const&, local_ref< android::graphics::RectF > const&);
		void round(local_ref< android::graphics::Rect > const&);
		void roundOut(local_ref< android::graphics::Rect > const&);
		void Union(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void Union(local_ref< android::graphics::RectF > const&);
		void Union(cpp_float const&, cpp_float const&);
		void sort();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		void readFromParcel(local_ref< android::os::Parcel > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_float > left;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_float > top;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_float > right;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_float > bottom;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class RectF

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECTF_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_RECTF_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_RECTF_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::RectF > create< android::graphics::RectF>()
{
	return local_ref< android::graphics::RectF >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::RectF::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::RectF::J2CPP_CLASS_NAME, android::graphics::RectF::J2CPP_METHOD_NAME(0), android::graphics::RectF::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::RectF > create< android::graphics::RectF>(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return local_ref< android::graphics::RectF >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::RectF::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::RectF::J2CPP_CLASS_NAME, android::graphics::RectF::J2CPP_METHOD_NAME(1), android::graphics::RectF::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::RectF > create< android::graphics::RectF>(local_ref< android::graphics::RectF > const &a0)
{
	return local_ref< android::graphics::RectF >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::RectF::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::RectF::J2CPP_CLASS_NAME, android::graphics::RectF::J2CPP_METHOD_NAME(2), android::graphics::RectF::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::RectF > create< android::graphics::RectF>(local_ref< android::graphics::Rect > const &a0)
{
	return local_ref< android::graphics::RectF >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::RectF::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::RectF::J2CPP_CLASS_NAME, android::graphics::RectF::J2CPP_METHOD_NAME(3), android::graphics::RectF::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::graphics::RectF::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::graphics::RectF::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_float android::graphics::RectF::width()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_float android::graphics::RectF::height()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_float android::graphics::RectF::centerX()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_float android::graphics::RectF::centerY()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::graphics::RectF::setEmpty()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::graphics::RectF::set(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::RectF::set(local_ref< android::graphics::RectF > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::RectF::set(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::RectF::offset(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::RectF::offsetTo(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::RectF::inset(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::contains(cpp_float const &a0, cpp_float const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::contains(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::contains(local_ref< android::graphics::RectF > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::intersect(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::intersect(local_ref< android::graphics::RectF > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::setIntersect(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::RectF > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::intersects(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::RectF::intersects(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::RectF > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::RectF::round(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::RectF::roundOut(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::RectF::Union(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::RectF::Union(local_ref< android::graphics::RectF > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::RectF::Union(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::RectF::sort()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_int android::graphics::RectF::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

void android::graphics::RectF::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::RectF::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::graphics::RectF::J2CPP_CLASS_NAME,
	android::graphics::RectF::J2CPP_FIELD_NAME(4),
	android::graphics::RectF::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::graphics::RectF::CREATOR;


J2CPP_DEFINE_CLASS(android::graphics::RectF,"android/graphics/RectF")
J2CPP_DEFINE_METHOD(android::graphics::RectF,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,1,"<init>","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,2,"<init>","(Landroid/graphics/RectF;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,3,"<init>","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::RectF,5,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,6,"width","()F")
J2CPP_DEFINE_METHOD(android::graphics::RectF,7,"height","()F")
J2CPP_DEFINE_METHOD(android::graphics::RectF,8,"centerX","()F")
J2CPP_DEFINE_METHOD(android::graphics::RectF,9,"centerY","()F")
J2CPP_DEFINE_METHOD(android::graphics::RectF,10,"setEmpty","()V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,11,"set","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,12,"set","(Landroid/graphics/RectF;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,13,"set","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,14,"offset","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,15,"offsetTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,16,"inset","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,17,"contains","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,18,"contains","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,19,"contains","(Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,20,"intersect","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,21,"intersect","(Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,22,"setIntersect","(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,23,"intersects","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,24,"intersects","(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::RectF,25,"round","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,26,"roundOut","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,27,"union","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,28,"union","(Landroid/graphics/RectF;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,29,"union","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,30,"sort","()V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,31,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::graphics::RectF,32,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,33,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::graphics::RectF,34,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::RectF,0,"left","F")
J2CPP_DEFINE_FIELD(android::graphics::RectF,1,"top","F")
J2CPP_DEFINE_FIELD(android::graphics::RectF,2,"right","F")
J2CPP_DEFINE_FIELD(android::graphics::RectF,3,"bottom","F")
J2CPP_DEFINE_FIELD(android::graphics::RectF,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_RECTF_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
