/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.TestResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace junit { namespace framework { class Protectable; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class AssertionFailedError; } } }
namespace j2cpp { namespace junit { namespace framework { class TestListener; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Enumeration.hpp>
#include <junit/framework/AssertionFailedError.hpp>
#include <junit/framework/Protectable.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestListener.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestResult;
	class TestResult
		: public object<TestResult>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit TestResult(jobject jobj)
		: object<TestResult>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TestResult();
		void addError(local_ref< junit::framework::Test >  const&, local_ref< java::lang::Throwable >  const&);
		void addFailure(local_ref< junit::framework::Test >  const&, local_ref< junit::framework::AssertionFailedError >  const&);
		void addListener(local_ref< junit::framework::TestListener >  const&);
		void removeListener(local_ref< junit::framework::TestListener >  const&);
		void endTest(local_ref< junit::framework::Test >  const&);
		jint errorCount();
		local_ref< java::util::Enumeration > errors();
		jint failureCount();
		local_ref< java::util::Enumeration > failures();
		jint runCount();
		void runProtected(local_ref< junit::framework::Test >  const&, local_ref< junit::framework::Protectable >  const&);
		jboolean shouldStop();
		void startTest(local_ref< junit::framework::Test >  const&);
		void stop();
		jboolean wasSuccessful();

	}; //class TestResult

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_IMPL

namespace j2cpp {



junit::framework::TestResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


junit::framework::TestResult::TestResult()
: object<junit::framework::TestResult>(
	call_new_object<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(0),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void junit::framework::TestResult::addError(local_ref< junit::framework::Test > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(1),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void junit::framework::TestResult::addFailure(local_ref< junit::framework::Test > const &a0, local_ref< junit::framework::AssertionFailedError > const &a1)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(2),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void junit::framework::TestResult::addListener(local_ref< junit::framework::TestListener > const &a0)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(3),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void junit::framework::TestResult::removeListener(local_ref< junit::framework::TestListener > const &a0)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(4),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void junit::framework::TestResult::endTest(local_ref< junit::framework::Test > const &a0)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(5),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

jint junit::framework::TestResult::errorCount()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(6),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

local_ref< java::util::Enumeration > junit::framework::TestResult::errors()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(7),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

jint junit::framework::TestResult::failureCount()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(8),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

local_ref< java::util::Enumeration > junit::framework::TestResult::failures()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(9),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}


jint junit::framework::TestResult::runCount()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(11),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

void junit::framework::TestResult::runProtected(local_ref< junit::framework::Test > const &a0, local_ref< junit::framework::Protectable > const &a1)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(12),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1);
}

jboolean junit::framework::TestResult::shouldStop()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(13),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject());
}

void junit::framework::TestResult::startTest(local_ref< junit::framework::Test > const &a0)
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(14),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void junit::framework::TestResult::stop()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(15),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

jboolean junit::framework::TestResult::wasSuccessful()
{
	return call_method<
		junit::framework::TestResult::J2CPP_CLASS_NAME,
		junit::framework::TestResult::J2CPP_METHOD_NAME(16),
		junit::framework::TestResult::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(junit::framework::TestResult,"junit/framework/TestResult")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,1,"addError","(Ljunit/framework/Test;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,2,"addFailure","(Ljunit/framework/Test;Ljunit/framework/AssertionFailedError;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,3,"addListener","(Ljunit/framework/TestListener;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,4,"removeListener","(Ljunit/framework/TestListener;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,5,"endTest","(Ljunit/framework/Test;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,6,"errorCount","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,7,"errors","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,8,"failureCount","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,9,"failures","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,10,"run","(Ljunit/framework/TestCase;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,11,"runCount","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,12,"runProtected","(Ljunit/framework/Test;Ljunit/framework/Protectable;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,13,"shouldStop","()Z")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,14,"startTest","(Ljunit/framework/Test;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,15,"stop","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestResult,16,"wasSuccessful","()Z")
J2CPP_DEFINE_FIELD(junit::framework::TestResult,0,"fFailures","Ljava/util/Vector;")
J2CPP_DEFINE_FIELD(junit::framework::TestResult,1,"fErrors","Ljava/util/Vector;")
J2CPP_DEFINE_FIELD(junit::framework::TestResult,2,"fListeners","Ljava/util/Vector;")
J2CPP_DEFINE_FIELD(junit::framework::TestResult,3,"fRunTests","I")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
