/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthorizeImsIdentitiesApi.h
 *
 *
 */

#ifndef AuthorizeImsIdentitiesApi_H_
#define AuthorizeImsIdentitiesApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AuthorizationRequest.h"
#include "AuthorizationResponse.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AuthorizeImsIdentitiesApi {
public:
  AuthorizeImsIdentitiesApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AuthorizeImsIdentitiesApi() {}
  void init();

  const std::string base = "/nhss-ims-uecm/v1";

private:
  void setupRoutes();

  void authorize_handler(const Pistache::Rest::Request &request,
                         Pistache::Http::ResponseWriter response);
  void authorize_ims_identities_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Authorize IMS Identities to register in the network or establish
  /// multimedia sessions and return CSCF location if it is stored
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="impu">Public identity of the user.</param>
  /// <param name="authorizationRequest"></param>
  virtual void authorize(const std::string &impu,
                         const AuthorizationRequest &authorizationRequest,
                         Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthorizeImsIdentitiesApi_H_ */