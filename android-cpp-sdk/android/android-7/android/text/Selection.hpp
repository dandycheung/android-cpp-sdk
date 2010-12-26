/*================================================================================
  code generated by: java2cpp
  class: android.text.Selection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL
#define J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }


#include <android/text/Layout.hpp>
#include <android/text/Spannable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Selection;
	class Selection
		: public cpp_object<Selection>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		Selection(jobject jobj)
		: cpp_object<Selection>(jobj)
		{
		}

		static cpp_int getSelectionStart(local_ref< java::lang::CharSequence > const&);
		static cpp_int getSelectionEnd(local_ref< java::lang::CharSequence > const&);
		static void setSelection(local_ref< android::text::Spannable > const&, cpp_int const&, cpp_int const&);
		static void setSelection(local_ref< android::text::Spannable > const&, cpp_int const&);
		static void selectAll(local_ref< android::text::Spannable > const&);
		static void extendSelection(local_ref< android::text::Spannable > const&, cpp_int const&);
		static void removeSelection(local_ref< android::text::Spannable > const&);
		static cpp_boolean moveUp(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean moveDown(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean moveLeft(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean moveRight(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendUp(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendDown(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendLeft(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendRight(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendToLeftEdge(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean extendToRightEdge(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean moveToLeftEdge(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);
		static cpp_boolean moveToRightEdge(local_ref< android::text::Spannable > const&, local_ref< android::text::Layout > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > SELECTION_START;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Object > > SELECTION_END;
	}; //class Selection

} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SELECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::Selection > create< android::text::Selection>()
{
	return local_ref< android::text::Selection >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::Selection::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::Selection::J2CPP_CLASS_NAME, android::text::Selection::J2CPP_METHOD_NAME(0), android::text::Selection::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::text::Selection::getSelectionStart(local_ref< java::lang::CharSequence > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::Selection::getSelectionEnd(local_ref< java::lang::CharSequence > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

void android::text::Selection::setSelection(local_ref< android::text::Spannable > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::text::Selection::setSelection(local_ref< android::text::Spannable > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::Selection::selectAll(local_ref< android::text::Spannable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

void android::text::Selection::extendSelection(local_ref< android::text::Spannable > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::Selection::removeSelection(local_ref< android::text::Spannable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveUp(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveDown(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveLeft(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveRight(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendUp(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendDown(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendLeft(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendRight(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendToLeftEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::extendToRightEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveToLeftEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::Selection::moveToRightEdge(local_ref< android::text::Spannable > const &a0, local_ref< android::text::Layout > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::text::Selection::J2CPP_CLASS_NAME,
	android::text::Selection::J2CPP_FIELD_NAME(0),
	android::text::Selection::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Object >
> android::text::Selection::SELECTION_START;

static_field<
	android::text::Selection::J2CPP_CLASS_NAME,
	android::text::Selection::J2CPP_FIELD_NAME(1),
	android::text::Selection::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::Object >
> android::text::Selection::SELECTION_END;


J2CPP_DEFINE_CLASS(android::text::Selection,"android/text/Selection")
J2CPP_DEFINE_METHOD(android::text::Selection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::Selection,1,"getSelectionStart","(Ljava/lang/CharSequence;)I")
J2CPP_DEFINE_METHOD(android::text::Selection,2,"getSelectionEnd","(Ljava/lang/CharSequence;)I")
J2CPP_DEFINE_METHOD(android::text::Selection,3,"setSelection","(Landroid/text/Spannable;II)V")
J2CPP_DEFINE_METHOD(android::text::Selection,4,"setSelection","(Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::Selection,5,"selectAll","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::Selection,6,"extendSelection","(Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::Selection,7,"removeSelection","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::Selection,8,"moveUp","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,9,"moveDown","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,10,"moveLeft","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,11,"moveRight","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,12,"extendUp","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,13,"extendDown","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,14,"extendLeft","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,15,"extendRight","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,16,"extendToLeftEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,17,"extendToRightEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,18,"moveToLeftEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,19,"moveToRightEdge","(Landroid/text/Spannable;Landroid/text/Layout;)Z")
J2CPP_DEFINE_METHOD(android::text::Selection,20,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::Selection,0,"SELECTION_START","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::text::Selection,1,"SELECTION_END","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SELECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
