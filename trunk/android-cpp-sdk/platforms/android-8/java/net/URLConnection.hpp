/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.URLConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLCONNECTION_HPP_DECL
#define J2CPP_JAVA_NET_URLCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace net { class FileNameMap; } } }
namespace j2cpp { namespace java { namespace net { class ContentHandlerFactory; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/ContentHandlerFactory.hpp>
#include <java/net/FileNameMap.hpp>
#include <java/net/URL.hpp>
#include <java/security/Permission.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class URLConnection;
	class URLConnection
		: public object<URLConnection>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit URLConnection(jobject jobj)
		: object<URLConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void connect();
		jboolean getAllowUserInteraction();
		local_ref< java::lang::Object > getContent();
		local_ref< java::lang::Object > getContent(local_ref< array< local_ref< java::lang::Class >, 1> >  const&);
		local_ref< java::lang::String > getContentEncoding();
		jint getContentLength();
		local_ref< java::lang::String > getContentType();
		jlong getDate();
		static jboolean getDefaultAllowUserInteraction();
		static local_ref< java::lang::String > getDefaultRequestProperty(local_ref< java::lang::String >  const&);
		jboolean getDefaultUseCaches();
		jboolean getDoInput();
		jboolean getDoOutput();
		jlong getExpiration();
		static local_ref< java::net::FileNameMap > getFileNameMap();
		local_ref< java::lang::String > getHeaderField(jint);
		local_ref< java::util::Map > getHeaderFields();
		local_ref< java::util::Map > getRequestProperties();
		void addRequestProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getHeaderField(local_ref< java::lang::String >  const&);
		jlong getHeaderFieldDate(local_ref< java::lang::String >  const&, jlong);
		jint getHeaderFieldInt(local_ref< java::lang::String >  const&, jint);
		local_ref< java::lang::String > getHeaderFieldKey(jint);
		jlong getIfModifiedSince();
		local_ref< java::io::InputStream > getInputStream();
		jlong getLastModified();
		local_ref< java::io::OutputStream > getOutputStream();
		local_ref< java::security::Permission > getPermission();
		local_ref< java::lang::String > getRequestProperty(local_ref< java::lang::String >  const&);
		local_ref< java::net::URL > getURL();
		jboolean getUseCaches();
		static local_ref< java::lang::String > guessContentTypeFromName(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > guessContentTypeFromStream(local_ref< java::io::InputStream >  const&);
		void setAllowUserInteraction(jboolean);
		static void setContentHandlerFactory(local_ref< java::net::ContentHandlerFactory >  const&);
		static void setDefaultAllowUserInteraction(jboolean);
		static void setDefaultRequestProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setDefaultUseCaches(jboolean);
		void setDoInput(jboolean);
		void setDoOutput(jboolean);
		static void setFileNameMap(local_ref< java::net::FileNameMap >  const&);
		void setIfModifiedSince(jlong);
		void setRequestProperty(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setUseCaches(jboolean);
		void setConnectTimeout(jint);
		jint getConnectTimeout();
		void setReadTimeout(jint);
		jint getReadTimeout();
		local_ref< java::lang::String > toString();

	}; //class URLConnection

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLCONNECTION_HPP_IMPL
#define J2CPP_JAVA_NET_URLCONNECTION_HPP_IMPL

namespace j2cpp {



java::net::URLConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void java::net::URLConnection::connect()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(1),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

jboolean java::net::URLConnection::getAllowUserInteraction()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(2),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::Object > java::net::URLConnection::getContent()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(3),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::net::URLConnection::getContent(local_ref< array< local_ref< java::lang::Class >, 1> > const &a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(4),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::net::URLConnection::getContentEncoding()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(5),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::net::URLConnection::getContentLength()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(6),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URLConnection::getContentType()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(7),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::net::URLConnection::getDate()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(8),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(get_jobject());
}

jboolean java::net::URLConnection::getDefaultAllowUserInteraction()
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(9),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>();
}

local_ref< java::lang::String > java::net::URLConnection::getDefaultRequestProperty(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(10),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(a0);
}

jboolean java::net::URLConnection::getDefaultUseCaches()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(11),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

jboolean java::net::URLConnection::getDoInput()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(12),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jboolean java::net::URLConnection::getDoOutput()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(13),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jlong java::net::URLConnection::getExpiration()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(14),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(14), 
		jlong
	>(get_jobject());
}

local_ref< java::net::FileNameMap > java::net::URLConnection::getFileNameMap()
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(15),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::net::FileNameMap >
	>();
}

local_ref< java::lang::String > java::net::URLConnection::getHeaderField(jint a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(16),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::util::Map > java::net::URLConnection::getHeaderFields()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(17),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::util::Map >
	>(get_jobject());
}

local_ref< java::util::Map > java::net::URLConnection::getRequestProperties()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(18),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::util::Map >
	>(get_jobject());
}

void java::net::URLConnection::addRequestProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(19),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::net::URLConnection::getHeaderField(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(20),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jlong java::net::URLConnection::getHeaderFieldDate(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(21),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(21), 
		jlong
	>(get_jobject(), a0, a1);
}

jint java::net::URLConnection::getHeaderFieldInt(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(22),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::net::URLConnection::getHeaderFieldKey(jint a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(23),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jlong java::net::URLConnection::getIfModifiedSince()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(24),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(24), 
		jlong
	>(get_jobject());
}

local_ref< java::io::InputStream > java::net::URLConnection::getInputStream()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(25),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

jlong java::net::URLConnection::getLastModified()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(26),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(26), 
		jlong
	>(get_jobject());
}

local_ref< java::io::OutputStream > java::net::URLConnection::getOutputStream()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(27),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::io::OutputStream >
	>(get_jobject());
}

local_ref< java::security::Permission > java::net::URLConnection::getPermission()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(28),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::security::Permission >
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URLConnection::getRequestProperty(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(29),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::net::URL > java::net::URLConnection::getURL()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(30),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::net::URL >
	>(get_jobject());
}

jboolean java::net::URLConnection::getUseCaches()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(31),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(31), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URLConnection::guessContentTypeFromName(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(32),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< java::lang::String > java::net::URLConnection::guessContentTypeFromStream(local_ref< java::io::InputStream > const &a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(33),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::String >
	>(a0);
}

void java::net::URLConnection::setAllowUserInteraction(jboolean a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(34),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setContentHandlerFactory(local_ref< java::net::ContentHandlerFactory > const &a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(35),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(a0);
}

void java::net::URLConnection::setDefaultAllowUserInteraction(jboolean a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(36),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(36), 
		void
	>(a0);
}

void java::net::URLConnection::setDefaultRequestProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(37),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(37), 
		void
	>(a0, a1);
}

void java::net::URLConnection::setDefaultUseCaches(jboolean a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(38),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setDoInput(jboolean a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(39),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setDoOutput(jboolean a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(40),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(40), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setFileNameMap(local_ref< java::net::FileNameMap > const &a0)
{
	return call_static_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(41),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(41), 
		void
	>(a0);
}

void java::net::URLConnection::setIfModifiedSince(jlong a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(42),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(42), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setRequestProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(43),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(43), 
		void
	>(get_jobject(), a0, a1);
}

void java::net::URLConnection::setUseCaches(jboolean a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(44),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(44), 
		void
	>(get_jobject(), a0);
}

void java::net::URLConnection::setConnectTimeout(jint a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(45),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(45), 
		void
	>(get_jobject(), a0);
}

jint java::net::URLConnection::getConnectTimeout()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(46),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(46), 
		jint
	>(get_jobject());
}

void java::net::URLConnection::setReadTimeout(jint a0)
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(47),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(47), 
		void
	>(get_jobject(), a0);
}

jint java::net::URLConnection::getReadTimeout()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(48),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(48), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::net::URLConnection::toString()
{
	return call_method<
		java::net::URLConnection::J2CPP_CLASS_NAME,
		java::net::URLConnection::J2CPP_METHOD_NAME(49),
		java::net::URLConnection::J2CPP_METHOD_SIGNATURE(49), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::net::URLConnection,"java/net/URLConnection")
J2CPP_DEFINE_METHOD(java::net::URLConnection,0,"<init>","(Ljava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,1,"connect","()V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,2,"getAllowUserInteraction","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,3,"getContent","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,4,"getContent","([java.lang.Class)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,5,"getContentEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,6,"getContentLength","()I")
J2CPP_DEFINE_METHOD(java::net::URLConnection,7,"getContentType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,8,"getDate","()J")
J2CPP_DEFINE_METHOD(java::net::URLConnection,9,"getDefaultAllowUserInteraction","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,10,"getDefaultRequestProperty","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,11,"getDefaultUseCaches","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,12,"getDoInput","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,13,"getDoOutput","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,14,"getExpiration","()J")
J2CPP_DEFINE_METHOD(java::net::URLConnection,15,"getFileNameMap","()Ljava/net/FileNameMap;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,16,"getHeaderField","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,17,"getHeaderFields","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,18,"getRequestProperties","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,19,"addRequestProperty","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,20,"getHeaderField","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,21,"getHeaderFieldDate","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::net::URLConnection,22,"getHeaderFieldInt","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::net::URLConnection,23,"getHeaderFieldKey","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,24,"getIfModifiedSince","()J")
J2CPP_DEFINE_METHOD(java::net::URLConnection,25,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,26,"getLastModified","()J")
J2CPP_DEFINE_METHOD(java::net::URLConnection,27,"getOutputStream","()Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,28,"getPermission","()Ljava/security/Permission;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,29,"getRequestProperty","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,30,"getURL","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,31,"getUseCaches","()Z")
J2CPP_DEFINE_METHOD(java::net::URLConnection,32,"guessContentTypeFromName","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,33,"guessContentTypeFromStream","(Ljava/io/InputStream;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::URLConnection,34,"setAllowUserInteraction","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,35,"setContentHandlerFactory","(Ljava/net/ContentHandlerFactory;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,36,"setDefaultAllowUserInteraction","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,37,"setDefaultRequestProperty","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,38,"setDefaultUseCaches","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,39,"setDoInput","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,40,"setDoOutput","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,41,"setFileNameMap","(Ljava/net/FileNameMap;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,42,"setIfModifiedSince","(J)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,43,"setRequestProperty","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,44,"setUseCaches","(Z)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,45,"setConnectTimeout","(I)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,46,"getConnectTimeout","()I")
J2CPP_DEFINE_METHOD(java::net::URLConnection,47,"setReadTimeout","(I)V")
J2CPP_DEFINE_METHOD(java::net::URLConnection,48,"getReadTimeout","()I")
J2CPP_DEFINE_METHOD(java::net::URLConnection,49,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::net::URLConnection,0,"url","Ljava/net/URL;")
J2CPP_DEFINE_FIELD(java::net::URLConnection,1,"ifModifiedSince","J")
J2CPP_DEFINE_FIELD(java::net::URLConnection,2,"useCaches","Z")
J2CPP_DEFINE_FIELD(java::net::URLConnection,3,"connected","Z")
J2CPP_DEFINE_FIELD(java::net::URLConnection,4,"doOutput","Z")
J2CPP_DEFINE_FIELD(java::net::URLConnection,5,"doInput","Z")
J2CPP_DEFINE_FIELD(java::net::URLConnection,6,"allowUserInteraction","Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION