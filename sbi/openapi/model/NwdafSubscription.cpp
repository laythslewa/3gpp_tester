/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NwdafSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

NwdafSubscription::NwdafSubscription() { m_NwdafEvtSubsServiceUri = ""; }

NwdafSubscription::~NwdafSubscription() {}

void NwdafSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const NwdafSubscription &o) {
  j = nlohmann::json();
  j["nwdafEvtSubsServiceUri"] = o.m_NwdafEvtSubsServiceUri;
  j["nwdafEventsSubscription"] = o.m_NwdafEventsSubscription;
}

void from_json(const nlohmann::json &j, NwdafSubscription &o) {
  j.at("nwdafEvtSubsServiceUri").get_to(o.m_NwdafEvtSubsServiceUri);
  j.at("nwdafEventsSubscription").get_to(o.m_NwdafEventsSubscription);
}

std::string NwdafSubscription::getNwdafEvtSubsServiceUri() const {
  return m_NwdafEvtSubsServiceUri;
}
void NwdafSubscription::setNwdafEvtSubsServiceUri(std::string const &value) {
  m_NwdafEvtSubsServiceUri = value;
}
NnwdafEventsSubscription NwdafSubscription::getNwdafEventsSubscription() const {
  return m_NwdafEventsSubscription;
}
void NwdafSubscription::setNwdafEventsSubscription(
    NnwdafEventsSubscription const &value) {
  m_NwdafEventsSubscription = value;
}

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org