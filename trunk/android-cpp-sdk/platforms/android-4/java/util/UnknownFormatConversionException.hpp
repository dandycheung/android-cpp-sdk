/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.UnknownFormatConversionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class UnknownFormatConversionException;
	class UnknownFormatConversionException
		: public object<UnknownFormatConversionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit UnknownFormatConversionException(jobject jobj)
		: object<UnknownFormatConversionException>(jobj)
		{
		}

		operator local_ref<java::util::IllegalFormatException>() const;


		UnknownFormatConversionException(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getConversion();
		local_ref< java::lang::String > getMessage();
	}; //class UnknownFormatConversionException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::UnknownFormatConversionException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jobject());
}


java::util::UnknownFormatConversionException::UnknownFormatConversionException(local_ref< java::lang::String > const &a0)
: object<java::util::UnknownFormatConversionException>(
	call_new_object<
		java::util::UnknownFormatConversionException::J2CPP_CLASS_NAME,
		java::util::UnknownFormatConversionException::J2CPP_METHOD_NAME(0),
		java::util::UnknownFormatConversionException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< java::lang::String > java::util::UnknownFormatConversionException::getConversion()
{
	return call_method<
		java::util::UnknownFormatConversionException::J2CPP_CLASS_NAME,
		java::util::UnknownFormatConversionException::J2CPP_METHOD_NAME(1),
		java::util::UnknownFormatConversionException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::UnknownFormatConversionException::getMessage()
{
	return call_method<
		java::util::UnknownFormatConversionException::J2CPP_CLASS_NAME,
		java::util::UnknownFormatConversionException::J2CPP_METHOD_NAME(2),
		java::util::UnknownFormatConversionException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::UnknownFormatConversionException,"java/util/UnknownFormatConversionException")
J2CPP_DEFINE_METHOD(java::util::UnknownFormatConversionException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::UnknownFormatConversionException,1,"getConversion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::UnknownFormatConversionException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_UNKNOWNFORMATCONVERSIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
