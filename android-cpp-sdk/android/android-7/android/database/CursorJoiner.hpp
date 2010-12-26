/*================================================================================
  code generated by: java2cpp
  class: android.database.CursorJoiner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { namespace CursorJoiner_ { class Result; } } } }


#include <android/database/Cursor.hpp>
#include <android/database/CursorJoiner.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CursorJoiner;
	namespace CursorJoiner_ {

		class Result;
		class Result
			: public cpp_object<Result>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			Result(jobject jobj)
			: cpp_object<Result>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::database::CursorJoiner_::Result, 1> > values();
			static local_ref< android::database::CursorJoiner_::Result > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::database::CursorJoiner_::Result > > BOTH;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::database::CursorJoiner_::Result > > LEFT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::database::CursorJoiner_::Result > > RIGHT;
		}; //class Result

	} //namespace CursorJoiner_

	class CursorJoiner
		: public cpp_object<CursorJoiner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef CursorJoiner_::Result Result;

		CursorJoiner(jobject jobj)
		: cpp_object<CursorJoiner>(jobj)
		{
		}

		local_ref< java::util::Iterator > iterator();
		cpp_boolean hasNext();
		local_ref< android::database::CursorJoiner_::Result > next();
		void remove();
		local_ref< java::lang::Object > next_1();
	}; //class CursorJoiner

} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<android::database::CursorJoiner_::Result, 1> > android::database::CursorJoiner_::Result::values()
{
	return local_ref< cpp_object_array<android::database::CursorJoiner_::Result, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::database::CursorJoiner_::Result > android::database::CursorJoiner_::Result::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::database::CursorJoiner_::Result >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::database::CursorJoiner_::Result > create< android::database::CursorJoiner_::Result>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::database::CursorJoiner_::Result >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::CursorJoiner_::Result::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::CursorJoiner_::Result::J2CPP_CLASS_NAME, android::database::CursorJoiner_::Result::J2CPP_METHOD_NAME(2), android::database::CursorJoiner_::Result::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::database::CursorJoiner_::Result::J2CPP_CLASS_NAME,
	android::database::CursorJoiner_::Result::J2CPP_FIELD_NAME(0),
	android::database::CursorJoiner_::Result::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::database::CursorJoiner_::Result >
> android::database::CursorJoiner_::Result::BOTH;

static_field<
	android::database::CursorJoiner_::Result::J2CPP_CLASS_NAME,
	android::database::CursorJoiner_::Result::J2CPP_FIELD_NAME(1),
	android::database::CursorJoiner_::Result::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::database::CursorJoiner_::Result >
> android::database::CursorJoiner_::Result::LEFT;

static_field<
	android::database::CursorJoiner_::Result::J2CPP_CLASS_NAME,
	android::database::CursorJoiner_::Result::J2CPP_FIELD_NAME(2),
	android::database::CursorJoiner_::Result::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::database::CursorJoiner_::Result >
> android::database::CursorJoiner_::Result::RIGHT;


J2CPP_DEFINE_CLASS(android::database::CursorJoiner_::Result,"android/database/CursorJoiner$Result")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner_::Result,0,"values","()[android.database.CursorJoiner.Result")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner_::Result,1,"valueOf","(Ljava/lang/String;)Landroid/database/CursorJoiner$Result;")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner_::Result,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner_::Result,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::database::CursorJoiner_::Result,0,"BOTH","Landroid/database/CursorJoiner$Result;")
J2CPP_DEFINE_FIELD(android::database::CursorJoiner_::Result,1,"LEFT","Landroid/database/CursorJoiner$Result;")
J2CPP_DEFINE_FIELD(android::database::CursorJoiner_::Result,2,"RIGHT","Landroid/database/CursorJoiner$Result;")
J2CPP_DEFINE_FIELD(android::database::CursorJoiner_::Result,3,"$VALUES","[android.database.CursorJoiner.Result")


template <>
local_ref< android::database::CursorJoiner > create< android::database::CursorJoiner>(local_ref< android::database::Cursor > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< android::database::Cursor > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3)
{
	return local_ref< android::database::CursorJoiner >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::CursorJoiner::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::CursorJoiner::J2CPP_CLASS_NAME, android::database::CursorJoiner::J2CPP_METHOD_NAME(0), android::database::CursorJoiner::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::util::Iterator > android::database::CursorJoiner::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::database::CursorJoiner::hasNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::database::CursorJoiner_::Result > android::database::CursorJoiner::next()
{
	return local_ref< android::database::CursorJoiner_::Result >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::database::CursorJoiner::remove()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > android::database::CursorJoiner::next_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::CursorJoiner,"android/database/CursorJoiner")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,0,"<init>","(Landroid/database/Cursor;[java.lang.StringLandroid/database/Cursor;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,1,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,2,"hasNext","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,3,"next","()Landroid/database/CursorJoiner$Result;")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,4,"remove","()V")
J2CPP_DEFINE_METHOD(android::database::CursorJoiner,5,"next","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORJOINER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
