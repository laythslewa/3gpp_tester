/**
 * Nudm_PP
 * Nudm Parameter Provision Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SubscriptionDataUpdateApi.h
 *
 *
 */

#ifndef SubscriptionDataUpdateApi_H_
#define SubscriptionDataUpdateApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AnyOfstringstring.h"
#include "PatchResult.h"
#include "PpData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SubscriptionDataUpdateApi {
public:
  SubscriptionDataUpdateApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubscriptionDataUpdateApi() {}
  void init();

  const std::string base = "/nudm-pp/v1";

private:
  void setupRoutes();

  void update_handler(const Pistache::Rest::Request &request,
                      Pistache::Http::ResponseWriter response);
  void subscription_data_update_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// provision parameters
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  /// <param name="ppData"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void update(const AnyOfstringstring &ueId, const PpData &ppData,
                      const Pistache::Optional<std::string> &supportedFeatures,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SubscriptionDataUpdateApi_H_ */