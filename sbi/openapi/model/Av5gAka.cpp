/**
 * AUSF API
 * AUSF UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Av5gAka.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Av5gAka::Av5gAka() {
  m_Rand = "";
  m_HxresStar = "";
  m_Autn = "";
}

Av5gAka::~Av5gAka() {}

void Av5gAka::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Av5gAka &o) {
  j = nlohmann::json();
  j["rand"] = o.m_Rand;
  j["hxresStar"] = o.m_HxresStar;
  j["autn"] = o.m_Autn;
}

void from_json(const nlohmann::json &j, Av5gAka &o) {
  j.at("rand").get_to(o.m_Rand);
  j.at("hxresStar").get_to(o.m_HxresStar);
  j.at("autn").get_to(o.m_Autn);
}

std::string Av5gAka::getRand() const { return m_Rand; }
void Av5gAka::setRand(std::string const &value) { m_Rand = value; }
std::string Av5gAka::getHxresStar() const { return m_HxresStar; }
void Av5gAka::setHxresStar(std::string const &value) { m_HxresStar = value; }
std::string Av5gAka::getAutn() const { return m_Autn; }
void Av5gAka::setAutn(std::string const &value) { m_Autn = value; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org