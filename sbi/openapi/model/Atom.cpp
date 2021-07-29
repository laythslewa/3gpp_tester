/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Atom.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Atom::Atom() {
  m_Attr = "";
  m_Negative = false;
  m_NegativeIsSet = false;
}

Atom::~Atom() {}

void Atom::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Atom &o) {
  j = nlohmann::json();
  j["attr"] = o.m_Attr;
  j["value"] = o.m_Value;
  if (o.negativeIsSet())
    j["negative"] = o.m_Negative;
}

void from_json(const nlohmann::json &j, Atom &o) {
  j.at("attr").get_to(o.m_Attr);
  j.at("value").get_to(o.m_Value);
  if (j.find("negative") != j.end()) {
    j.at("negative").get_to(o.m_Negative);
    o.m_NegativeIsSet = true;
  }
}

std::string Atom::getAttr() const { return m_Attr; }
void Atom::setAttr(std::string const &value) { m_Attr = value; }
AnyType Atom::getValue() const { return m_Value; }
void Atom::setValue(AnyType const &value) { m_Value = value; }
bool Atom::isNegative() const { return m_Negative; }
void Atom::setNegative(bool const value) {
  m_Negative = value;
  m_NegativeIsSet = true;
}
bool Atom::negativeIsSet() const { return m_NegativeIsSet; }
void Atom::unsetNegative() { m_NegativeIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org