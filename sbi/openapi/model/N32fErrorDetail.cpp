/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N32fErrorDetail.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

N32fErrorDetail::N32fErrorDetail() { m_Attribute = ""; }

N32fErrorDetail::~N32fErrorDetail() {}

void N32fErrorDetail::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const N32fErrorDetail &o) {
  j = nlohmann::json();
  j["attribute"] = o.m_Attribute;
  j["msgReconstructFailReason"] = o.m_MsgReconstructFailReason;
}

void from_json(const nlohmann::json &j, N32fErrorDetail &o) {
  j.at("attribute").get_to(o.m_Attribute);
  j.at("msgReconstructFailReason").get_to(o.m_MsgReconstructFailReason);
}

std::string N32fErrorDetail::getAttribute() const { return m_Attribute; }
void N32fErrorDetail::setAttribute(std::string const &value) {
  m_Attribute = value;
}
FailureReason N32fErrorDetail::getMsgReconstructFailReason() const {
  return m_MsgReconstructFailReason;
}
void N32fErrorDetail::setMsgReconstructFailReason(FailureReason const &value) {
  m_MsgReconstructFailReason = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org