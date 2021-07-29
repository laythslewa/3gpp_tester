/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Ipv4AddressRange.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Ipv4AddressRange::Ipv4AddressRange() {
  m_Start = "";
  m_StartIsSet = false;
  m_End = "";
  m_EndIsSet = false;
}

Ipv4AddressRange::~Ipv4AddressRange() {}

void Ipv4AddressRange::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const Ipv4AddressRange &o) {
  j = nlohmann::json();
  if (o.startIsSet())
    j["start"] = o.m_Start;
  if (o.endIsSet())
    j["end"] = o.m_End;
}

void from_json(const nlohmann::json &j, Ipv4AddressRange &o) {
  if (j.find("start") != j.end()) {
    j.at("start").get_to(o.m_Start);
    o.m_StartIsSet = true;
  }
  if (j.find("end") != j.end()) {
    j.at("end").get_to(o.m_End);
    o.m_EndIsSet = true;
  }
}

std::string Ipv4AddressRange::getStart() const { return m_Start; }
void Ipv4AddressRange::setStart(std::string const &value) {
  m_Start = value;
  m_StartIsSet = true;
}
bool Ipv4AddressRange::startIsSet() const { return m_StartIsSet; }
void Ipv4AddressRange::unsetStart() { m_StartIsSet = false; }
std::string Ipv4AddressRange::getEnd() const { return m_End; }
void Ipv4AddressRange::setEnd(std::string const &value) {
  m_End = value;
  m_EndIsSet = true;
}
bool Ipv4AddressRange::endIsSet() const { return m_EndIsSet; }
void Ipv4AddressRange::unsetEnd() { m_EndIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org