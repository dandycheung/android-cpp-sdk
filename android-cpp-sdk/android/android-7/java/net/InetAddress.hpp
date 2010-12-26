/*================================================================================
  code generated by: java2cpp
  class: java.net.InetAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INETADDRESS_HPP_DECL
#define J2CPP_JAVA_NET_INETADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace net { class NetworkInterface; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/NetworkInterface.hpp>


namespace j2cpp {

namespace java { namespace net {

	class InetAddress;
	class InetAddress
		: public cpp_object<InetAddress>
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

		InetAddress(jobject jobj)
		: cpp_object<InetAddress>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< cpp_byte_array<1> > getAddress();
		static local_ref< cpp_object_array<java::net::InetAddress, 1> > getAllByName(local_ref< java::lang::String > const&);
		static local_ref< java::net::InetAddress > getByName(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getHostAddress();
		local_ref< java::lang::String > getHostName();
		local_ref< java::lang::String > getCanonicalHostName();
		static local_ref< java::net::InetAddress > getLocalHost();
		cpp_int hashCode();
		cpp_boolean isMulticastAddress();
		local_ref< java::lang::String > toString();
		cpp_boolean isLoopbackAddress();
		cpp_boolean isLinkLocalAddress();
		cpp_boolean isSiteLocalAddress();
		cpp_boolean isMCGlobal();
		cpp_boolean isMCNodeLocal();
		cpp_boolean isMCLinkLocal();
		cpp_boolean isMCSiteLocal();
		cpp_boolean isMCOrgLocal();
		cpp_boolean isAnyLocalAddress();
		cpp_boolean isReachable(cpp_int const&);
		cpp_boolean isReachable(local_ref< java::net::NetworkInterface > const&, cpp_int const&, cpp_int const&);
		static local_ref< java::net::InetAddress > getByAddress(local_ref< cpp_byte_array<1> > const&);
		static local_ref< java::net::InetAddress > getByAddress(local_ref< java::lang::String > const&, local_ref< cpp_byte_array<1> > const&);
	}; //class InetAddress

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INETADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INETADDRESS_HPP_IMPL
#define J2CPP_JAVA_NET_INETADDRESS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::InetAddress > create< java::net::InetAddress>()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::InetAddress::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::InetAddress::J2CPP_CLASS_NAME, java::net::InetAddress::J2CPP_METHOD_NAME(0), java::net::InetAddress::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > java::net::InetAddress::getAddress()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< cpp_object_array<java::net::InetAddress, 1> > java::net::InetAddress::getAllByName(local_ref< java::lang::String > const &a0)
{
	return local_ref< cpp_object_array<java::net::InetAddress, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::InetAddress > java::net::InetAddress::getByName(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::net::InetAddress::getHostAddress()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::net::InetAddress::getHostName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::net::InetAddress::getCanonicalHostName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::net::InetAddress > java::net::InetAddress::getLocalHost()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

cpp_int java::net::InetAddress::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMulticastAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::String > java::net::InetAddress::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isLoopbackAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isLinkLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isSiteLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMCGlobal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMCNodeLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMCLinkLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMCSiteLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isMCOrgLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isAnyLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean java::net::InetAddress::isReachable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::net::InetAddress::isReachable(local_ref< java::net::NetworkInterface > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::net::InetAddress > java::net::InetAddress::getByAddress(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::InetAddress > java::net::InetAddress::getByAddress(local_ref< java::lang::String > const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::InetAddress,"java/net/InetAddress")
J2CPP_DEFINE_METHOD(java::net::InetAddress,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::InetAddress,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,2,"getAddress","()[B")
J2CPP_DEFINE_METHOD(java::net::InetAddress,3,"getAllByName","(Ljava/lang/String;)[java.net.InetAddress")
J2CPP_DEFINE_METHOD(java::net::InetAddress,4,"getByName","(Ljava/lang/String;)Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,5,"getHostAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,6,"getHostName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,7,"getCanonicalHostName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,8,"getLocalHost","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,9,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::InetAddress,10,"isMulticastAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,11,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,12,"isLoopbackAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,13,"isLinkLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,14,"isSiteLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,15,"isMCGlobal","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,16,"isMCNodeLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,17,"isMCLinkLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,18,"isMCSiteLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,19,"isMCOrgLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,20,"isAnyLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,21,"isReachable","(I)Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,22,"isReachable","(Ljava/net/NetworkInterface;II)Z")
J2CPP_DEFINE_METHOD(java::net::InetAddress,23,"getByAddress","([B)Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::InetAddress,24,"getByAddress","(Ljava/lang/String;[B)Ljava/net/InetAddress;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INETADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
