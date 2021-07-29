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

#include "SubsToNotifyCollectionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SubsToNotifyCollectionApiImpl::SubsToNotifyCollectionApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : SubsToNotifyCollectionApi(rtr) {}

void SubsToNotifyCollectionApiImpl::query_subs_to_notify(
    const Pistache::Optional<std::string> &ueId,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SubsToNotifyCollectionApiImpl::
    remove_multiple_subscription_data_subscriptions(
        const Pistache::Optional<std::string> &ueId,
        const Pistache::Optional<std::string> &nfInstanceId,
        const Pistache::Optional<bool> &deleteAllNfs,
        const Pistache::Optional<bool> &implicitUnsubscribeIndication,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SubsToNotifyCollectionApiImpl::subscription_data_subscriptions(
    const SubscriptionDataSubscriptions &subscriptionDataSubscriptions,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
