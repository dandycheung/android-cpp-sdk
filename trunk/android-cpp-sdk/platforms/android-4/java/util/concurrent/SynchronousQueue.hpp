/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.SynchronousQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractQueue; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractQueue.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class SynchronousQueue;
	class SynchronousQueue
		: public object<SynchronousQueue>
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

		explicit SynchronousQueue(jobject jobj)
		: object<SynchronousQueue>(jobj)
		{
		}

		operator local_ref<java::util::AbstractQueue>() const;
		operator local_ref<java::util::concurrent::BlockingQueue>() const;
		operator local_ref<java::io::Serializable>() const;


		SynchronousQueue();
		SynchronousQueue(jboolean);
		void put(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > take();
		local_ref< java::lang::Object > poll(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > poll();
		jboolean isEmpty();
		jint size();
		jint remainingCapacity();
		void clear();
		jboolean contains(local_ref< java::lang::Object >  const&);
		jboolean remove(local_ref< java::lang::Object >  const&);
		jboolean containsAll(local_ref< java::util::Collection >  const&);
		jboolean removeAll(local_ref< java::util::Collection >  const&);
		jboolean retainAll(local_ref< java::util::Collection >  const&);
		local_ref< java::lang::Object > peek();
		local_ref< java::util::Iterator > iterator();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&, jint);
	}; //class SynchronousQueue

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::SynchronousQueue::operator local_ref<java::util::AbstractQueue>() const
{
	return local_ref<java::util::AbstractQueue>(get_jobject());
}

java::util::concurrent::SynchronousQueue::operator local_ref<java::util::concurrent::BlockingQueue>() const
{
	return local_ref<java::util::concurrent::BlockingQueue>(get_jobject());
}

java::util::concurrent::SynchronousQueue::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::SynchronousQueue::SynchronousQueue()
: object<java::util::concurrent::SynchronousQueue>(
	call_new_object<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(0),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::concurrent::SynchronousQueue::SynchronousQueue(jboolean a0)
: object<java::util::concurrent::SynchronousQueue>(
	call_new_object<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(1),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


void java::util::concurrent::SynchronousQueue::put(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(2),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::SynchronousQueue::offer(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(3),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::SynchronousQueue::take()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(4),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::SynchronousQueue::poll(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(5),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::SynchronousQueue::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(6),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::SynchronousQueue::poll()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(7),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::util::concurrent::SynchronousQueue::isEmpty()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(8),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jint java::util::concurrent::SynchronousQueue::size()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(9),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jint java::util::concurrent::SynchronousQueue::remainingCapacity()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(10),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

void java::util::concurrent::SynchronousQueue::clear()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(11),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}

jboolean java::util::concurrent::SynchronousQueue::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(12),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::SynchronousQueue::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(13),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::SynchronousQueue::containsAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(14),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::SynchronousQueue::removeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(15),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::SynchronousQueue::retainAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(16),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::SynchronousQueue::peek()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(17),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::util::Iterator > java::util::concurrent::SynchronousQueue::iterator()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(18),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::util::Iterator > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::SynchronousQueue::toArray()
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(19),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::SynchronousQueue::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(20),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0);
}

jint java::util::concurrent::SynchronousQueue::drainTo(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(21),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject(), a0);
}

jint java::util::concurrent::SynchronousQueue::drainTo(local_ref< java::util::Collection > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::SynchronousQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_NAME(22),
		java::util::concurrent::SynchronousQueue::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::SynchronousQueue,"java/util/concurrent/SynchronousQueue")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,2,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,3,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,4,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,5,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,6,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,7,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,8,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,9,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,10,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,11,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,12,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,13,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,14,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,15,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,16,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,17,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,18,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,19,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,20,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,21,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::SynchronousQueue,22,"drainTo","(Ljava/util/Collection;I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
