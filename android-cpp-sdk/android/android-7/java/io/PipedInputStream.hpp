/*================================================================================
  code generated by: java2cpp
  class: java.io.PipedInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class PipedOutputStream; } } }


#include <java/io/PipedOutputStream.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PipedInputStream;
	class PipedInputStream
		: public cpp_object<PipedInputStream>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		PipedInputStream(jobject jobj)
		: cpp_object<PipedInputStream>(jobj)
		{
		}

		cpp_int available();
		void close();
		void connect(local_ref< java::io::PipedOutputStream > const&);
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);

	}; //class PipedInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::PipedInputStream > create< java::io::PipedInputStream>()
{
	return local_ref< java::io::PipedInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PipedInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PipedInputStream::J2CPP_CLASS_NAME, java::io::PipedInputStream::J2CPP_METHOD_NAME(0), java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::io::PipedInputStream > create< java::io::PipedInputStream>(local_ref< java::io::PipedOutputStream > const &a0)
{
	return local_ref< java::io::PipedInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::PipedInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::PipedInputStream::J2CPP_CLASS_NAME, java::io::PipedInputStream::J2CPP_METHOD_NAME(1), java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::PipedInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::PipedInputStream::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::io::PipedInputStream::connect(local_ref< java::io::PipedOutputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::PipedInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::io::PipedInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}




J2CPP_DEFINE_CLASS(java::io::PipedInputStream,"java/io/PipedInputStream")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,1,"<init>","(Ljava/io/PipedOutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,2,"available","()I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,4,"connect","(Ljava/io/PipedOutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,5,"read","()I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,6,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,7,"receive","(I)V")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,0,"buffer","[B")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,1,"in","I")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,2,"out","I")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,3,"PIPE_SIZE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
