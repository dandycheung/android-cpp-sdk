/*================================================================================
  code generated by: java2cpp
  class: java.io.PrintWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL
#define J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/io/File.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PrintWriter;
	class PrintWriter
		: public cpp_object<PrintWriter>
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
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_FIELD(0)

		PrintWriter(jobject jobj)
		: cpp_object<PrintWriter>(jobj)
		{
		}

		cpp_boolean checkError();
		void close();
		void flush();
		local_ref< java::io::PrintWriter > format(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::io::PrintWriter > format(local_ref< java::util::Locale > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::io::PrintWriter > printf(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::io::PrintWriter > printf(local_ref< java::util::Locale > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		void print(local_ref< cpp_char_array<1> > const&);
		void print(cpp_char const&);
		void print(cpp_double const&);
		void print(cpp_float const&);
		void print(cpp_int const&);
		void print(cpp_long const&);
		void print(local_ref< java::lang::Object > const&);
		void print(local_ref< java::lang::String > const&);
		void print(cpp_boolean const&);
		void println();
		void println(local_ref< cpp_char_array<1> > const&);
		void println(cpp_char const&);
		void println(cpp_double const&);
		void println(cpp_float const&);
		void println(cpp_int const&);
		void println(cpp_long const&);
		void println(local_ref< java::lang::Object > const&);
		void println(local_ref< java::lang::String > const&);
		void println(cpp_boolean const&);
		void write(local_ref< cpp_char_array<1> > const&);
		void write(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(cpp_int const&);
		void write(local_ref< java::lang::String > const&);
		void write(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		local_ref< java::io::PrintWriter > append(cpp_char const&);
		local_ref< java::io::PrintWriter > append(local_ref< java::lang::CharSequence > const&);
		local_ref< java::io::PrintWriter > append(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence > const&);
		local_ref< java::io::Writer > append_1(cpp_char const&);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::Appendable > append_2(cpp_char const&);

	}; //class PrintWriter

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::OutputStream > const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(0), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::OutputStream > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(1), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::Writer > const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(2), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::Writer > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(3), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::File > const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(4), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(5), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(6), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::io::PrintWriter > create< java::io::PrintWriter>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PrintWriter::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PrintWriter::J2CPP_CLASS_NAME, java::io::PrintWriter::J2CPP_METHOD_NAME(7), java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::io::PrintWriter::checkError()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::io::PrintWriter::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::io::PrintWriter::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::format(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::format(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::printf(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::printf(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(local_ref< cpp_char_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_char const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_double const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::print(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

void java::io::PrintWriter::println(local_ref< cpp_char_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_char const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_double const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::println(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}


void java::io::PrintWriter::write(local_ref< cpp_char_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::write(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::PrintWriter::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::write(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::PrintWriter::write(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(cpp_char const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::io::PrintWriter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::io::Writer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::io::Writer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(cpp_char const &a0)
{
	return local_ref< java::io::Writer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(cpp_char const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::PrintWriter,"java/io/PrintWriter")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,1,"<init>","(Ljava/io/OutputStream;Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,2,"<init>","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,3,"<init>","(Ljava/io/Writer;Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,4,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,5,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,6,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,7,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,8,"checkError","()Z")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,9,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,10,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,11,"format","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,12,"format","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,13,"printf","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,14,"printf","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,15,"print","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,16,"print","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,17,"print","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,18,"print","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,19,"print","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,20,"print","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,21,"print","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,22,"print","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,23,"print","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,24,"println","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,25,"println","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,26,"println","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,27,"println","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,28,"println","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,29,"println","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,30,"println","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,31,"println","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,32,"println","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,33,"println","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,34,"setError","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,35,"write","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,36,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,37,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,38,"write","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,39,"write","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,40,"append","(C)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,41,"append","(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,42,"append","(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,43,"append","(Ljava/lang/CharSequence;II)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,44,"append","(Ljava/lang/CharSequence;)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,45,"append","(C)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,46,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,47,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,48,"append","(C)Ljava/lang/Appendable;")
J2CPP_DEFINE_FIELD(java::io::PrintWriter,0,"out","Ljava/io/Writer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
