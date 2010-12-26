/*================================================================================
  code generated by: java2cpp
  class: java.io.StringBufferInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class StringBufferInputStream;
	class StringBufferInputStream
		: public cpp_object<StringBufferInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		StringBufferInputStream(jobject jobj)
		: cpp_object<StringBufferInputStream>(jobj)
		{
		}

		cpp_int available();
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void reset();
		cpp_long skip(cpp_long const&);

	}; //class StringBufferInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::StringBufferInputStream > create< java::io::StringBufferInputStream>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::StringBufferInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::StringBufferInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::StringBufferInputStream::J2CPP_CLASS_NAME, java::io::StringBufferInputStream::J2CPP_METHOD_NAME(0), java::io::StringBufferInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::StringBufferInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::io::StringBufferInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::io::StringBufferInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::StringBufferInputStream::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long java::io::StringBufferInputStream::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::StringBufferInputStream,"java/io/StringBufferInputStream")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,1,"available","()I")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,2,"read","()I")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,3,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,4,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::StringBufferInputStream,5,"skip","(J)J")
J2CPP_DEFINE_FIELD(java::io::StringBufferInputStream,0,"buffer","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::io::StringBufferInputStream,1,"count","I")
J2CPP_DEFINE_FIELD(java::io::StringBufferInputStream,2,"pos","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGBUFFERINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
