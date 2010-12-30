/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.system.TouchDex
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class TouchDex;
	class TouchDex
		: public object<TouchDex>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit TouchDex(jobject jobj)
		: object<TouchDex>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TouchDex();
		static jint start(local_ref< java::lang::String >  const&);
		static void main(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
	}; //class TouchDex

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_IMPL

namespace j2cpp {



dalvik::system::TouchDex::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


dalvik::system::TouchDex::TouchDex()
: object<dalvik::system::TouchDex>(
	call_new_object<
		dalvik::system::TouchDex::J2CPP_CLASS_NAME,
		dalvik::system::TouchDex::J2CPP_METHOD_NAME(0),
		dalvik::system::TouchDex::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jint dalvik::system::TouchDex::start(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		dalvik::system::TouchDex::J2CPP_CLASS_NAME,
		dalvik::system::TouchDex::J2CPP_METHOD_NAME(1),
		dalvik::system::TouchDex::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(a0);
}

void dalvik::system::TouchDex::main(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_static_method<
		dalvik::system::TouchDex::J2CPP_CLASS_NAME,
		dalvik::system::TouchDex::J2CPP_METHOD_NAME(2),
		dalvik::system::TouchDex::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(a0);
}


J2CPP_DEFINE_CLASS(dalvik::system::TouchDex,"dalvik/system/TouchDex")
J2CPP_DEFINE_METHOD(dalvik::system::TouchDex,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::TouchDex,1,"start","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(dalvik::system::TouchDex,2,"main","([java.lang.String)V")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TOUCHDEX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
