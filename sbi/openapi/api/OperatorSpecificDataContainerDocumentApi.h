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
 * OperatorSpecificDataContainerDocumentApi.h
 *
 *
 */

#ifndef OperatorSpecificDataContainerDocumentApi_H_
#define OperatorSpecificDataContainerDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "OperatorSpecificDataContainer.h"
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

class OperatorSpecificDataContainerDocumentApi {
public:
  OperatorSpecificDataContainerDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~OperatorSpecificDataContainerDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void modify_oper_spec_data_handler(const Pistache::Rest::Request &request,
                                     Pistache::Http::ResponseWriter response);
  void query_oper_spec_data_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response);
  void operator_specific_data_container_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// To modify operator specific data of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="patchItem"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void modify_oper_spec_data(
      const std::string &ueId, const std::vector<PatchItem> &patchItem,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Retrieves the operator specific data of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="fields">attributes to be retrieved (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param> <param name="ifNoneMatch">Validator for conditional
  /// requests, as described in RFC 7232, 3.2 (optional, default to
  /// &quot;&quot;)</param> <param name="ifModifiedSince">Validator for
  /// conditional requests, as described in RFC 7232, 3.3 (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_oper_spec_data(
      const std::string &ueId,
      const Pistache::Optional<std::vector<std::string>> &fields,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* OperatorSpecificDataContainerDocumentApi_H_ */