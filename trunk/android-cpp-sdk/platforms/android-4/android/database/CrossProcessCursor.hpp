/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.CrossProcessCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/database/Cursor.hpp>
#include <android/database/CursorWindow.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CrossProcessCursor;
	class CrossProcessCursor
		: public object<CrossProcessCursor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CrossProcessCursor(jobject jobj)
		: object<CrossProcessCursor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::Cursor>() const;


		local_ref< android::database::CursorWindow > getWindow();
		void fillWindow(jint, local_ref< android::database::CursorWindow >  const&);
		jboolean onMove(jint, jint);
	}; //class CrossProcessCursor

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_IMPL

namespace j2cpp {



android::database::CrossProcessCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::CrossProcessCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}

local_ref< android::database::CursorWindow > android::database::CrossProcessCursor::getWindow()
{
	return call_method<
		android::database::CrossProcessCursor::J2CPP_CLASS_NAME,
		android::database::CrossProcessCursor::J2CPP_METHOD_NAME(0),
		android::database::CrossProcessCursor::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::database::CursorWindow > >
	(get_jobject());
}

void android::database::CrossProcessCursor::fillWindow(jint a0, local_ref< android::database::CursorWindow > const &a1)
{
	return call_method<
		android::database::CrossProcessCursor::J2CPP_CLASS_NAME,
		android::database::CrossProcessCursor::J2CPP_METHOD_NAME(1),
		android::database::CrossProcessCursor::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::database::CrossProcessCursor::onMove(jint a0, jint a1)
{
	return call_method<
		android::database::CrossProcessCursor::J2CPP_CLASS_NAME,
		android::database::CrossProcessCursor::J2CPP_METHOD_NAME(2),
		android::database::CrossProcessCursor::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::database::CrossProcessCursor,"android/database/CrossProcessCursor")
J2CPP_DEFINE_METHOD(android::database::CrossProcessCursor,0,"getWindow","()Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::CrossProcessCursor,1,"fillWindow","(ILandroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::CrossProcessCursor,2,"onMove","(II)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CROSSPROCESSCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
