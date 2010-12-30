/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.LinkedBlockingQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractQueue; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/AbstractQueue.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class LinkedBlockingQueue;
	class LinkedBlockingQueue
		: public object<LinkedBlockingQueue>
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

		explicit LinkedBlockingQueue(jobject jobj)
		: object<LinkedBlockingQueue>(jobj)
		{
		}

		operator local_ref<java::util::AbstractQueue>() const;
		operator local_ref<java::util::concurrent::BlockingQueue>() const;
		operator local_ref<java::io::Serializable>() const;


		LinkedBlockingQueue();
		LinkedBlockingQueue(jint);
		LinkedBlockingQueue(local_ref< java::util::Collection > const&);
		jint size();
		jint remainingCapacity();
		void put(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > take();
		local_ref< java::lang::Object > poll(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > poll();
		local_ref< java::lang::Object > peek();
		jboolean remove(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > toString();
		void clear();
		jint drainTo(local_ref< java::util::Collection >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&, jint);
		local_ref< java::util::Iterator > iterator();
	}; //class LinkedBlockingQueue

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::LinkedBlockingQueue::operator local_ref<java::util::AbstractQueue>() const
{
	return local_ref<java::util::AbstractQueue>(get_jobject());
}

java::util::concurrent::LinkedBlockingQueue::operator local_ref<java::util::concurrent::BlockingQueue>() const
{
	return local_ref<java::util::concurrent::BlockingQueue>(get_jobject());
}

java::util::concurrent::LinkedBlockingQueue::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue()
: object<java::util::concurrent::LinkedBlockingQueue>(
	call_new_object<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(0),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue(jint a0)
: object<java::util::concurrent::LinkedBlockingQueue>(
	call_new_object<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(1),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::util::concurrent::LinkedBlockingQueue::LinkedBlockingQueue(local_ref< java::util::Collection > const &a0)
: object<java::util::concurrent::LinkedBlockingQueue>(
	call_new_object<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(2),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


jint java::util::concurrent::LinkedBlockingQueue::size()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(3),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::LinkedBlockingQueue::remainingCapacity()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(4),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void java::util::concurrent::LinkedBlockingQueue::put(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(5),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::LinkedBlockingQueue::offer(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(6),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::LinkedBlockingQueue::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(7),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingQueue::take()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(8),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingQueue::poll(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(9),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingQueue::poll()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(10),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingQueue::peek()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(11),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::util::concurrent::LinkedBlockingQueue::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(12),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::LinkedBlockingQueue::toArray()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(13),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::LinkedBlockingQueue::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(14),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::LinkedBlockingQueue::toString()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(15),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::util::concurrent::LinkedBlockingQueue::clear()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(16),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject());
}

jint java::util::concurrent::LinkedBlockingQueue::drainTo(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(17),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::LinkedBlockingQueue::drainTo(local_ref< java::util::Collection > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(18),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< java::util::Iterator > java::util::concurrent::LinkedBlockingQueue::iterator()
{
	return call_method<
		java::util::concurrent::LinkedBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_NAME(19),
		java::util::concurrent::LinkedBlockingQueue::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::Iterator > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::LinkedBlockingQueue,"java/util/concurrent/LinkedBlockingQueue")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,2,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,3,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,4,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,5,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,6,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,7,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,8,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,9,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,10,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,11,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,12,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,13,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,14,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,15,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,16,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,17,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,18,"drainTo","(Ljava/util/Collection;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingQueue,19,"iterator","()Ljava/util/Iterator;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
