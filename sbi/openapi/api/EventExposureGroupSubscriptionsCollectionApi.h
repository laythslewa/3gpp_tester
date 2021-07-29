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
/*
 * EventExposureGroupSubscriptionsCollectionApi.h
 *
 *
 */

#ifndef EventExposureGroupSubscriptionsCollectionApi_H_
#define EventExposureGroupSubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "EeSubscription.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class EventExposureGroupSubscriptionsCollectionApi {
public:
  EventExposureGroupSubscriptionsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~EventExposureGroupSubscriptionsCollectionApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void create_ee_group_subscriptions_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  query_ee_group_subscriptions_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void event_exposure_group_subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create individual EE subscription for a group of UEs or any UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueGroupId">Group of UEs or any UE</param>
  /// <param name="eeSubscription"></param>
  virtual void
  create_ee_group_subscriptions(const std::string &ueGroupId,
                                const EeSubscription &eeSubscription,
                                Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Retrieves the ee subscriptions of a group of UEs or any UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueGroupId">Group of UEs or any UE</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_ee_group_subscriptions(
      const std::string &ueGroupId,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventExposureGroupSubscriptionsCollectionApi_H_ */
