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

/*
 * MonitoringEventAPISubscriptionLevelPUTOperationApiImpl.h
 *
 *
 */

#ifndef MONITORING_EVENT_API_SUBSCRIPTION_LEVEL_PUT_OPERATION_API_IMPL_H_
#define MONITORING_EVENT_API_SUBSCRIPTION_LEVEL_PUT_OPERATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <MonitoringEventAPISubscriptionLevelPUTOperationApi.h>

#include <pistache/optional.h>

#include "MonitoringEventSubscription.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class MonitoringEventAPISubscriptionLevelPUTOperationApiImpl
    : public org::openapitools::server::api::
          MonitoringEventAPISubscriptionLevelPUTOperationApi {
public:
  MonitoringEventAPISubscriptionLevelPUTOperationApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~MonitoringEventAPISubscriptionLevelPUTOperationApiImpl() {}

  void scs_as_id_subscriptions_subscription_id_put(
      const std::string &scsAsId, const std::string &subscriptionId,
      const MonitoringEventSubscription &monitoringEventSubscription,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif