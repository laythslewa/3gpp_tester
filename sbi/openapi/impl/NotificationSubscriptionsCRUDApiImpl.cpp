/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NotificationSubscriptionsCRUDApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

NotificationSubscriptionsCRUDApiImpl::NotificationSubscriptionsCRUDApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : NotificationSubscriptionsCRUDApi(rtr) {}

void NotificationSubscriptionsCRUDApiImpl::get_notification_subscriptions(
    const std::string &realmId, const std::string &storageId,
    const Pistache::Optional<int32_t> &limitRange,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org