/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "QosMonitoringInformationRm.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

QosMonitoringInformationRm::QosMonitoringInformationRm() {
  m_RepThreshDl = 0;
  m_RepThreshDlIsSet = false;
  m_RepThreshUl = 0;
  m_RepThreshUlIsSet = false;
  m_RepThreshRp = 0;
  m_RepThreshRpIsSet = false;
}

QosMonitoringInformationRm::~QosMonitoringInformationRm() {}

void QosMonitoringInformationRm::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const QosMonitoringInformationRm &o) {
  j = nlohmann::json();
  if (o.repThreshDlIsSet())
    j["repThreshDl"] = o.m_RepThreshDl;
  if (o.repThreshUlIsSet())
    j["repThreshUl"] = o.m_RepThreshUl;
  if (o.repThreshRpIsSet())
    j["repThreshRp"] = o.m_RepThreshRp;
}

void from_json(const nlohmann::json &j, QosMonitoringInformationRm &o) {
  if (j.find("repThreshDl") != j.end()) {
    j.at("repThreshDl").get_to(o.m_RepThreshDl);
    o.m_RepThreshDlIsSet = true;
  }
  if (j.find("repThreshUl") != j.end()) {
    j.at("repThreshUl").get_to(o.m_RepThreshUl);
    o.m_RepThreshUlIsSet = true;
  }
  if (j.find("repThreshRp") != j.end()) {
    j.at("repThreshRp").get_to(o.m_RepThreshRp);
    o.m_RepThreshRpIsSet = true;
  }
}

int32_t QosMonitoringInformationRm::getRepThreshDl() const {
  return m_RepThreshDl;
}
void QosMonitoringInformationRm::setRepThreshDl(int32_t const value) {
  m_RepThreshDl = value;
  m_RepThreshDlIsSet = true;
}
bool QosMonitoringInformationRm::repThreshDlIsSet() const {
  return m_RepThreshDlIsSet;
}
void QosMonitoringInformationRm::unsetRepThreshDl() {
  m_RepThreshDlIsSet = false;
}
int32_t QosMonitoringInformationRm::getRepThreshUl() const {
  return m_RepThreshUl;
}
void QosMonitoringInformationRm::setRepThreshUl(int32_t const value) {
  m_RepThreshUl = value;
  m_RepThreshUlIsSet = true;
}
bool QosMonitoringInformationRm::repThreshUlIsSet() const {
  return m_RepThreshUlIsSet;
}
void QosMonitoringInformationRm::unsetRepThreshUl() {
  m_RepThreshUlIsSet = false;
}
int32_t QosMonitoringInformationRm::getRepThreshRp() const {
  return m_RepThreshRp;
}
void QosMonitoringInformationRm::setRepThreshRp(int32_t const value) {
  m_RepThreshRp = value;
  m_RepThreshRpIsSet = true;
}
bool QosMonitoringInformationRm::repThreshRpIsSet() const {
  return m_RepThreshRpIsSet;
}
void QosMonitoringInformationRm::unsetRepThreshRp() {
  m_RepThreshRpIsSet = false;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org