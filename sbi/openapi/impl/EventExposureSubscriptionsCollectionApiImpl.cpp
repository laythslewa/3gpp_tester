/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EventExposureSubscriptionsCollectionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

EventExposureSubscriptionsCollectionApiImpl::
    EventExposureSubscriptionsCollectionApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : EventExposureSubscriptionsCollectionApi(rtr) {}

void EventExposureSubscriptionsCollectionApiImpl::create_ee_subscriptions(
    const std::string &ueId, const EeSubscription &eeSubscription,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void EventExposureSubscriptionsCollectionApiImpl::queryeesubscriptions(
    const std::string &ueId,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org