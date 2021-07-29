/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RetrieveData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RetrieveData::RetrieveData() {
  m_SmallDataRateStatusReq = false;
  m_SmallDataRateStatusReqIsSet = false;
}

RetrieveData::~RetrieveData() {}

void RetrieveData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const RetrieveData &o) {
  j = nlohmann::json();
  if (o.smallDataRateStatusReqIsSet())
    j["smallDataRateStatusReq"] = o.m_SmallDataRateStatusReq;
}

void from_json(const nlohmann::json &j, RetrieveData &o) {
  if (j.find("smallDataRateStatusReq") != j.end()) {
    j.at("smallDataRateStatusReq").get_to(o.m_SmallDataRateStatusReq);
    o.m_SmallDataRateStatusReqIsSet = true;
  }
}

bool RetrieveData::isSmallDataRateStatusReq() const {
  return m_SmallDataRateStatusReq;
}
void RetrieveData::setSmallDataRateStatusReq(bool const value) {
  m_SmallDataRateStatusReq = value;
  m_SmallDataRateStatusReqIsSet = true;
}
bool RetrieveData::smallDataRateStatusReqIsSet() const {
  return m_SmallDataRateStatusReqIsSet;
}
void RetrieveData::unsetSmallDataRateStatusReq() {
  m_SmallDataRateStatusReqIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org
