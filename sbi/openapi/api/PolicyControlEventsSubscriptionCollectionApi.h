/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PolicyControlEventsSubscriptionCollectionApi.h
 *
 *
 */

#ifndef PolicyControlEventsSubscriptionCollectionApi_H_
#define PolicyControlEventsSubscriptionCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PcEventExposureSubsc.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class PolicyControlEventsSubscriptionCollectionApi {
public:
  PolicyControlEventsSubscriptionCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~PolicyControlEventsSubscriptionCollectionApi() {}
  void init();

  const std::string base = "/npcf-eventexposure/v1";

private:
  void setupRoutes();

  void
  post_pc_event_exposure_subsc_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void policy_control_events_subscription_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Creates a new Individual Policy Control Events Subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pcEventExposureSubsc"></param>
  virtual void
  post_pc_event_exposure_subsc(const PcEventExposureSubsc &pcEventExposureSubsc,
                               Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PolicyControlEventsSubscriptionCollectionApi_H_ */
