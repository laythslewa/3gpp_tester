/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringEventAPISubscriptionLevelPUTOperationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

MonitoringEventAPISubscriptionLevelPUTOperationApiImpl::
    MonitoringEventAPISubscriptionLevelPUTOperationApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : MonitoringEventAPISubscriptionLevelPUTOperationApi(rtr) {}

void MonitoringEventAPISubscriptionLevelPUTOperationApiImpl::
    scs_as_id_subscriptions_subscription_id_put(
        const std::string &scsAsId, const std::string &subscriptionId,
        const MonitoringEventSubscription &monitoringEventSubscription,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org