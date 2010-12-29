/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.BasicEofSensorWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class EofSensorWatcher; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/conn/EofSensorWatcher.hpp>
#include <org/apache/http/conn/ManagedClientConnection.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class BasicEofSensorWatcher;
	class BasicEofSensorWatcher
		: public cpp_object<BasicEofSensorWatcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit BasicEofSensorWatcher(jobject jobj)
		: cpp_object<BasicEofSensorWatcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::EofSensorWatcher>() const;


		BasicEofSensorWatcher(local_ref< org::apache::http::conn::ManagedClientConnection > const&, cpp_boolean const&);
		cpp_boolean eofDetected(local_ref< java::io::InputStream > const&);
		cpp_boolean streamClosed(local_ref< java::io::InputStream > const&);
		cpp_boolean streamAbort(local_ref< java::io::InputStream > const&);

	}; //class BasicEofSensorWatcher

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::BasicEofSensorWatcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::conn::BasicEofSensorWatcher::operator local_ref<org::apache::http::conn::EofSensorWatcher>() const
{
	return local_ref<org::apache::http::conn::EofSensorWatcher>(get_jtype());
}


org::apache::http::conn::BasicEofSensorWatcher::BasicEofSensorWatcher(local_ref< org::apache::http::conn::ManagedClientConnection > const &a0, cpp_boolean const &a1)
: cpp_object<org::apache::http::conn::BasicEofSensorWatcher>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::conn::BasicEofSensorWatcher::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::conn::BasicEofSensorWatcher::J2CPP_CLASS_NAME, org::apache::http::conn::BasicEofSensorWatcher::J2CPP_METHOD_NAME(0), org::apache::http::conn::BasicEofSensorWatcher::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


cpp_boolean org::apache::http::conn::BasicEofSensorWatcher::eofDetected(local_ref< java::io::InputStream > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::BasicEofSensorWatcher::streamClosed(local_ref< java::io::InputStream > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::BasicEofSensorWatcher::streamAbort(local_ref< java::io::InputStream > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::conn::BasicEofSensorWatcher,"org/apache/http/conn/BasicEofSensorWatcher")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicEofSensorWatcher,0,"<init>","(Lorg/apache/http/conn/ManagedClientConnection;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicEofSensorWatcher,1,"eofDetected","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicEofSensorWatcher,2,"streamClosed","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::BasicEofSensorWatcher,3,"streamAbort","(Ljava/io/InputStream;)Z")
J2CPP_DEFINE_FIELD(org::apache::http::conn::BasicEofSensorWatcher,0,"managedConn","Lorg/apache/http/conn/ManagedClientConnection;")
J2CPP_DEFINE_FIELD(org::apache::http::conn::BasicEofSensorWatcher,1,"attemptReuse","Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_BASICEOFSENSORWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION