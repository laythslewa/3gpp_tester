/**
 * 3gpp-acs-pp
 * API for 5G ACS Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ACSConfigurationSubscriptionsApi.h
 *
 *
 */

#ifndef ACSConfigurationSubscriptionsApi_H_
#define ACSConfigurationSubscriptionsApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AcsConfigurationData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ACSConfigurationSubscriptionsApi {
public:
  ACSConfigurationSubscriptionsApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ACSConfigurationSubscriptionsApi() {}
  void init();

  const std::string base = "/3gpp-acs-pp/v1";

private:
  void setupRoutes();

  void af_id_subscriptions_get_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void
  af_id_subscriptions_post_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void acs_configuration_subscriptions_api_default_handler(
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
  /// <param name="acsConfigurationData">new subscription creation</param>
  virtual void
  af_id_subscriptions_post(const std::string &afId,
                           const AcsConfigurationData &acsConfigurationData,
                           Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ACSConfigurationSubscriptionsApi_H_ */
