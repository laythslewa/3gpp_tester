/**
 * Unified Data Repository Service API file for policy data
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
 * AccessAndMobilityPolicyDataDocumentApi.h
 *
 *
 */

#ifndef AccessAndMobilityPolicyDataDocumentApi_H_
#define AccessAndMobilityPolicyDataDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AmPolicyData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AccessAndMobilityPolicyDataDocumentApi {
public:
  AccessAndMobilityPolicyDataDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AccessAndMobilityPolicyDataDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void read_access_and_mobility_policy_data_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void access_and_mobility_policy_data_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieves the access and mobility policy data for a subscriber
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  virtual void read_access_and_mobility_policy_data(
      const std::string &ueId, Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AccessAndMobilityPolicyDataDocumentApi_H_ */
