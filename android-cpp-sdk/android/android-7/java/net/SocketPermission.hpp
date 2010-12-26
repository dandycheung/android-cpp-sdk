/*================================================================================
  code generated by: java2cpp
  class: java.net.SocketPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_DECL
#define J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>


namespace j2cpp {

namespace java { namespace net {

	class SocketPermission;
	class SocketPermission
		: public cpp_object<SocketPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		SocketPermission(jobject jobj)
		: cpp_object<SocketPermission>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > getActions();
		cpp_boolean implies(local_ref< java::security::Permission > const&);
		local_ref< java::security::PermissionCollection > newPermissionCollection();
	}; //class SocketPermission

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_IMPL
#define J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::SocketPermission > create< java::net::SocketPermission>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::net::SocketPermission >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::SocketPermission::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::SocketPermission::J2CPP_CLASS_NAME, java::net::SocketPermission::J2CPP_METHOD_NAME(0), java::net::SocketPermission::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::net::SocketPermission::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::net::SocketPermission::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::net::SocketPermission::getActions()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::net::SocketPermission::implies(local_ref< java::security::Permission > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::PermissionCollection > java::net::SocketPermission::newPermissionCollection()
{
	return local_ref< java::security::PermissionCollection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::SocketPermission,"java/net/SocketPermission")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,3,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,4,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::net::SocketPermission,5,"newPermissionCollection","()Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
