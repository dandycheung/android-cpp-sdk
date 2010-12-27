/*================================================================================
  code generated by: java2cpp
  class: android.content.ContentQueryMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }


#include <android/content/ContentValues.hpp>
#include <android/database/Cursor.hpp>
#include <android/os/Handler.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentQueryMap;
	class ContentQueryMap
		: public cpp_object<ContentQueryMap>
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

		ContentQueryMap(jobject jobj)
		: cpp_object<ContentQueryMap>(jobj)
		{
		}

		void setKeepUpdated(cpp_boolean const&);
		local_ref< android::content::ContentValues > getValues(local_ref< java::lang::String > const&);
		void requery();
		local_ref< java::util::Map > getRows();
		void close();
	}; //class ContentQueryMap

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::ContentQueryMap > create< android::content::ContentQueryMap>(local_ref< android::database::Cursor > const &a0, local_ref< java::lang::String > const &a1, cpp_boolean const &a2, local_ref< android::os::Handler > const &a3)
{
	return local_ref< android::content::ContentQueryMap >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::ContentQueryMap::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::ContentQueryMap::J2CPP_CLASS_NAME, android::content::ContentQueryMap::J2CPP_METHOD_NAME(0), android::content::ContentQueryMap::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::content::ContentQueryMap::setKeepUpdated(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::ContentValues > android::content::ContentQueryMap::getValues(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::ContentValues >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::ContentQueryMap::requery()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::util::Map > android::content::ContentQueryMap::getRows()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::content::ContentQueryMap::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::content::ContentQueryMap,"android/content/ContentQueryMap")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,0,"<init>","(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,1,"setKeepUpdated","(Z)V")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,2,"getValues","(Ljava/lang/String;)Landroid/content/ContentValues;")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,3,"requery","()V")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,4,"getRows","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,5,"close","()V")
J2CPP_DEFINE_METHOD(android::content::ContentQueryMap,6,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTQUERYMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION