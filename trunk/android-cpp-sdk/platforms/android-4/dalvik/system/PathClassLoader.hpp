/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.system.PathClassLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class PathClassLoader;
	class PathClassLoader
		: public object<PathClassLoader>
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

		explicit PathClassLoader(jobject jobj)
		: object<PathClassLoader>(jobj)
		{
		}

		operator local_ref<java::lang::ClassLoader>() const;


		PathClassLoader(local_ref< java::lang::String > const&, local_ref< java::lang::ClassLoader > const&);
		PathClassLoader(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::ClassLoader > const&);
	}; //class PathClassLoader

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_IMPL

namespace j2cpp {



dalvik::system::PathClassLoader::operator local_ref<java::lang::ClassLoader>() const
{
	return local_ref<java::lang::ClassLoader>(get_jobject());
}


dalvik::system::PathClassLoader::PathClassLoader(local_ref< java::lang::String > const &a0, local_ref< java::lang::ClassLoader > const &a1)
: object<dalvik::system::PathClassLoader>(
	call_new_object<
		dalvik::system::PathClassLoader::J2CPP_CLASS_NAME,
		dalvik::system::PathClassLoader::J2CPP_METHOD_NAME(0),
		dalvik::system::PathClassLoader::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



dalvik::system::PathClassLoader::PathClassLoader(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::ClassLoader > const &a2)
: object<dalvik::system::PathClassLoader>(
	call_new_object<
		dalvik::system::PathClassLoader::J2CPP_CLASS_NAME,
		dalvik::system::PathClassLoader::J2CPP_METHOD_NAME(1),
		dalvik::system::PathClassLoader::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}








J2CPP_DEFINE_CLASS(dalvik::system::PathClassLoader,"dalvik/system/PathClassLoader")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,0,"<init>","(Ljava/lang/String;Ljava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,2,"findClass","(Ljava/lang/String;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,3,"findResource","(Ljava/lang/String;)Ljava/net/URL;")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,4,"findResources","(Ljava/lang/String;)Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,5,"findLibrary","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(dalvik::system::PathClassLoader,6,"getPackage","(Ljava/lang/String;)Ljava/lang/Package;")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_PATHCLASSLOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
