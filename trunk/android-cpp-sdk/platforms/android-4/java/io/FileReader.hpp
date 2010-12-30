/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FileReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEREADER_HPP_DECL
#define J2CPP_JAVA_IO_FILEREADER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStreamReader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/File.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/io/InputStreamReader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FileReader;
	class FileReader
		: public object<FileReader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit FileReader(jobject jobj)
		: object<FileReader>(jobj)
		{
		}

		operator local_ref<java::io::InputStreamReader>() const;


		FileReader(local_ref< java::io::File > const&);
		FileReader(local_ref< java::io::FileDescriptor > const&);
		FileReader(local_ref< java::lang::String > const&);
	}; //class FileReader

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILEREADER_HPP_IMPL
#define J2CPP_JAVA_IO_FILEREADER_HPP_IMPL

namespace j2cpp {



java::io::FileReader::operator local_ref<java::io::InputStreamReader>() const
{
	return local_ref<java::io::InputStreamReader>(get_jobject());
}


java::io::FileReader::FileReader(local_ref< java::io::File > const &a0)
: object<java::io::FileReader>(
	call_new_object<
		java::io::FileReader::J2CPP_CLASS_NAME,
		java::io::FileReader::J2CPP_METHOD_NAME(0),
		java::io::FileReader::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::io::FileReader::FileReader(local_ref< java::io::FileDescriptor > const &a0)
: object<java::io::FileReader>(
	call_new_object<
		java::io::FileReader::J2CPP_CLASS_NAME,
		java::io::FileReader::J2CPP_METHOD_NAME(1),
		java::io::FileReader::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::io::FileReader::FileReader(local_ref< java::lang::String > const &a0)
: object<java::io::FileReader>(
	call_new_object<
		java::io::FileReader::J2CPP_CLASS_NAME,
		java::io::FileReader::J2CPP_METHOD_NAME(2),
		java::io::FileReader::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::io::FileReader,"java/io/FileReader")
J2CPP_DEFINE_METHOD(java::io::FileReader,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::FileReader,1,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(java::io::FileReader,2,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILEREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
