/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.ChunkedInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/InputStream.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class ChunkedInputStream;
	class ChunkedInputStream
		: public object<ChunkedInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit ChunkedInputStream(jobject jobj)
		: object<ChunkedInputStream>(jobj)
		{
		}

		operator local_ref<java::io::InputStream>() const;


		ChunkedInputStream(local_ref< org::apache::http::io::SessionInputBuffer > const&);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint read(local_ref< array<jbyte,1> >  const&);
		void close();
		local_ref< array< local_ref< org::apache::http::Header >, 1> > getFooters();
	}; //class ChunkedInputStream

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::ChunkedInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}


org::apache::http::impl::io::ChunkedInputStream::ChunkedInputStream(local_ref< org::apache::http::io::SessionInputBuffer > const &a0)
: object<org::apache::http::impl::io::ChunkedInputStream>(
	call_new_object<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


jint org::apache::http::impl::io::ChunkedInputStream::read()
{
	return call_method<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint org::apache::http::impl::io::ChunkedInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0, a1, a2);
}

jint org::apache::http::impl::io::ChunkedInputStream::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject(), a0);
}

void org::apache::http::impl::io::ChunkedInputStream::close()
{
	return call_method<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

local_ref< array< local_ref< org::apache::http::Header >, 1> > org::apache::http::impl::io::ChunkedInputStream::getFooters()
{
	return call_method<
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::io::ChunkedInputStream::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< org::apache::http::Header >, 1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::ChunkedInputStream,"org/apache/http/impl/io/ChunkedInputStream")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,1,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,2,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,3,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,4,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::ChunkedInputStream,5,"getFooters","()[org.apache.http.Header")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_CHUNKEDINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
