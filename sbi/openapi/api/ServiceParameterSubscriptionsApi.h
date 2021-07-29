/**
 * 3gpp-service-parameter
 * API for AF service paramter © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceParameterSubscriptionsApi.h
 *
 *
 */

#ifndef ServiceParameterSubscriptionsApi_H_
#define ServiceParameterSubscriptionsApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "ServiceParameterData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ServiceParameterSubscriptionsApi {
public:
  ServiceParameterSubscriptionsApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ServiceParameterSubscriptionsApi() {}
  void init();

  const std::string base = "/3gpp-service-parameter/v1";

private:
  void setupRoutes();

  void af_id_subscriptions_get_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void
  af_id_subscriptions_post_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void service_parameter_subscriptions_api_default_handler(
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
  /// <param name="serviceParameterData">Request to create a new subscription
  /// resource</param>
  virtual void
  af_id_subscriptions_post(const std::string &afId,
                           const ServiceParameterData &serviceParameterData,
                           Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceParameterSubscriptionsApi_H_ */
