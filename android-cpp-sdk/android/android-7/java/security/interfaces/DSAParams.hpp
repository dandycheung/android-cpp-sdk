/*================================================================================
  code generated by: java2cpp
  class: java.security.interfaces.DSAParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class DSAParams;
	class DSAParams
		: public cpp_object<DSAParams>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		DSAParams(jobject jobj)
		: cpp_object<DSAParams>(jobj)
		{
		}

		local_ref< java::math::BigInteger > getG();
		local_ref< java::math::BigInteger > getP();
		local_ref< java::math::BigInteger > getQ();
	}; //class DSAParams

} //namespace interfaces
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_IMPL

namespace j2cpp {


local_ref< java::math::BigInteger > java::security::interfaces::DSAParams::getG()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::DSAParams::getP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::DSAParams::getQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::interfaces::DSAParams,"java/security/interfaces/DSAParams")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAParams,0,"getG","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAParams,1,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAParams,2,"getQ","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
