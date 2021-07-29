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
 * ContextDataDocumentApi.h
 *
 *
 */

#ifndef ContextDataDocumentApi_H_
#define ContextDataDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ContextDataSetName.h"
#include "ContextDataSets.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ContextDataDocumentApi {
public:
  ContextDataDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ContextDataDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void query_context_data_handler(const Pistache::Rest::Request &request,
                                  Pistache::Http::ResponseWriter response);
  void context_data_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve multiple context data sets of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="contextDatasetNames">List of context dataset names</param>
  virtual void
  query_context_data(const std::string &ueId,
                     const Pistache::Optional<std::vector<ContextDataSetName>>
                         &contextDatasetNames,
                     Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ContextDataDocumentApi_H_ */
