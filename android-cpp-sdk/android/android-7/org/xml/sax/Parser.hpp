/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.Parser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_PARSER_HPP_DECL
#define J2CPP_ORG_XML_SAX_PARSER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DocumentHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class DTDHandler; } } } }


#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>
#include <org/xml/sax/DTDHandler.hpp>
#include <org/xml/sax/DocumentHandler.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class Parser;
	class Parser
		: public cpp_object<Parser>
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

		Parser(jobject jobj)
		: cpp_object<Parser>(jobj)
		{
		}

		void setLocale(local_ref< java::util::Locale > const&);
		void setEntityResolver(local_ref< org::xml::sax::EntityResolver > const&);
		void setDTDHandler(local_ref< org::xml::sax::DTDHandler > const&);
		void setDocumentHandler(local_ref< org::xml::sax::DocumentHandler > const&);
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const&);
		void parse(local_ref< org::xml::sax::InputSource > const&);
		void parse(local_ref< java::lang::String > const&);
	}; //class Parser

} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_PARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_PARSER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_PARSER_HPP_IMPL

namespace j2cpp {


void org::xml::sax::Parser::setLocale(local_ref< java::util::Locale > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::setEntityResolver(local_ref< org::xml::sax::EntityResolver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::setDTDHandler(local_ref< org::xml::sax::DTDHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::setDocumentHandler(local_ref< org::xml::sax::DocumentHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::parse(local_ref< org::xml::sax::InputSource > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::Parser::parse(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::Parser,"org/xml/sax/Parser")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,0,"setLocale","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,1,"setEntityResolver","(Lorg/xml/sax/EntityResolver;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,2,"setDTDHandler","(Lorg/xml/sax/DTDHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,3,"setDocumentHandler","(Lorg/xml/sax/DocumentHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,4,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,5,"parse","(Lorg/xml/sax/InputSource;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::Parser,6,"parse","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_PARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
