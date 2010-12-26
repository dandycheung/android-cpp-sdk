/*================================================================================
  code generated by: java2cpp
  class: junit.runner.TestSuiteLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL
#define J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace junit { namespace runner {

	class TestSuiteLoader;
	class TestSuiteLoader
		: public cpp_object<TestSuiteLoader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		TestSuiteLoader(jobject jobj)
		: cpp_object<TestSuiteLoader>(jobj)
		{
		}

		local_ref< java::lang::Class > load(local_ref< java::lang::String > const&);
		local_ref< java::lang::Class > reload(local_ref< java::lang::Class > const&);
	}; //class TestSuiteLoader

} //namespace runner
} //namespace junit


} //namespace j2cpp

#endif //J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL
#define J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Class > junit::runner::TestSuiteLoader::load(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > junit::runner::TestSuiteLoader::reload(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(junit::runner::TestSuiteLoader,"junit/runner/TestSuiteLoader")
J2CPP_DEFINE_METHOD(junit::runner::TestSuiteLoader,0,"load","(Ljava/lang/String;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(junit::runner::TestSuiteLoader,1,"reload","(Ljava/lang/Class;)Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_JUNIT_RUNNER_TESTSUITELOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
