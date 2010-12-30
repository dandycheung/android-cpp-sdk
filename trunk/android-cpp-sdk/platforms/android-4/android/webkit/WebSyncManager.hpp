/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebSyncManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebSyncManager;
	class WebSyncManager
		: public object<WebSyncManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit WebSyncManager(jobject jobj)
		: object<WebSyncManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Runnable>() const;


		void run();
		void sync();
		void resetSync();
		void startSync();
		void stopSync();

	}; //class WebSyncManager

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_IMPL

namespace j2cpp {



android::webkit::WebSyncManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::webkit::WebSyncManager::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}



void android::webkit::WebSyncManager::run()
{
	return call_method<
		android::webkit::WebSyncManager::J2CPP_CLASS_NAME,
		android::webkit::WebSyncManager::J2CPP_METHOD_NAME(2),
		android::webkit::WebSyncManager::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::webkit::WebSyncManager::sync()
{
	return call_method<
		android::webkit::WebSyncManager::J2CPP_CLASS_NAME,
		android::webkit::WebSyncManager::J2CPP_METHOD_NAME(3),
		android::webkit::WebSyncManager::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::webkit::WebSyncManager::resetSync()
{
	return call_method<
		android::webkit::WebSyncManager::J2CPP_CLASS_NAME,
		android::webkit::WebSyncManager::J2CPP_METHOD_NAME(4),
		android::webkit::WebSyncManager::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::webkit::WebSyncManager::startSync()
{
	return call_method<
		android::webkit::WebSyncManager::J2CPP_CLASS_NAME,
		android::webkit::WebSyncManager::J2CPP_METHOD_NAME(5),
		android::webkit::WebSyncManager::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::webkit::WebSyncManager::stopSync()
{
	return call_method<
		android::webkit::WebSyncManager::J2CPP_CLASS_NAME,
		android::webkit::WebSyncManager::J2CPP_METHOD_NAME(6),
		android::webkit::WebSyncManager::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}




J2CPP_DEFINE_CLASS(android::webkit::WebSyncManager,"android/webkit/WebSyncManager")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,0,"<init>","(Landroid/content/Context;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,2,"run","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,3,"sync","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,4,"resetSync","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,5,"startSync","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,6,"stopSync","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebSyncManager,7,"onSyncInit","()V")
J2CPP_DEFINE_FIELD(android::webkit::WebSyncManager,0,"mHandler","Landroid/os/Handler;")
J2CPP_DEFINE_FIELD(android::webkit::WebSyncManager,1,"mDataBase","Landroid/webkit/WebViewDatabase;")
J2CPP_DEFINE_FIELD(android::webkit::WebSyncManager,2,"LOGTAG","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBSYNCMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
