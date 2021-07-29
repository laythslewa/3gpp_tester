/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReachabilitySubscriptionModificationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ReachabilitySubscriptionModificationApiImpl::
    ReachabilitySubscriptionModificationApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : ReachabilitySubscriptionModificationApi(rtr) {}

void ReachabilitySubscriptionModificationApiImpl::ue_reach_subs_modify(
    const std::string &imsUeId, const std::string &subscriptionId,
    const std::vector<PatchItem> &patchItem,
    const Pistache::Optional<std::string> &privateIdentity,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
