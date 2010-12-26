/*================================================================================
  code generated by: java2cpp
  class: java.nio.charset.Charset
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace nio { class CharBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetEncoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetDecoder; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/CharBuffer.hpp>
#include <java/nio/charset/CharsetDecoder.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset {

	class Charset;
	class Charset
		: public cpp_object<Charset>
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

		Charset(jobject jobj)
		: cpp_object<Charset>(jobj)
		{
		}

		static local_ref< java::util::SortedMap > availableCharsets();
		static local_ref< java::nio::charset::Charset > forName(local_ref< java::lang::String > const&);
		static cpp_boolean isSupported(local_ref< java::lang::String > const&);
		cpp_boolean contains(local_ref< java::nio::charset::Charset > const&);
		local_ref< java::nio::charset::CharsetEncoder > newEncoder();
		local_ref< java::nio::charset::CharsetDecoder > newDecoder();
		local_ref< java::lang::String > name();
		local_ref< java::util::Set > aliases();
		local_ref< java::lang::String > displayName();
		local_ref< java::lang::String > displayName(local_ref< java::util::Locale > const&);
		cpp_boolean isRegistered();
		cpp_boolean canEncode();
		local_ref< java::nio::ByteBuffer > encode(local_ref< java::nio::CharBuffer > const&);
		local_ref< java::nio::ByteBuffer > encode(local_ref< java::lang::String > const&);
		local_ref< java::nio::CharBuffer > decode(local_ref< java::nio::ByteBuffer > const&);
		cpp_int compareTo(local_ref< java::nio::charset::Charset > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
		static local_ref< java::nio::charset::Charset > defaultCharset();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class Charset

} //namespace charset
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::charset::Charset > create< java::nio::charset::Charset>(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return local_ref< java::nio::charset::Charset >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::charset::Charset::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::charset::Charset::J2CPP_CLASS_NAME, java::nio::charset::Charset::J2CPP_METHOD_NAME(0), java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::nio::charset::Charset::availableCharsets()
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::nio::charset::Charset > java::nio::charset::Charset::forName(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::nio::charset::Charset >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::charset::Charset::isSupported(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::charset::Charset::contains(local_ref< java::nio::charset::Charset > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::charset::CharsetEncoder > java::nio::charset::Charset::newEncoder()
{
	return local_ref< java::nio::charset::CharsetEncoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::Charset::newDecoder()
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::Charset::name()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::util::Set > java::nio::charset::Charset::aliases()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::Charset::displayName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::Charset::displayName(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::charset::Charset::isRegistered()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean java::nio::charset::Charset::canEncode()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::nio::ByteBuffer > java::nio::charset::Charset::encode(local_ref< java::nio::CharBuffer > const &a0)
{
	return local_ref< java::nio::ByteBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ByteBuffer > java::nio::charset::Charset::encode(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::nio::ByteBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::charset::Charset::decode(local_ref< java::nio::ByteBuffer > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::nio::charset::Charset::compareTo(local_ref< java::nio::charset::Charset > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::charset::Charset::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::nio::charset::Charset::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::Charset::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::nio::charset::Charset > java::nio::charset::Charset::defaultCharset()
{
	return local_ref< java::nio::charset::Charset >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>()
		)
	);
}

cpp_int java::nio::charset::Charset::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::charset::Charset,"java/nio/charset/Charset")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,0,"<init>","(Ljava/lang/String;[java.lang.String)V")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,1,"availableCharsets","()Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,2,"forName","(Ljava/lang/String;)Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,3,"isSupported","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,4,"contains","(Ljava/nio/charset/Charset;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,5,"newEncoder","()Ljava/nio/charset/CharsetEncoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,6,"newDecoder","()Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,7,"name","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,8,"aliases","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,9,"displayName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,10,"displayName","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,11,"isRegistered","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,12,"canEncode","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,13,"encode","(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,14,"encode","(Ljava/lang/String;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,15,"decode","(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,16,"compareTo","(Ljava/nio/charset/Charset;)I")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,17,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,18,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,19,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,20,"defaultCharset","()Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,21,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
