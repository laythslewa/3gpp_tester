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
 * ParameterProvisionDocumentApi.h
 *
 *
 */

#ifndef ParameterProvisionDocumentApi_H_
#define ParameterProvisionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PpData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ParameterProvisionDocumentApi {
public:
  ParameterProvisionDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ParameterProvisionDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void getpp_data_handler(const Pistache::Rest::Request &request,
                          Pistache::Http::ResponseWriter response);
  void parameter_provision_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Read the profile of a given UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">pp data for a UE</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param> <param name="ifNoneMatch">Validator for conditional
  /// requests, as described in RFC 7232, 3.2 (optional, default to
  /// &quot;&quot;)</param> <param name="ifModifiedSince">Validator for
  /// conditional requests, as described in RFC 7232, 3.3 (optional, default to
  /// &quot;&quot;)</param>
  virtual void getpp_data(
      const std::string &ueId,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ParameterProvisionDocumentApi_H_ */
