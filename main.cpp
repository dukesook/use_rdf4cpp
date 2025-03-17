#include <iostream>
#include <rdf4cpp/rdf.hpp>
#include <rdf4cpp/rdf/parser/RDFFileParser.hpp>

// #include <rdf4cpp.hpp>
// #include <rdf4cpp/parser/RDFFileParser.hpp>

using namespace std;
int main() {
  cout << "Hello, World!" << endl;
  cout << "use rdf4cpp" << endl;

  using namespace rdf4cpp::rdf;
  Literal a = Literal::make_typed_from_value<datatypes::xsd::Double>(1.2);
  Literal b =
      Literal::make_typed("1.1", IRI{"http://www.w3.org/2001/XMLSchema#float"});
  Literal r = a + b;
  std::cout << r.lexical_form() << endl << endl;

  // read file
  for (const auto &v :
       rdf4cpp::rdf::parser::RDFFileParser{"./RDFFileParser_simple.ttl"}) {
    if (v.has_value()) // check if parser returns a successful read value
      std::cout << v.value() << "\n";
    else // or an error
      std::cout << v.error() << "\n";
  }
}

// conan install . --build=missing