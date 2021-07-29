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
 * AuthenticationSubscriptionDocumentApi.h
 *
 *
 */

#ifndef AuthenticationSubscriptionDocumentApi_H_
#define AuthenticationSubscriptionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PatchItem.h"
#include "PatchResult.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AuthenticationSubscriptionDocumentApi {
public:
  AuthenticationSubscriptionDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AuthenticationSubscriptionDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void modify_authentication_subscription_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void authentication_subscription_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// modify the authentication subscription data of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="patchItem"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void modify_authentication_subscription(
      const std::string &ueId, const std::vector<PatchItem> &patchItem,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthenticationSubscriptionDocumentApi_H_ */