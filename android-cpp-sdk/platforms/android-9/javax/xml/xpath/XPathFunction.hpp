/*================================================================================
  code generated by: java2cpp
  class: javax.xml.xpath.XPathFunction
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_DECL
#define J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace xpath {

	class XPathFunction;
	class XPathFunction
		: public cpp_object<XPathFunction>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		XPathFunction(jobject jobj)
		: cpp_object<XPathFunction>(jobj)
		{
		}

		local_ref< java::lang::Object > evaluate(local_ref< java::util::List > const&);
	}; //class XPathFunction

} //namespace xpath
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_IMPL
#define J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::Object > javax::xml::xpath::XPathFunction::evaluate(local_ref< java::util::List > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::xpath::XPathFunction,"javax/xml/xpath/XPathFunction")
J2CPP_DEFINE_METHOD(javax::xml::xpath::XPathFunction,0,"evaluate","(Ljava/util/List;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_XPATH_XPATHFUNCTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION