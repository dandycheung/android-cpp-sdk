/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.IllegalThreadStateException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class IllegalThreadStateException;
	class IllegalThreadStateException
		: public object<IllegalThreadStateException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit IllegalThreadStateException(jobject jobj)
		: object<IllegalThreadStateException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalArgumentException>() const;


		IllegalThreadStateException();
		IllegalThreadStateException(local_ref< java::lang::String > const&);
	}; //class IllegalThreadStateException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::IllegalThreadStateException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}


java::lang::IllegalThreadStateException::IllegalThreadStateException()
: object<java::lang::IllegalThreadStateException>(
	call_new_object<
		java::lang::IllegalThreadStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalThreadStateException::J2CPP_METHOD_NAME(0),
		java::lang::IllegalThreadStateException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::IllegalThreadStateException::IllegalThreadStateException(local_ref< java::lang::String > const &a0)
: object<java::lang::IllegalThreadStateException>(
	call_new_object<
		java::lang::IllegalThreadStateException::J2CPP_CLASS_NAME,
		java::lang::IllegalThreadStateException::J2CPP_METHOD_NAME(1),
		java::lang::IllegalThreadStateException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::IllegalThreadStateException,"java/lang/IllegalThreadStateException")
J2CPP_DEFINE_METHOD(java::lang::IllegalThreadStateException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::IllegalThreadStateException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
