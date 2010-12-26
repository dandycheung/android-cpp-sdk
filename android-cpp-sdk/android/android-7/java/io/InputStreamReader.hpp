/*================================================================================
  code generated by: java2cpp
  class: java.io.InputStreamReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_DECL
#define J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetDecoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class Charset; } } } }


#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetDecoder.hpp>


namespace j2cpp {

namespace java { namespace io {

	class InputStreamReader;
	class InputStreamReader
		: public cpp_object<InputStreamReader>
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

		InputStreamReader(jobject jobj)
		: cpp_object<InputStreamReader>(jobj)
		{
		}

		void close();
		local_ref< java::lang::String > getEncoding();
		cpp_int read();
		cpp_int read(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean ready();
	}; //class InputStreamReader

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_IMPL
#define J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::InputStreamReader > create< java::io::InputStreamReader>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::io::InputStreamReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::InputStreamReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::InputStreamReader::J2CPP_CLASS_NAME, java::io::InputStreamReader::J2CPP_METHOD_NAME(0), java::io::InputStreamReader::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::InputStreamReader > create< java::io::InputStreamReader>(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::InputStreamReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::InputStreamReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::InputStreamReader::J2CPP_CLASS_NAME, java::io::InputStreamReader::J2CPP_METHOD_NAME(1), java::io::InputStreamReader::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::InputStreamReader > create< java::io::InputStreamReader>(local_ref< java::io::InputStream > const &a0, local_ref< java::nio::charset::CharsetDecoder > const &a1)
{
	return local_ref< java::io::InputStreamReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::InputStreamReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::InputStreamReader::J2CPP_CLASS_NAME, java::io::InputStreamReader::J2CPP_METHOD_NAME(2), java::io::InputStreamReader::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::InputStreamReader > create< java::io::InputStreamReader>(local_ref< java::io::InputStream > const &a0, local_ref< java::nio::charset::Charset > const &a1)
{
	return local_ref< java::io::InputStreamReader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::InputStreamReader::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::InputStreamReader::J2CPP_CLASS_NAME, java::io::InputStreamReader::J2CPP_METHOD_NAME(3), java::io::InputStreamReader::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::io::InputStreamReader::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::io::InputStreamReader::getEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::io::InputStreamReader::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::io::InputStreamReader::read(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::InputStreamReader::ready()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::InputStreamReader,"java/io/InputStreamReader")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,1,"<init>","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,2,"<init>","(Ljava/io/InputStream;Ljava/nio/charset/CharsetDecoder;)V")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,3,"<init>","(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,5,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,6,"read","()I")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,7,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::InputStreamReader,8,"ready","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INPUTSTREAMREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
