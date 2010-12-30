/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.mock.MockContentResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_DECL


namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/ContentResolver.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockContentResolver;
	class MockContentResolver
		: public object<MockContentResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit MockContentResolver(jobject jobj)
		: object<MockContentResolver>(jobj)
		{
		}

		operator local_ref<android::content::ContentResolver>() const;


		MockContentResolver();
		void addProvider(local_ref< java::lang::String >  const&, local_ref< android::content::ContentProvider >  const&);
		void notifyChange(local_ref< android::net::Uri >  const&, local_ref< android::database::ContentObserver >  const&, jboolean);
	}; //class MockContentResolver

} //namespace mock
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_IMPL

namespace j2cpp {



android::test::mock::MockContentResolver::operator local_ref<android::content::ContentResolver>() const
{
	return local_ref<android::content::ContentResolver>(get_jobject());
}


android::test::mock::MockContentResolver::MockContentResolver()
: object<android::test::mock::MockContentResolver>(
	call_new_object<
		android::test::mock::MockContentResolver::J2CPP_CLASS_NAME,
		android::test::mock::MockContentResolver::J2CPP_METHOD_NAME(0),
		android::test::mock::MockContentResolver::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::test::mock::MockContentResolver::addProvider(local_ref< java::lang::String > const &a0, local_ref< android::content::ContentProvider > const &a1)
{
	return call_method<
		android::test::mock::MockContentResolver::J2CPP_CLASS_NAME,
		android::test::mock::MockContentResolver::J2CPP_METHOD_NAME(1),
		android::test::mock::MockContentResolver::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void android::test::mock::MockContentResolver::notifyChange(local_ref< android::net::Uri > const &a0, local_ref< android::database::ContentObserver > const &a1, jboolean a2)
{
	return call_method<
		android::test::mock::MockContentResolver::J2CPP_CLASS_NAME,
		android::test::mock::MockContentResolver::J2CPP_METHOD_NAME(2),
		android::test::mock::MockContentResolver::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::test::mock::MockContentResolver,"android/test/mock/MockContentResolver")
J2CPP_DEFINE_METHOD(android::test::mock::MockContentResolver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockContentResolver,1,"addProvider","(Ljava/lang/String;Landroid/content/ContentProvider;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockContentResolver,2,"notifyChange","(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCONTENTRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
