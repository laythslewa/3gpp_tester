/**
 * Npcf_AMPolicyAuthorization Service API
 * PCF Access and Mobility Policy Authorization Service. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AMPolicyEventsSubscriptionDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AMPolicyEventsSubscriptionDocumentApiImpl::
    AMPolicyEventsSubscriptionDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : AMPolicyEventsSubscriptionDocumentApi(rtr) {}

void AMPolicyEventsSubscriptionDocumentApiImpl::delete_am_events_subsc(
    const std::string &appAmContextId,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AMPolicyEventsSubscriptionDocumentApiImpl::update_am_events_subsc(
    const std::string &appAmContextId,
    const AmEventsSubscData &amEventsSubscData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
