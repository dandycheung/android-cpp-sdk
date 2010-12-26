/*================================================================================
  code generated by: java2cpp
  class: android.database.AbstractWindowedCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }


#include <android/database/CharArrayBuffer.hpp>
#include <android/database/CursorWindow.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class AbstractWindowedCursor;
	class AbstractWindowedCursor
		: public cpp_object<AbstractWindowedCursor>
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

		AbstractWindowedCursor(jobject jobj)
		: cpp_object<AbstractWindowedCursor>(jobj)
		{
		}

		local_ref< cpp_byte_array<1> > getBlob(cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&);
		void copyStringToBuffer(cpp_int const&, local_ref< android::database::CharArrayBuffer > const&);
		cpp_short getShort(cpp_int const&);
		cpp_int getInt(cpp_int const&);
		cpp_long getLong(cpp_int const&);
		cpp_float getFloat(cpp_int const&);
		cpp_double getDouble(cpp_int const&);
		cpp_boolean isNull(cpp_int const&);
		cpp_boolean isBlob(cpp_int const&);
		cpp_boolean isString(cpp_int const&);
		cpp_boolean isLong(cpp_int const&);
		cpp_boolean isFloat(cpp_int const&);
		local_ref< android::database::CursorWindow > getWindow();
		void setWindow(local_ref< android::database::CursorWindow > const&);
		cpp_boolean hasWindow();

	}; //class AbstractWindowedCursor

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::database::AbstractWindowedCursor > create< android::database::AbstractWindowedCursor>()
{
	return local_ref< android::database::AbstractWindowedCursor >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME, android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(0), android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > android::database::AbstractWindowedCursor::getBlob(cpp_int const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::database::AbstractWindowedCursor::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::database::AbstractWindowedCursor::copyStringToBuffer(cpp_int const &a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_short android::database::AbstractWindowedCursor::getShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::database::AbstractWindowedCursor::getInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::database::AbstractWindowedCursor::getLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::database::AbstractWindowedCursor::getFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double android::database::AbstractWindowedCursor::getDouble(cpp_int const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::isNull(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::isBlob(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::isString(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::isLong(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::isFloat(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< android::database::CursorWindow > android::database::AbstractWindowedCursor::getWindow()
{
	return local_ref< android::database::CursorWindow >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::database::AbstractWindowedCursor::setWindow(local_ref< android::database::CursorWindow > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::database::AbstractWindowedCursor::hasWindow()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::database::AbstractWindowedCursor,"android/database/AbstractWindowedCursor")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,1,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,2,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,3,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,4,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,5,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,6,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,7,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,8,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,9,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,10,"isBlob","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,11,"isString","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,12,"isLong","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,13,"isFloat","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,14,"checkPosition","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,15,"getWindow","()Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,16,"setWindow","(Landroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,17,"hasWindow","()Z")
J2CPP_DEFINE_FIELD(android::database::AbstractWindowedCursor,0,"mWindow","Landroid/database/CursorWindow;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
