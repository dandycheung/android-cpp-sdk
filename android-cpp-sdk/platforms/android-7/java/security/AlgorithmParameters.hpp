/*================================================================================
  code generated by: java2cpp
  class: java.security.AlgorithmParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AlgorithmParameters;
	class AlgorithmParameters
		: public cpp_object<AlgorithmParameters>
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

		explicit AlgorithmParameters(jobject jobj)
		: cpp_object<AlgorithmParameters>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String > const&);
		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::security::AlgorithmParameters > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::Provider > const&);
		local_ref< java::security::Provider > getProvider();
		local_ref< java::lang::String > getAlgorithm();
		void init(local_ref< java::security::spec::AlgorithmParameterSpec > const&);
		void init(local_ref< cpp_byte_array<1> > const&);
		void init(local_ref< cpp_byte_array<1> > const&, local_ref< java::lang::String > const&);
		local_ref< java::security::spec::AlgorithmParameterSpec > getParameterSpec(local_ref< java::lang::Class > const&);
		local_ref< cpp_byte_array<1> > getEncoded();
		local_ref< cpp_byte_array<1> > getEncoded(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
	}; //class AlgorithmParameters

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL

namespace j2cpp {



java::security::AlgorithmParameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::AlgorithmParameters >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::security::AlgorithmParameters >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::AlgorithmParameters > java::security::AlgorithmParameters::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return local_ref< java::security::AlgorithmParameters >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::Provider > java::security::AlgorithmParameters::getProvider()
{
	return local_ref< java::security::Provider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::security::AlgorithmParameters::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void java::security::AlgorithmParameters::init(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::security::AlgorithmParameters::init(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::security::AlgorithmParameters::init(local_ref< cpp_byte_array<1> > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::spec::AlgorithmParameterSpec > java::security::AlgorithmParameters::getParameterSpec(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::security::spec::AlgorithmParameterSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > java::security::AlgorithmParameters::getEncoded()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > java::security::AlgorithmParameters::getEncoded(local_ref< java::lang::String > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::AlgorithmParameters::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::AlgorithmParameters,"java/security/AlgorithmParameters")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,0,"<init>","(Ljava/security/AlgorithmParametersSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,1,"getInstance","(Ljava/lang/String;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,2,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,3,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,4,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,6,"init","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,7,"init","([B)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,8,"init","([BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,9,"getParameterSpec","(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,10,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,11,"getEncoded","(Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameters,12,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION