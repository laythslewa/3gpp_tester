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
 * AuthenticationStatusDocumentApi.h
 *
 *
 */

#ifndef AuthenticationStatusDocumentApi_H_
#define AuthenticationStatusDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AuthEvent.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AuthenticationStatusDocumentApi {
public:
  AuthenticationStatusDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AuthenticationStatusDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void
  create_authentication_status_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void authentication_status_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// To store the Authentication Status data of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="authEvent"></param>
  virtual void
  create_authentication_status(const std::string &ueId,
                               const AuthEvent &authEvent,
                               Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthenticationStatusDocumentApi_H_ */
