/**
 * LMF Broadcast
 * LMF Broadcast Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CipherResponseData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CipherResponseData::CipherResponseData() {}

CipherResponseData::~CipherResponseData() {}

void CipherResponseData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CipherResponseData &o) {
  j = nlohmann::json();
  j["dataAvailability"] = o.m_DataAvailability;
}

void from_json(const nlohmann::json &j, CipherResponseData &o) {
  j.at("dataAvailability").get_to(o.m_DataAvailability);
}

DataAvailability CipherResponseData::getDataAvailability() const {
  return m_DataAvailability;
}
void CipherResponseData::setDataAvailability(DataAvailability const &value) {
  m_DataAvailability = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
