/*================================================================================
  code generated by: java2cpp
  class: javax.xml.validation.TypeInfoProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_DECL
#define J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class TypeInfo; } } } }


#include <org/w3c/dom/TypeInfo.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace validation {

	class TypeInfoProvider;
	class TypeInfoProvider
		: public cpp_object<TypeInfoProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		TypeInfoProvider(jobject jobj)
		: cpp_object<TypeInfoProvider>(jobj)
		{
		}

		local_ref< org::w3c::dom::TypeInfo > getElementTypeInfo();
		local_ref< org::w3c::dom::TypeInfo > getAttributeTypeInfo(cpp_int const&);
		cpp_boolean isIdAttribute(cpp_int const&);
		cpp_boolean isSpecified(cpp_int const&);
	}; //class TypeInfoProvider

} //namespace validation
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_IMPL
#define J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::validation::TypeInfoProvider > create< javax::xml::validation::TypeInfoProvider>()
{
	return local_ref< javax::xml::validation::TypeInfoProvider >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::validation::TypeInfoProvider::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::validation::TypeInfoProvider::J2CPP_CLASS_NAME, javax::xml::validation::TypeInfoProvider::J2CPP_METHOD_NAME(0), javax::xml::validation::TypeInfoProvider::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< org::w3c::dom::TypeInfo > javax::xml::validation::TypeInfoProvider::getElementTypeInfo()
{
	return local_ref< org::w3c::dom::TypeInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::w3c::dom::TypeInfo > javax::xml::validation::TypeInfoProvider::getAttributeTypeInfo(cpp_int const &a0)
{
	return local_ref< org::w3c::dom::TypeInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::xml::validation::TypeInfoProvider::isIdAttribute(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::xml::validation::TypeInfoProvider::isSpecified(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::validation::TypeInfoProvider,"javax/xml/validation/TypeInfoProvider")
J2CPP_DEFINE_METHOD(javax::xml::validation::TypeInfoProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::validation::TypeInfoProvider,1,"getElementTypeInfo","()Lorg/w3c/dom/TypeInfo;")
J2CPP_DEFINE_METHOD(javax::xml::validation::TypeInfoProvider,2,"getAttributeTypeInfo","(I)Lorg/w3c/dom/TypeInfo;")
J2CPP_DEFINE_METHOD(javax::xml::validation::TypeInfoProvider,3,"isIdAttribute","(I)Z")
J2CPP_DEFINE_METHOD(javax::xml::validation::TypeInfoProvider,4,"isSpecified","(I)Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_TYPEINFOPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION