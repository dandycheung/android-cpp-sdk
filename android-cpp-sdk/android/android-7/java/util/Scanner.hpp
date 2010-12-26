/*================================================================================
  code generated by: java2cpp
  class: java.util.Scanner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SCANNER_HPP_DECL
#define J2CPP_JAVA_UTIL_SCANNER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Readable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class MatchResult; } } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Pattern; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }


#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Readable.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/BigInteger.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/MatchResult.hpp>
#include <java/util/regex/Pattern.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Scanner;
	class Scanner
		: public cpp_object<Scanner>
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
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_METHOD(59)
		J2CPP_DECLARE_METHOD(60)
		J2CPP_DECLARE_METHOD(61)
		J2CPP_DECLARE_METHOD(62)

		Scanner(jobject jobj)
		: cpp_object<Scanner>(jobj)
		{
		}

		void close();
		local_ref< java::util::regex::Pattern > delimiter();
		local_ref< java::lang::String > findInLine(local_ref< java::util::regex::Pattern > const&);
		local_ref< java::lang::String > findInLine(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > findWithinHorizon(local_ref< java::util::regex::Pattern > const&, cpp_int const&);
		local_ref< java::lang::String > findWithinHorizon(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_boolean hasNext();
		cpp_boolean hasNext(local_ref< java::util::regex::Pattern > const&);
		cpp_boolean hasNext(local_ref< java::lang::String > const&);
		cpp_boolean hasNextBigDecimal();
		cpp_boolean hasNextBigInteger();
		cpp_boolean hasNextBigInteger(cpp_int const&);
		cpp_boolean hasNextBoolean();
		cpp_boolean hasNextByte();
		cpp_boolean hasNextByte(cpp_int const&);
		cpp_boolean hasNextDouble();
		cpp_boolean hasNextFloat();
		cpp_boolean hasNextInt();
		cpp_boolean hasNextInt(cpp_int const&);
		cpp_boolean hasNextLine();
		cpp_boolean hasNextLong();
		cpp_boolean hasNextLong(cpp_int const&);
		cpp_boolean hasNextShort();
		cpp_boolean hasNextShort(cpp_int const&);
		local_ref< java::io::IOException > ioException();
		local_ref< java::util::Locale > locale();
		local_ref< java::util::regex::MatchResult > match();
		local_ref< java::lang::String > next();
		local_ref< java::lang::String > next(local_ref< java::util::regex::Pattern > const&);
		local_ref< java::lang::String > next(local_ref< java::lang::String > const&);
		local_ref< java::math::BigDecimal > nextBigDecimal();
		local_ref< java::math::BigInteger > nextBigInteger();
		local_ref< java::math::BigInteger > nextBigInteger(cpp_int const&);
		cpp_boolean nextBoolean();
		cpp_byte nextByte();
		cpp_byte nextByte(cpp_int const&);
		cpp_double nextDouble();
		cpp_float nextFloat();
		cpp_int nextInt();
		cpp_int nextInt(cpp_int const&);
		local_ref< java::lang::String > nextLine();
		cpp_long nextLong();
		cpp_long nextLong(cpp_int const&);
		cpp_short nextShort();
		cpp_short nextShort(cpp_int const&);
		cpp_int radix();
		local_ref< java::util::Scanner > skip(local_ref< java::util::regex::Pattern > const&);
		local_ref< java::util::Scanner > skip(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
		local_ref< java::util::Scanner > useDelimiter(local_ref< java::util::regex::Pattern > const&);
		local_ref< java::util::Scanner > useDelimiter(local_ref< java::lang::String > const&);
		local_ref< java::util::Scanner > useLocale(local_ref< java::util::Locale > const&);
		local_ref< java::util::Scanner > useRadix(cpp_int const&);
		void remove();
		local_ref< java::lang::Object > next_1();
	}; //class Scanner

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SCANNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL
#define J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::io::File > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(0), java::util::Scanner::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(1), java::util::Scanner::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(2), java::util::Scanner::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(3), java::util::Scanner::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(4), java::util::Scanner::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::lang::Readable > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(5), java::util::Scanner::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::nio::channels::ReadableByteChannel > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(6), java::util::Scanner::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::Scanner > create< java::util::Scanner>(local_ref< java::nio::channels::ReadableByteChannel > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::Scanner::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::Scanner::J2CPP_CLASS_NAME, java::util::Scanner::J2CPP_METHOD_NAME(7), java::util::Scanner::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::Scanner::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::util::regex::Pattern > java::util::Scanner::delimiter()
{
	return local_ref< java::util::regex::Pattern >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::findInLine(local_ref< java::util::regex::Pattern > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::findInLine(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::findWithinHorizon(local_ref< java::util::regex::Pattern > const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::findWithinHorizon(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNext(local_ref< java::util::regex::Pattern > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNext(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextBigDecimal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextBigInteger()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextBigInteger(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextBoolean()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextByte()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextByte(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextDouble()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextFloat()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextInt()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextInt(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextLine()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextLong()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextLong(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextShort()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_boolean java::util::Scanner::hasNextShort(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::IOException > java::util::Scanner::ioException()
{
	return local_ref< java::io::IOException >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

local_ref< java::util::Locale > java::util::Scanner::locale()
{
	return local_ref< java::util::Locale >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

local_ref< java::util::regex::MatchResult > java::util::Scanner::match()
{
	return local_ref< java::util::regex::MatchResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::next()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::next(local_ref< java::util::regex::Pattern > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::next(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::math::BigDecimal > java::util::Scanner::nextBigDecimal()
{
	return local_ref< java::math::BigDecimal >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::util::Scanner::nextBigInteger()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::util::Scanner::nextBigInteger(cpp_int const &a0)
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Scanner::nextBoolean()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

cpp_byte java::util::Scanner::nextByte()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

cpp_byte java::util::Scanner::nextByte(cpp_int const &a0)
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double java::util::Scanner::nextDouble()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>()
		)
	);
}

cpp_float java::util::Scanner::nextFloat()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}

cpp_int java::util::Scanner::nextInt()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>()
		)
	);
}

cpp_int java::util::Scanner::nextInt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::nextLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}

cpp_long java::util::Scanner::nextLong()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>()
		)
	);
}

cpp_long java::util::Scanner::nextLong(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short java::util::Scanner::nextShort()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>()
		)
	);
}

cpp_short java::util::Scanner::nextShort(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Scanner::radix()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::skip(local_ref< java::util::regex::Pattern > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::skip(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(55), J2CPP_METHOD_SIGNATURE(55), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Scanner::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(56), J2CPP_METHOD_SIGNATURE(56), false>()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::useDelimiter(local_ref< java::util::regex::Pattern > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(57), J2CPP_METHOD_SIGNATURE(57), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::useDelimiter(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(58), J2CPP_METHOD_SIGNATURE(58), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::useLocale(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(59), J2CPP_METHOD_SIGNATURE(59), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Scanner > java::util::Scanner::useRadix(cpp_int const &a0)
{
	return local_ref< java::util::Scanner >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(60), J2CPP_METHOD_SIGNATURE(60), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Scanner::remove()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(61), J2CPP_METHOD_SIGNATURE(61), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::Scanner::next_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(62), J2CPP_METHOD_SIGNATURE(62), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::Scanner,"java/util/Scanner")
J2CPP_DEFINE_METHOD(java::util::Scanner,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,1,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,3,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,4,"<init>","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,5,"<init>","(Ljava/lang/Readable;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,6,"<init>","(Ljava/nio/channels/ReadableByteChannel;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,7,"<init>","(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,8,"close","()V")
J2CPP_DEFINE_METHOD(java::util::Scanner,9,"delimiter","()Ljava/util/regex/Pattern;")
J2CPP_DEFINE_METHOD(java::util::Scanner,10,"findInLine","(Ljava/util/regex/Pattern;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,11,"findInLine","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,12,"findWithinHorizon","(Ljava/util/regex/Pattern;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,13,"findWithinHorizon","(Ljava/lang/String;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,14,"hasNext","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,15,"hasNext","(Ljava/util/regex/Pattern;)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,16,"hasNext","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,17,"hasNextBigDecimal","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,18,"hasNextBigInteger","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,19,"hasNextBigInteger","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,20,"hasNextBoolean","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,21,"hasNextByte","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,22,"hasNextByte","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,23,"hasNextDouble","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,24,"hasNextFloat","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,25,"hasNextInt","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,26,"hasNextInt","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,27,"hasNextLine","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,28,"hasNextLong","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,29,"hasNextLong","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,30,"hasNextShort","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,31,"hasNextShort","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,32,"ioException","()Ljava/io/IOException;")
J2CPP_DEFINE_METHOD(java::util::Scanner,33,"locale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::util::Scanner,34,"match","()Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(java::util::Scanner,35,"next","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,36,"next","(Ljava/util/regex/Pattern;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,37,"next","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,38,"nextBigDecimal","()Ljava/math/BigDecimal;")
J2CPP_DEFINE_METHOD(java::util::Scanner,39,"nextBigInteger","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::util::Scanner,40,"nextBigInteger","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::util::Scanner,41,"nextBoolean","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,42,"nextByte","()B")
J2CPP_DEFINE_METHOD(java::util::Scanner,43,"nextByte","(I)B")
J2CPP_DEFINE_METHOD(java::util::Scanner,44,"nextDouble","()D")
J2CPP_DEFINE_METHOD(java::util::Scanner,45,"nextFloat","()F")
J2CPP_DEFINE_METHOD(java::util::Scanner,46,"nextInt","()I")
J2CPP_DEFINE_METHOD(java::util::Scanner,47,"nextInt","(I)I")
J2CPP_DEFINE_METHOD(java::util::Scanner,48,"nextLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,49,"nextLong","()J")
J2CPP_DEFINE_METHOD(java::util::Scanner,50,"nextLong","(I)J")
J2CPP_DEFINE_METHOD(java::util::Scanner,51,"nextShort","()S")
J2CPP_DEFINE_METHOD(java::util::Scanner,52,"nextShort","(I)S")
J2CPP_DEFINE_METHOD(java::util::Scanner,53,"radix","()I")
J2CPP_DEFINE_METHOD(java::util::Scanner,54,"skip","(Ljava/util/regex/Pattern;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,55,"skip","(Ljava/lang/String;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,56,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,57,"useDelimiter","(Ljava/util/regex/Pattern;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,58,"useDelimiter","(Ljava/lang/String;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,59,"useLocale","(Ljava/util/Locale;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,60,"useRadix","(I)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,61,"remove","()V")
J2CPP_DEFINE_METHOD(java::util::Scanner,62,"next","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
