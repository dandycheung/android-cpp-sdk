/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.WritableByteChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/Channel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class WritableByteChannel;
	class WritableByteChannel
		: public object<WritableByteChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit WritableByteChannel(jobject jobj)
		: object<WritableByteChannel>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::channels::Channel>() const;


		jint write(local_ref< java::nio::ByteBuffer >  const&);
	}; //class WritableByteChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::WritableByteChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::WritableByteChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

jint java::nio::channels::WritableByteChannel::write(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::channels::WritableByteChannel::J2CPP_CLASS_NAME,
		java::nio::channels::WritableByteChannel::J2CPP_METHOD_NAME(0),
		java::nio::channels::WritableByteChannel::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::channels::WritableByteChannel,"java/nio/channels/WritableByteChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::WritableByteChannel,0,"write","(Ljava/nio/ByteBuffer;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_WRITABLEBYTECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
