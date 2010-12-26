/*================================================================================
  code generated by: java2cpp
  class: android.sax.EndTextElementListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_DECL
#define J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace sax {

	class EndTextElementListener;
	class EndTextElementListener
		: public cpp_object<EndTextElementListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		EndTextElementListener(jobject jobj)
		: cpp_object<EndTextElementListener>(jobj)
		{
		}

		void end(local_ref< java::lang::String > const&);
	}; //class EndTextElementListener

} //namespace sax
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_IMPL
#define J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_IMPL

namespace j2cpp {


void android::sax::EndTextElementListener::end(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::sax::EndTextElementListener,"android/sax/EndTextElementListener")
J2CPP_DEFINE_METHOD(android::sax::EndTextElementListener,0,"end","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_ENDTEXTELEMENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
