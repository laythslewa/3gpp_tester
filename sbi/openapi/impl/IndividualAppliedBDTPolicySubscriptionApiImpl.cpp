/**
 * 3gpp-applying-bdt-policy
 * API for applying BDT policy © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualAppliedBDTPolicySubscriptionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualAppliedBDTPolicySubscriptionApiImpl::
    IndividualAppliedBDTPolicySubscriptionApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualAppliedBDTPolicySubscriptionApi(rtr) {}

void IndividualAppliedBDTPolicySubscriptionApiImpl::
    af_id_subscriptions_subscription_id_delete(
        const std::string &afId, const std::string &subscriptionId,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualAppliedBDTPolicySubscriptionApiImpl::
    af_id_subscriptions_subscription_id_get(
        const std::string &afId, const std::string &subscriptionId,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualAppliedBDTPolicySubscriptionApiImpl::
    af_id_subscriptions_subscription_id_patch(
        const std::string &afId, const std::string &subscriptionId,
        const AppliedBdtPolicyPatch &appliedBdtPolicyPatch,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
