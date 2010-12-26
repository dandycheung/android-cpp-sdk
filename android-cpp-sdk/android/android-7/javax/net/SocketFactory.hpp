/*================================================================================
  code generated by: java2cpp
  class: javax.net.SocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>


namespace j2cpp {

namespace javax { namespace net {

	class SocketFactory;
	class SocketFactory
		: public cpp_object<SocketFactory>
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

		SocketFactory(jobject jobj)
		: cpp_object<SocketFactory>(jobj)
		{
		}

		static local_ref< javax::net::SocketFactory > getDefault();
		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > createSocket(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< java::net::Socket > createSocket(local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::net::InetAddress > const&, cpp_int const&);
		local_ref< java::net::Socket > createSocket(local_ref< java::net::InetAddress > const&, cpp_int const&);
		local_ref< java::net::Socket > createSocket(local_ref< java::net::InetAddress > const&, cpp_int const&, local_ref< java::net::InetAddress > const&, cpp_int const&);
	}; //class SocketFactory

} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::net::SocketFactory > create< javax::net::SocketFactory>()
{
	return local_ref< javax::net::SocketFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::SocketFactory::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::SocketFactory::J2CPP_CLASS_NAME, javax::net::SocketFactory::J2CPP_METHOD_NAME(0), javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< javax::net::SocketFactory > javax::net::SocketFactory::getDefault()
{
	return local_ref< javax::net::SocketFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket()
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< java::net::InetAddress > const &a2, cpp_int const &a3)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::net::InetAddress > const &a0, cpp_int const &a1)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::net::InetAddress > const &a0, cpp_int const &a1, local_ref< java::net::InetAddress > const &a2, cpp_int const &a3)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::SocketFactory,"javax/net/SocketFactory")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,1,"getDefault","()Ljavax/net/SocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,2,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,3,"createSocket","(Ljava/lang/String;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,4,"createSocket","(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,5,"createSocket","(Ljava/net/InetAddress;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,6,"createSocket","(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
