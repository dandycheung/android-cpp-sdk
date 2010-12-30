/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Math
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_MATH_HPP_DECL
#define J2CPP_JAVA_LANG_MATH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Math;
	class Math
		: public object<Math>
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
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit Math(jobject jobj)
		: object<Math>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jdouble abs(jdouble);
		static jfloat abs(jfloat);
		static jint abs(jint);
		static jlong abs(jlong);
		static jdouble acos(jdouble);
		static jdouble asin(jdouble);
		static jdouble atan(jdouble);
		static jdouble atan2(jdouble, jdouble);
		static jdouble cbrt(jdouble);
		static jdouble ceil(jdouble);
		static jdouble cos(jdouble);
		static jdouble cosh(jdouble);
		static jdouble exp(jdouble);
		static jdouble expm1(jdouble);
		static jdouble floor(jdouble);
		static jdouble hypot(jdouble, jdouble);
		static jdouble IEEEremainder(jdouble, jdouble);
		static jdouble log(jdouble);
		static jdouble log10(jdouble);
		static jdouble log1p(jdouble);
		static jdouble max(jdouble, jdouble);
		static jfloat max(jfloat, jfloat);
		static jint max(jint, jint);
		static jlong max(jlong, jlong);
		static jdouble min(jdouble, jdouble);
		static jfloat min(jfloat, jfloat);
		static jint min(jint, jint);
		static jlong min(jlong, jlong);
		static jdouble pow(jdouble, jdouble);
		static jdouble rint(jdouble);
		static jlong round(jdouble);
		static jint round(jfloat);
		static jdouble signum(jdouble);
		static jfloat signum(jfloat);
		static jdouble sin(jdouble);
		static jdouble sinh(jdouble);
		static jdouble sqrt(jdouble);
		static jdouble tan(jdouble);
		static jdouble tanh(jdouble);
		static jdouble random();
		static jdouble toRadians(jdouble);
		static jdouble toDegrees(jdouble);
		static jdouble ulp(jdouble);
		static jfloat ulp(jfloat);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jdouble > E;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jdouble > PI;
	}; //class Math

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_MATH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_MATH_HPP_IMPL
#define J2CPP_JAVA_LANG_MATH_HPP_IMPL

namespace j2cpp {



java::lang::Math::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jdouble java::lang::Math::abs(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(1),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(1), 
		jdouble >
	(a0);
}

jfloat java::lang::Math::abs(jfloat a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(2),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(2), 
		jfloat >
	(a0);
}

jint java::lang::Math::abs(jint a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(3),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(a0);
}

jlong java::lang::Math::abs(jlong a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(4),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(4), 
		jlong >
	(a0);
}

jdouble java::lang::Math::acos(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(5),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(5), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::asin(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(6),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(6), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::atan(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(7),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(7), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::atan2(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(8),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(8), 
		jdouble >
	(a0, a1);
}

jdouble java::lang::Math::cbrt(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(9),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(9), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::ceil(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(10),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(10), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::cos(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(11),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(11), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::cosh(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(12),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(12), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::exp(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(13),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(13), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::expm1(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(14),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(14), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::floor(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(15),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(15), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::hypot(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(16),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(16), 
		jdouble >
	(a0, a1);
}

jdouble java::lang::Math::IEEEremainder(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(17),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(17), 
		jdouble >
	(a0, a1);
}

jdouble java::lang::Math::log(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(18),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(18), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::log10(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(19),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(19), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::log1p(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(20),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(20), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::max(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(21),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(21), 
		jdouble >
	(a0, a1);
}

jfloat java::lang::Math::max(jfloat a0, jfloat a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(22),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(22), 
		jfloat >
	(a0, a1);
}

jint java::lang::Math::max(jint a0, jint a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(23),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(a0, a1);
}

jlong java::lang::Math::max(jlong a0, jlong a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(24),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(24), 
		jlong >
	(a0, a1);
}

jdouble java::lang::Math::min(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(25),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(25), 
		jdouble >
	(a0, a1);
}

jfloat java::lang::Math::min(jfloat a0, jfloat a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(26),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(26), 
		jfloat >
	(a0, a1);
}

jint java::lang::Math::min(jint a0, jint a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(27),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(27), 
		jint >
	(a0, a1);
}

jlong java::lang::Math::min(jlong a0, jlong a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(28),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(28), 
		jlong >
	(a0, a1);
}

jdouble java::lang::Math::pow(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(29),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(29), 
		jdouble >
	(a0, a1);
}

jdouble java::lang::Math::rint(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(30),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(30), 
		jdouble >
	(a0);
}

jlong java::lang::Math::round(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(31),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(31), 
		jlong >
	(a0);
}

jint java::lang::Math::round(jfloat a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(32),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(32), 
		jint >
	(a0);
}

jdouble java::lang::Math::signum(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(33),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(33), 
		jdouble >
	(a0);
}

jfloat java::lang::Math::signum(jfloat a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(34),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(34), 
		jfloat >
	(a0);
}

jdouble java::lang::Math::sin(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(35),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(35), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::sinh(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(36),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(36), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::sqrt(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(37),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(37), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::tan(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(38),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(38), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::tanh(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(39),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(39), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::random()
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(40),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(40), 
		jdouble >
	();
}

jdouble java::lang::Math::toRadians(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(41),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(41), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::toDegrees(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(42),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(42), 
		jdouble >
	(a0);
}

jdouble java::lang::Math::ulp(jdouble a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(43),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(43), 
		jdouble >
	(a0);
}

jfloat java::lang::Math::ulp(jfloat a0)
{
	return call_static_method<
		java::lang::Math::J2CPP_CLASS_NAME,
		java::lang::Math::J2CPP_METHOD_NAME(44),
		java::lang::Math::J2CPP_METHOD_SIGNATURE(44), 
		jfloat >
	(a0);
}


static_field<
	java::lang::Math::J2CPP_CLASS_NAME,
	java::lang::Math::J2CPP_FIELD_NAME(0),
	java::lang::Math::J2CPP_FIELD_SIGNATURE(0),
	jdouble
> java::lang::Math::E;

static_field<
	java::lang::Math::J2CPP_CLASS_NAME,
	java::lang::Math::J2CPP_FIELD_NAME(1),
	java::lang::Math::J2CPP_FIELD_SIGNATURE(1),
	jdouble
> java::lang::Math::PI;


J2CPP_DEFINE_CLASS(java::lang::Math,"java/lang/Math")
J2CPP_DEFINE_METHOD(java::lang::Math,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Math,1,"abs","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,2,"abs","(F)F")
J2CPP_DEFINE_METHOD(java::lang::Math,3,"abs","(I)I")
J2CPP_DEFINE_METHOD(java::lang::Math,4,"abs","(J)J")
J2CPP_DEFINE_METHOD(java::lang::Math,5,"acos","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,6,"asin","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,7,"atan","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,8,"atan2","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,9,"cbrt","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,10,"ceil","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,11,"cos","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,12,"cosh","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,13,"exp","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,14,"expm1","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,15,"floor","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,16,"hypot","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,17,"IEEEremainder","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,18,"log","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,19,"log10","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,20,"log1p","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,21,"max","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,22,"max","(FF)F")
J2CPP_DEFINE_METHOD(java::lang::Math,23,"max","(II)I")
J2CPP_DEFINE_METHOD(java::lang::Math,24,"max","(JJ)J")
J2CPP_DEFINE_METHOD(java::lang::Math,25,"min","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,26,"min","(FF)F")
J2CPP_DEFINE_METHOD(java::lang::Math,27,"min","(II)I")
J2CPP_DEFINE_METHOD(java::lang::Math,28,"min","(JJ)J")
J2CPP_DEFINE_METHOD(java::lang::Math,29,"pow","(DD)D")
J2CPP_DEFINE_METHOD(java::lang::Math,30,"rint","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,31,"round","(D)J")
J2CPP_DEFINE_METHOD(java::lang::Math,32,"round","(F)I")
J2CPP_DEFINE_METHOD(java::lang::Math,33,"signum","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,34,"signum","(F)F")
J2CPP_DEFINE_METHOD(java::lang::Math,35,"sin","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,36,"sinh","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,37,"sqrt","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,38,"tan","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,39,"tanh","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,40,"random","()D")
J2CPP_DEFINE_METHOD(java::lang::Math,41,"toRadians","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,42,"toDegrees","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,43,"ulp","(D)D")
J2CPP_DEFINE_METHOD(java::lang::Math,44,"ulp","(F)F")
J2CPP_DEFINE_FIELD(java::lang::Math,0,"E","D")
J2CPP_DEFINE_FIELD(java::lang::Math,1,"PI","D")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_MATH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
