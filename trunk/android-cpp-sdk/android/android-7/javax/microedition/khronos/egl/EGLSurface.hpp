/*================================================================================
  code generated by: java2cpp
  class: javax.microedition.khronos.egl.EGLSurface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_DECL






namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace egl {

	class EGLSurface;
	class EGLSurface
		: public cpp_object<EGLSurface>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		EGLSurface(jobject jobj)
		: cpp_object<EGLSurface>(jobj)
		{
		}

	}; //class EGLSurface

} //namespace egl
} //namespace khronos
} //namespace microedition
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::microedition::khronos::egl::EGLSurface > create< javax::microedition::khronos::egl::EGLSurface>()
{
	return local_ref< javax::microedition::khronos::egl::EGLSurface >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::microedition::khronos::egl::EGLSurface::J2CPP_CLASS_NAME>(),
			get_method_id<javax::microedition::khronos::egl::EGLSurface::J2CPP_CLASS_NAME, javax::microedition::khronos::egl::EGLSurface::J2CPP_METHOD_NAME(0), javax::microedition::khronos::egl::EGLSurface::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::microedition::khronos::egl::EGLSurface,"javax/microedition/khronos/egl/EGLSurface")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::egl::EGLSurface,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLSURFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION