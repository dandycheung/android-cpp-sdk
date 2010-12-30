/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.LoggingPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace security { class BasicPermission; } } }
namespace j2cpp { namespace java { namespace security { class Guard; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>
#include <java/security/BasicPermission.hpp>
#include <java/security/Guard.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class LoggingPermission;
	class LoggingPermission
		: public object<LoggingPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LoggingPermission(jobject jobj)
		: object<LoggingPermission>(jobj)
		{
		}

		operator local_ref<java::security::BasicPermission>() const;
		operator local_ref<java::security::Guard>() const;
		operator local_ref<java::io::Serializable>() const;


		LoggingPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class LoggingPermission

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_IMPL

namespace j2cpp {



java::util::logging::LoggingPermission::operator local_ref<java::security::BasicPermission>() const
{
	return local_ref<java::security::BasicPermission>(get_jobject());
}

java::util::logging::LoggingPermission::operator local_ref<java::security::Guard>() const
{
	return local_ref<java::security::Guard>(get_jobject());
}

java::util::logging::LoggingPermission::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::logging::LoggingPermission::LoggingPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::logging::LoggingPermission>(
	call_new_object<
		java::util::logging::LoggingPermission::J2CPP_CLASS_NAME,
		java::util::logging::LoggingPermission::J2CPP_METHOD_NAME(0),
		java::util::logging::LoggingPermission::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(java::util::logging::LoggingPermission,"java/util/logging/LoggingPermission")
J2CPP_DEFINE_METHOD(java::util::logging::LoggingPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
