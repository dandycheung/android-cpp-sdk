/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.AnimationDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class AnimationDrawable;
	class AnimationDrawable
		: public cpp_object<AnimationDrawable>
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

		AnimationDrawable(jobject jobj)
		: cpp_object<AnimationDrawable>(jobj)
		{
		}

		cpp_boolean setVisible(cpp_boolean const&, cpp_boolean const&);
		void start();
		void stop();
		cpp_boolean isRunning();
		void run();
		void unscheduleSelf(local_ref< java::lang::Runnable > const&);
		cpp_int getNumberOfFrames();
		local_ref< android::graphics::drawable::Drawable > getFrame(cpp_int const&);
		cpp_int getDuration(cpp_int const&);
		cpp_boolean isOneShot();
		void setOneShot(cpp_boolean const&);
		void addFrame(local_ref< android::graphics::drawable::Drawable > const&, cpp_int const&);
		void inflate(local_ref< android::content::res::Resources > const&, local_ref< org::xmlpull::v1::XmlPullParser > const&, local_ref< android::util::AttributeSet > const&);
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class AnimationDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::AnimationDrawable > create< android::graphics::drawable::AnimationDrawable>()
{
	return local_ref< android::graphics::drawable::AnimationDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::AnimationDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::AnimationDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::AnimationDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::AnimationDrawable::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::AnimationDrawable::setVisible(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::start()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::stop()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::AnimationDrawable::isRunning()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::run()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::unscheduleSelf(local_ref< java::lang::Runnable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::AnimationDrawable::getNumberOfFrames()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::AnimationDrawable::getFrame(cpp_int const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::AnimationDrawable::getDuration(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::drawable::AnimationDrawable::isOneShot()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::setOneShot(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::addFrame(local_ref< android::graphics::drawable::Drawable > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::AnimationDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::AnimationDrawable::mutate()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::AnimationDrawable,"android/graphics/drawable/AnimationDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,1,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,2,"start","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,3,"stop","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,4,"isRunning","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,5,"run","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,6,"unscheduleSelf","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,7,"getNumberOfFrames","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,8,"getFrame","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,9,"getDuration","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,10,"isOneShot","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,11,"setOneShot","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,12,"addFrame","(Landroid/graphics/drawable/Drawable;I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,13,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::AnimationDrawable,14,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_ANIMATIONDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
