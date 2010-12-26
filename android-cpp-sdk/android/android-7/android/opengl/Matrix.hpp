/*================================================================================
  code generated by: java2cpp
  class: android.opengl.Matrix
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL
#define J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL






namespace j2cpp {

namespace android { namespace opengl {

	class Matrix;
	class Matrix
		: public cpp_object<Matrix>
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

		Matrix(jobject jobj)
		: cpp_object<Matrix>(jobj)
		{
		}

		static void multiplyMM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&);
		static void multiplyMV(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&);
		static void transposeM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&);
		static cpp_boolean invertM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&);
		static void orthoM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void frustumM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static cpp_float length(cpp_float const&, cpp_float const&, cpp_float const&);
		static void setIdentityM(local_ref< cpp_float_array<1> > const&, cpp_int const&);
		static void scaleM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void scaleM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void translateM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void translateM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void rotateM(local_ref< cpp_float_array<1> > const&, cpp_int const&, local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void rotateM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void setRotateM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void setRotateEulerM(local_ref< cpp_float_array<1> > const&, cpp_int const&, cpp_float const&, cpp_float const&, cpp_float const&);
	}; //class Matrix

} //namespace opengl
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::opengl::Matrix > create< android::opengl::Matrix>()
{
	return local_ref< android::opengl::Matrix >(
		environment::get().get_jenv()->NewObject(
			get_class<android::opengl::Matrix::J2CPP_CLASS_NAME>(),
			get_method_id<android::opengl::Matrix::J2CPP_CLASS_NAME, android::opengl::Matrix::J2CPP_METHOD_NAME(0), android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::opengl::Matrix::multiplyMM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3, local_ref< cpp_float_array<1> > const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::opengl::Matrix::multiplyMV(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3, local_ref< cpp_float_array<1> > const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::opengl::Matrix::transposeM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::opengl::Matrix::invertM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::opengl::Matrix::orthoM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5, cpp_float const &a6, cpp_float const &a7)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

void android::opengl::Matrix::frustumM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5, cpp_float const &a6, cpp_float const &a7)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

cpp_float android::opengl::Matrix::length(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return cpp_float(
		environment::get().get_jenv()->CallStaticFloatMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::opengl::Matrix::setIdentityM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::opengl::Matrix::scaleM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3, cpp_float const &a4, cpp_float const &a5, cpp_float const &a6)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
		)
	);
}

void android::opengl::Matrix::scaleM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::opengl::Matrix::translateM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3, cpp_float const &a4, cpp_float const &a5, cpp_float const &a6)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
		)
	);
}

void android::opengl::Matrix::translateM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::opengl::Matrix::rotateM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_float_array<1> > const &a2, cpp_int const &a3, cpp_float const &a4, cpp_float const &a5, cpp_float const &a6, cpp_float const &a7)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

void android::opengl::Matrix::rotateM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::opengl::Matrix::setRotateM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::opengl::Matrix::setRotateEulerM(local_ref< cpp_float_array<1> > const &a0, cpp_int const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::opengl::Matrix,"android/opengl/Matrix")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,1,"multiplyMM","([FI[FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,2,"multiplyMV","([FI[FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,3,"transposeM","([FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,4,"invertM","([FI[FI)Z")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,5,"orthoM","([FIFFFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,6,"frustumM","([FIFFFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,7,"length","(FFF)F")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,8,"setIdentityM","([FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,9,"scaleM","([FI[FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,10,"scaleM","([FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,11,"translateM","([FI[FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,12,"translateM","([FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,13,"rotateM","([FI[FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,14,"rotateM","([FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,15,"setRotateM","([FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,16,"setRotateEulerM","([FIFFF)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
