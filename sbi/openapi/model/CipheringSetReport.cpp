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

#include "CipheringSetReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

CipheringSetReport::CipheringSetReport() { m_CipheringSetID = 0; }

CipheringSetReport::~CipheringSetReport() {}

void CipheringSetReport::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const CipheringSetReport &o) {
  j = nlohmann::json();
  j["cipheringSetID"] = o.m_CipheringSetID;
  j["storageOutcome"] = o.m_StorageOutcome;
}

void from_json(const nlohmann::json &j, CipheringSetReport &o) {
  j.at("cipheringSetID").get_to(o.m_CipheringSetID);
  j.at("storageOutcome").get_to(o.m_StorageOutcome);
}

int32_t CipheringSetReport::getCipheringSetID() const {
  return m_CipheringSetID;
}
void CipheringSetReport::setCipheringSetID(int32_t const value) {
  m_CipheringSetID = value;
}
StorageOutcome CipheringSetReport::getStorageOutcome() const {
  return m_StorageOutcome;
}
void CipheringSetReport::setStorageOutcome(StorageOutcome const &value) {
  m_StorageOutcome = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org