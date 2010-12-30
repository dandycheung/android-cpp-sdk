/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_DECL


namespace j2cpp { namespace android { namespace database { class SQLException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/database/SQLException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteException;
	class SQLiteException
		: public object<SQLiteException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SQLiteException(jobject jobj)
		: object<SQLiteException>(jobj)
		{
		}

		operator local_ref<android::database::SQLException>() const;


		SQLiteException();
		SQLiteException(local_ref< java::lang::String > const&);
	}; //class SQLiteException

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteException::operator local_ref<android::database::SQLException>() const
{
	return local_ref<android::database::SQLException>(get_jobject());
}


android::database::sqlite::SQLiteException::SQLiteException()
: object<android::database::sqlite::SQLiteException>(
	call_new_object<
		android::database::sqlite::SQLiteException::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteException::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::database::sqlite::SQLiteException::SQLiteException(local_ref< java::lang::String > const &a0)
: object<android::database::sqlite::SQLiteException>(
	call_new_object<
		android::database::sqlite::SQLiteException::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteException::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteException,"android/database/sqlite/SQLiteException")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
