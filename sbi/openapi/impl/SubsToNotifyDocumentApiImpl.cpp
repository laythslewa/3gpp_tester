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

#include "SubsToNotifyDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SubsToNotifyDocumentApiImpl::SubsToNotifyDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : SubsToNotifyDocumentApi(rtr) {}

void SubsToNotifyDocumentApiImpl::modifysubscription_data_subscription(
    const std::string &subsId, const std::vector<PatchItem> &patchItem,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SubsToNotifyDocumentApiImpl::query_subscription_data_subscriptions(
    const std::string &subsId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SubsToNotifyDocumentApiImpl::removesubscription_data_subscriptions(
    const std::string &subsId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
