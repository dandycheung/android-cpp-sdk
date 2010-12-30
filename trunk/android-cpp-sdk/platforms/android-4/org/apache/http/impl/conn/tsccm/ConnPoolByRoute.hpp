/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.ConnPoolByRoute
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class PoolEntryRequest; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class AbstractConnPool; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionOperator; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <org/apache/http/conn/ClientConnectionOperator.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/conn/tsccm/AbstractConnPool.hpp>
#include <org/apache/http/impl/conn/tsccm/BasicPoolEntry.hpp>
#include <org/apache/http/impl/conn/tsccm/PoolEntryRequest.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class ConnPoolByRoute;
	class ConnPoolByRoute
		: public object<ConnPoolByRoute>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit ConnPoolByRoute(jobject jobj)
		: object<ConnPoolByRoute>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::conn::tsccm::AbstractConnPool>() const;


		ConnPoolByRoute(local_ref< org::apache::http::conn::ClientConnectionOperator > const&, local_ref< org::apache::http::params::HttpParams > const&);
		jint getConnectionsInPool(local_ref< org::apache::http::conn::routing::HttpRoute >  const&);
		local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest > requestPoolEntry(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< java::lang::Object >  const&);
		void freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry >  const&, jboolean, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void deleteClosedConnections();
		void shutdown();

	}; //class ConnPoolByRoute

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::ConnPoolByRoute::operator local_ref<org::apache::http::impl::conn::tsccm::AbstractConnPool>() const
{
	return local_ref<org::apache::http::impl::conn::tsccm::AbstractConnPool>(get_jobject());
}


org::apache::http::impl::conn::tsccm::ConnPoolByRoute::ConnPoolByRoute(local_ref< org::apache::http::conn::ClientConnectionOperator > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
: object<org::apache::http::impl::conn::tsccm::ConnPoolByRoute>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}








jint org::apache::http::impl::conn::tsccm::ConnPoolByRoute::getConnectionsInPool(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest > org::apache::http::impl::conn::tsccm::ConnPoolByRoute::requestPoolEntry(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest > >
	(get_jobject(), a0, a1);
}


void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0, jboolean a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}







void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::deleteClosedConnections()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(17),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject());
}

void org::apache::http::impl::conn::tsccm::ConnPoolByRoute::shutdown()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_NAME(18),
		org::apache::http::impl::conn::tsccm::ConnPoolByRoute::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,"org/apache/http/impl/conn/tsccm/ConnPoolByRoute")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,0,"<init>","(Lorg/apache/http/conn/ClientConnectionOperator;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,1,"createFreeConnQueue","()Ljava/util/Queue;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,2,"createWaitingThreadQueue","()Ljava/util/Queue;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,3,"createRouteToPoolMap","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,4,"newRouteSpecificPool","(Lorg/apache/http/conn/routing/HttpRoute;)Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,5,"newWaitingThread","(Ljava/util/concurrent/locks/Condition;Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;)Lorg/apache/http/impl/conn/tsccm/WaitingThread;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,6,"getRoutePool","(Lorg/apache/http/conn/routing/HttpRoute;Z)Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,7,"getConnectionsInPool","(Lorg/apache/http/conn/routing/HttpRoute;)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,8,"requestPoolEntry","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/PoolEntryRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,9,"getEntryBlocking","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;Lorg/apache/http/impl/conn/tsccm/WaitingThreadAborter;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,10,"freeEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;ZJLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,11,"getFreeEntry","(Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,12,"createEntry","(Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;Lorg/apache/http/conn/ClientConnectionOperator;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,13,"deleteEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,14,"deleteLeastUsedEntry","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,15,"handleLostEntry","(Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,16,"notifyWaitingThread","(Lorg/apache/http/impl/conn/tsccm/RouteSpecificPool;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,17,"deleteClosedConnections","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,18,"shutdown","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,0,"operator","Lorg/apache/http/conn/ClientConnectionOperator;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,1,"freeConnections","Ljava/util/Queue;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,2,"waitingThreads","Ljava/util/Queue;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,3,"routeToPool","Ljava/util/Map;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ConnPoolByRoute,4,"maxTotalConnections","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_CONNPOOLBYROUTE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
