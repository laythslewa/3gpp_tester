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
 * MonitoringEventAPISubscriptionLevelDELETEOperationApi.h
 *
 *
 */

#ifndef MonitoringEventAPISubscriptionLevelDELETEOperationApi_H_
#define MonitoringEventAPISubscriptionLevelDELETEOperationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "MonitoringEventReport.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class MonitoringEventAPISubscriptionLevelDELETEOperationApi {
public:
  MonitoringEventAPISubscriptionLevelDELETEOperationApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~MonitoringEventAPISubscriptionLevelDELETEOperationApi() {}
  void init();

  const std::string base = "/3gpp-monitoring-event/v1";

private:
  void setupRoutes();

  void scs_as_id_subscriptions_subscription_id_delete_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  monitoring_event_api_subscription_level_delete_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Deletes an already existing monitoring event subscription
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of the SCS/AS</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param>
  virtual void scs_as_id_subscriptions_subscription_id_delete(
      const std::string &scsAsId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MonitoringEventAPISubscriptionLevelDELETEOperationApi_H_ */
