/**
 * Nudm_NIDDAU
 * Nudm NIDD Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthorizeTheNIDDConfigurationRequestApi.h
 *
 *
 */

#ifndef AuthorizeTheNIDDConfigurationRequestApi_H_
#define AuthorizeTheNIDDConfigurationRequestApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AuthorizationData.h"
#include "AuthorizationInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AuthorizeTheNIDDConfigurationRequestApi {
public:
  AuthorizeTheNIDDConfigurationRequestApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AuthorizeTheNIDDConfigurationRequestApi() {}
  void init();

  const std::string base = "/nudm-niddau/v1";

private:
  void setupRoutes();

  void authorize_nidd_data_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void authorize_the_nidd_configuration_request_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Authorize the NIDD configuration request.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueIdentity">Represents the scope of the UE for which the NIDD
  /// configuration are authorized. Contains the GPSI of the user or the
  /// external group ID.</param> <param name="authorizationInfo"></param>
  virtual void
  authorize_nidd_data(const std::string &ueIdentity,
                      const AuthorizationInfo &authorizationInfo,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthorizeTheNIDDConfigurationRequestApi_H_ */