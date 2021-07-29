/**
 * Unified Data Repository Service API file for Application Data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * InfluenceDataSubscriptionsCollectionApi.h
 *
 *
 */

#ifndef InfluenceDataSubscriptionsCollectionApi_H_
#define InfluenceDataSubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "Snssai.h"
#include "TrafficInfluSub.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class InfluenceDataSubscriptionsCollectionApi {
public:
  InfluenceDataSubscriptionsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~InfluenceDataSubscriptionsCollectionApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void create_individual_influence_data_subscription_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void read_influence_data_subscriptions_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void influence_data_subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create a new Individual Influence Data Subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="trafficInfluSub"></param>
  virtual void create_individual_influence_data_subscription(
      const TrafficInfluSub &trafficInfluSub,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Read Influence Data Subscriptions
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="dnn">Identifies a DNN. (optional, default to
  /// &quot;&quot;)</param> <param name="snssai">Identifies a slice. (optional,
  /// default to Snssai())</param> <param name="internalGroupId">Identifies a
  /// group of users. (optional, default to &quot;&quot;)</param> <param
  /// name="supi">Identifies a user. (optional, default to &quot;&quot;)</param>
  virtual void read_influence_data_subscriptions(
      const Pistache::Optional<std::string> &dnn,
      const Pistache::Optional<Snssai> &snssai,
      const Pistache::Optional<std::string> &internalGroupId,
      const Pistache::Optional<std::string> &supi,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* InfluenceDataSubscriptionsCollectionApi_H_ */