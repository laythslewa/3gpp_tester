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

#include "ReachabilitySubscriptionDeletionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ReachabilitySubscriptionDeletionApiImpl::
    ReachabilitySubscriptionDeletionApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : ReachabilitySubscriptionDeletionApi(rtr) {}

void ReachabilitySubscriptionDeletionApiImpl::ue_reach_unsubscribe(
    const std::string &imsUeId, const std::string &subscriptionId,
    const Pistache::Optional<std::string> &privateIdentity,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
