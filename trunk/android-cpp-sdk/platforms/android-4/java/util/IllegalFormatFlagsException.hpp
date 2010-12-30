/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.IllegalFormatFlagsException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class IllegalFormatFlagsException;
	class IllegalFormatFlagsException
		: public object<IllegalFormatFlagsException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit IllegalFormatFlagsException(jobject jobj)
		: object<IllegalFormatFlagsException>(jobj)
		{
		}

		operator local_ref<java::util::IllegalFormatException>() const;
		operator local_ref<java::io::Serializable>() const;


		IllegalFormatFlagsException(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getFlags();
		local_ref< java::lang::String > getMessage();
	}; //class IllegalFormatFlagsException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::IllegalFormatFlagsException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jobject());
}

java::util::IllegalFormatFlagsException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::IllegalFormatFlagsException::IllegalFormatFlagsException(local_ref< java::lang::String > const &a0)
: object<java::util::IllegalFormatFlagsException>(
	call_new_object<
		java::util::IllegalFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_NAME(0),
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< java::lang::String > java::util::IllegalFormatFlagsException::getFlags()
{
	return call_method<
		java::util::IllegalFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_NAME(1),
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::IllegalFormatFlagsException::getMessage()
{
	return call_method<
		java::util::IllegalFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_NAME(2),
		java::util::IllegalFormatFlagsException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::IllegalFormatFlagsException,"java/util/IllegalFormatFlagsException")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatFlagsException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatFlagsException,1,"getFlags","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatFlagsException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATFLAGSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
