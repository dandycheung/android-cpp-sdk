/*================================================================================
  code generated by: java2cpp
  class: android.view.inputmethod.BaseInputConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/os/Bundle.hpp>
#include <android/text/Editable.hpp>
#include <android/text/Spannable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>
#include <android/view/inputmethod/ExtractedTextRequest.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class BaseInputConnection;
	class BaseInputConnection
		: public cpp_object<BaseInputConnection>
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

		BaseInputConnection(jobject jobj)
		: cpp_object<BaseInputConnection>(jobj)
		{
		}

		static void removeComposingSpans(local_ref< android::text::Spannable > const&);
		static void setComposingSpans(local_ref< android::text::Spannable > const&);
		static cpp_int getComposingSpanStart(local_ref< android::text::Spannable > const&);
		static cpp_int getComposingSpanEnd(local_ref< android::text::Spannable > const&);
		local_ref< android::text::Editable > getEditable();
		cpp_boolean beginBatchEdit();
		cpp_boolean endBatchEdit();
		cpp_boolean clearMetaKeyStates(cpp_int const&);
		cpp_boolean commitCompletion(local_ref< android::view::inputmethod::CompletionInfo > const&);
		cpp_boolean commitText(local_ref< java::lang::CharSequence > const&, cpp_int const&);
		cpp_boolean deleteSurroundingText(cpp_int const&, cpp_int const&);
		cpp_boolean finishComposingText();
		cpp_int getCursorCapsMode(cpp_int const&);
		local_ref< android::view::inputmethod::ExtractedText > getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest > const&, cpp_int const&);
		local_ref< java::lang::CharSequence > getTextBeforeCursor(cpp_int const&, cpp_int const&);
		local_ref< java::lang::CharSequence > getTextAfterCursor(cpp_int const&, cpp_int const&);
		cpp_boolean performEditorAction(cpp_int const&);
		cpp_boolean performContextMenuAction(cpp_int const&);
		cpp_boolean performPrivateCommand(local_ref< java::lang::String > const&, local_ref< android::os::Bundle > const&);
		cpp_boolean setComposingText(local_ref< java::lang::CharSequence > const&, cpp_int const&);
		cpp_boolean setSelection(cpp_int const&, cpp_int const&);
		cpp_boolean sendKeyEvent(local_ref< android::view::KeyEvent > const&);
		cpp_boolean reportFullscreenMode(cpp_boolean const&);
	}; //class BaseInputConnection

} //namespace inputmethod
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::inputmethod::BaseInputConnection > create< android::view::inputmethod::BaseInputConnection>(local_ref< android::view::View > const &a0, cpp_boolean const &a1)
{
	return local_ref< android::view::inputmethod::BaseInputConnection >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME, android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(0), android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::inputmethod::BaseInputConnection::removeComposingSpans(local_ref< android::text::Spannable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void android::view::inputmethod::BaseInputConnection::setComposingSpans(local_ref< android::text::Spannable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::inputmethod::BaseInputConnection::getComposingSpanStart(local_ref< android::text::Spannable > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::inputmethod::BaseInputConnection::getComposingSpanEnd(local_ref< android::text::Spannable > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::view::inputmethod::BaseInputConnection::getEditable()
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::beginBatchEdit()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::endBatchEdit()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::clearMetaKeyStates(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::commitCompletion(local_ref< android::view::inputmethod::CompletionInfo > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::commitText(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::deleteSurroundingText(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::finishComposingText()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int android::view::inputmethod::BaseInputConnection::getCursorCapsMode(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::inputmethod::ExtractedText > android::view::inputmethod::BaseInputConnection::getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest > const &a0, cpp_int const &a1)
{
	return local_ref< android::view::inputmethod::ExtractedText >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::BaseInputConnection::getTextBeforeCursor(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::BaseInputConnection::getTextAfterCursor(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::performEditorAction(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::performContextMenuAction(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::performPrivateCommand(local_ref< java::lang::String > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::setComposingText(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::setSelection(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::sendKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::inputmethod::BaseInputConnection::reportFullscreenMode(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::inputmethod::BaseInputConnection,"android/view/inputmethod/BaseInputConnection")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,0,"<init>","(Landroid/view/View;Z)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,1,"removeComposingSpans","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,2,"setComposingSpans","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,3,"getComposingSpanStart","(Landroid/text/Spannable;)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,4,"getComposingSpanEnd","(Landroid/text/Spannable;)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,5,"getEditable","()Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,6,"beginBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,7,"endBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,8,"clearMetaKeyStates","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,9,"commitCompletion","(Landroid/view/inputmethod/CompletionInfo;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,10,"commitText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,11,"deleteSurroundingText","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,12,"finishComposingText","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,13,"getCursorCapsMode","(I)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,14,"getExtractedText","(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,15,"getTextBeforeCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,16,"getTextAfterCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,17,"performEditorAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,18,"performContextMenuAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,19,"performPrivateCommand","(Ljava/lang/String;Landroid/os/Bundle;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,20,"setComposingText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,21,"setSelection","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,22,"sendKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,23,"reportFullscreenMode","(Z)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
