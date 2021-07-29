/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
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
 * ApplicationSessionsCollectionApi.h
 *
 *
 */

#ifndef ApplicationSessionsCollectionApi_H_
#define ApplicationSessionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AppSessionContext.h"
#include "ExtendedProblemDetails.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ApplicationSessionsCollectionApi {
public:
  ApplicationSessionsCollectionApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ApplicationSessionsCollectionApi() {}
  void init();

  const std::string base = "/npcf-policyauthorization/v1";

private:
  void setupRoutes();

  void post_app_sessions_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void application_sessions_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Creates a new Individual Application Session Context resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="appSessionContext">Contains the information for the creation
  /// the resource</param>
  virtual void post_app_sessions(const AppSessionContext &appSessionContext,
                                 Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ApplicationSessionsCollectionApi_H_ */
