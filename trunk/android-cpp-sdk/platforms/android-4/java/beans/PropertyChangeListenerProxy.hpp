/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.beans.PropertyChangeListenerProxy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_DECL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_DECL


namespace j2cpp { namespace java { namespace util { class EventListenerProxy; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeListener; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeEvent; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/beans/PropertyChangeEvent.hpp>
#include <java/beans/PropertyChangeListener.hpp>
#include <java/lang/String.hpp>
#include <java/util/EventListenerProxy.hpp>


namespace j2cpp {

namespace java { namespace beans {

	class PropertyChangeListenerProxy;
	class PropertyChangeListenerProxy
		: public object<PropertyChangeListenerProxy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit PropertyChangeListenerProxy(jobject jobj)
		: object<PropertyChangeListenerProxy>(jobj)
		{
		}

		operator local_ref<java::util::EventListenerProxy>() const;
		operator local_ref<java::beans::PropertyChangeListener>() const;


		PropertyChangeListenerProxy(local_ref< java::lang::String > const&, local_ref< java::beans::PropertyChangeListener > const&);
		local_ref< java::lang::String > getPropertyName();
		void propertyChange(local_ref< java::beans::PropertyChangeEvent >  const&);
	}; //class PropertyChangeListenerProxy

} //namespace beans
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_IMPL
#define J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_IMPL

namespace j2cpp {



java::beans::PropertyChangeListenerProxy::operator local_ref<java::util::EventListenerProxy>() const
{
	return local_ref<java::util::EventListenerProxy>(get_jobject());
}

java::beans::PropertyChangeListenerProxy::operator local_ref<java::beans::PropertyChangeListener>() const
{
	return local_ref<java::beans::PropertyChangeListener>(get_jobject());
}


java::beans::PropertyChangeListenerProxy::PropertyChangeListenerProxy(local_ref< java::lang::String > const &a0, local_ref< java::beans::PropertyChangeListener > const &a1)
: object<java::beans::PropertyChangeListenerProxy>(
	call_new_object<
		java::beans::PropertyChangeListenerProxy::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_NAME(0),
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< java::lang::String > java::beans::PropertyChangeListenerProxy::getPropertyName()
{
	return call_method<
		java::beans::PropertyChangeListenerProxy::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_NAME(1),
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::beans::PropertyChangeListenerProxy::propertyChange(local_ref< java::beans::PropertyChangeEvent > const &a0)
{
	return call_method<
		java::beans::PropertyChangeListenerProxy::J2CPP_CLASS_NAME,
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_NAME(2),
		java::beans::PropertyChangeListenerProxy::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::beans::PropertyChangeListenerProxy,"java/beans/PropertyChangeListenerProxy")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeListenerProxy,0,"<init>","(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeListenerProxy,1,"getPropertyName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::beans::PropertyChangeListenerProxy,2,"propertyChange","(Ljava/beans/PropertyChangeEvent;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
