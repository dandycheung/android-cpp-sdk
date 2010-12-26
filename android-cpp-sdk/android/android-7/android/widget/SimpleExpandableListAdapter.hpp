/*================================================================================
  code generated by: java2cpp
  class: android.widget.SimpleExpandableListAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleExpandableListAdapter;
	class SimpleExpandableListAdapter
		: public cpp_object<SimpleExpandableListAdapter>
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

		SimpleExpandableListAdapter(jobject jobj)
		: cpp_object<SimpleExpandableListAdapter>(jobj)
		{
		}

		local_ref< java::lang::Object > getChild(cpp_int const&, cpp_int const&);
		cpp_long getChildId(cpp_int const&, cpp_int const&);
		local_ref< android::view::View > getChildView(cpp_int const&, cpp_int const&, cpp_boolean const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newChildView(cpp_boolean const&, local_ref< android::view::ViewGroup > const&);
		cpp_int getChildrenCount(cpp_int const&);
		local_ref< java::lang::Object > getGroup(cpp_int const&);
		cpp_int getGroupCount();
		cpp_long getGroupId(cpp_int const&);
		local_ref< android::view::View > getGroupView(cpp_int const&, cpp_boolean const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newGroupView(cpp_boolean const&, local_ref< android::view::ViewGroup > const&);
		cpp_boolean isChildSelectable(cpp_int const&, cpp_int const&);
		cpp_boolean hasStableIds();
	}; //class SimpleExpandableListAdapter

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::SimpleExpandableListAdapter > create< android::widget::SimpleExpandableListAdapter>(local_ref< android::content::Context > const &a0, local_ref< java::util::List > const &a1, cpp_int const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< cpp_int_array<1> > const &a4, local_ref< java::util::List > const &a5, cpp_int const &a6, local_ref< cpp_object_array<java::lang::String, 1> > const &a7, local_ref< cpp_int_array<1> > const &a8)
{
	return local_ref< android::widget::SimpleExpandableListAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME, android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_NAME(0), android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::SimpleExpandableListAdapter > create< android::widget::SimpleExpandableListAdapter>(local_ref< android::content::Context > const &a0, local_ref< java::util::List > const &a1, cpp_int const &a2, cpp_int const &a3, local_ref< cpp_object_array<java::lang::String, 1> > const &a4, local_ref< cpp_int_array<1> > const &a5, local_ref< java::util::List > const &a6, cpp_int const &a7, local_ref< cpp_object_array<java::lang::String, 1> > const &a8, local_ref< cpp_int_array<1> > const &a9)
{
	return local_ref< android::widget::SimpleExpandableListAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME, android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_NAME(1), android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype(), a9.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::SimpleExpandableListAdapter > create< android::widget::SimpleExpandableListAdapter>(local_ref< android::content::Context > const &a0, local_ref< java::util::List > const &a1, cpp_int const &a2, cpp_int const &a3, local_ref< cpp_object_array<java::lang::String, 1> > const &a4, local_ref< cpp_int_array<1> > const &a5, local_ref< java::util::List > const &a6, cpp_int const &a7, cpp_int const &a8, local_ref< cpp_object_array<java::lang::String, 1> > const &a9, local_ref< cpp_int_array<1> > const &a10)
{
	return local_ref< android::widget::SimpleExpandableListAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SimpleExpandableListAdapter::J2CPP_CLASS_NAME, android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_NAME(2), android::widget::SimpleExpandableListAdapter::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype(), a9.get_jtype(), a10.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::widget::SimpleExpandableListAdapter::getChild(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long android::widget::SimpleExpandableListAdapter::getChildId(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleExpandableListAdapter::getChildView(cpp_int const &a0, cpp_int const &a1, cpp_boolean const &a2, local_ref< android::view::View > const &a3, local_ref< android::view::ViewGroup > const &a4)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleExpandableListAdapter::newChildView(cpp_boolean const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::widget::SimpleExpandableListAdapter::getChildrenCount(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::widget::SimpleExpandableListAdapter::getGroup(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::SimpleExpandableListAdapter::getGroupCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_long android::widget::SimpleExpandableListAdapter::getGroupId(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleExpandableListAdapter::getGroupView(cpp_int const &a0, cpp_boolean const &a1, local_ref< android::view::View > const &a2, local_ref< android::view::ViewGroup > const &a3)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleExpandableListAdapter::newGroupView(cpp_boolean const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::SimpleExpandableListAdapter::isChildSelectable(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::SimpleExpandableListAdapter::hasStableIds()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleExpandableListAdapter,"android/widget/SimpleExpandableListAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,0,"<init>","(Landroid/content/Context;Ljava/util/List;I[java.lang.String[ILjava/util/List;I[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,1,"<init>","(Landroid/content/Context;Ljava/util/List;II[java.lang.String[ILjava/util/List;I[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,2,"<init>","(Landroid/content/Context;Ljava/util/List;II[java.lang.String[ILjava/util/List;II[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,3,"getChild","(II)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,4,"getChildId","(II)J")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,5,"getChildView","(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,6,"newChildView","(ZLandroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,7,"getChildrenCount","(I)I")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,8,"getGroup","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,9,"getGroupCount","()I")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,10,"getGroupId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,11,"getGroupView","(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,12,"newGroupView","(ZLandroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,13,"isChildSelectable","(II)Z")
J2CPP_DEFINE_METHOD(android::widget::SimpleExpandableListAdapter,14,"hasStableIds","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEEXPANDABLELISTADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
