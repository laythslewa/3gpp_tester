/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TrafficInfluenceSubscriptionApi.h
 *
 *
 */

#ifndef TrafficInfluenceSubscriptionApi_H_
#define TrafficInfluenceSubscriptionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "TrafficInfluSub.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class TrafficInfluenceSubscriptionApi {
public:
  TrafficInfluenceSubscriptionApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~TrafficInfluenceSubscriptionApi() {}
  void init();

  const std::string base = "/3gpp-traffic-influence/v1";

private:
  void setupRoutes();

  void af_id_subscriptions_get_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void
  af_id_subscriptions_post_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void traffic_influence_subscription_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// read all of the active subscriptions for the AF
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  virtual void
  af_id_subscriptions_get(const std::string &afId,
                          Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Creates a new subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="trafficInfluSub">Request to create a new subscription
  /// resource</param>
  virtual void
  af_id_subscriptions_post(const std::string &afId,
                           const TrafficInfluSub &trafficInfluSub,
                           Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TrafficInfluenceSubscriptionApi_H_ */