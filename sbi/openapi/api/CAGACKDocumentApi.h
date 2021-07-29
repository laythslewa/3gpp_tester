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
 * CAGACKDocumentApi.h
 *
 *
 */

#ifndef CAGACKDocumentApi_H_
#define CAGACKDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "CagAckData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class CAGACKDocumentApi {
public:
  CAGACKDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~CAGACKDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void query_cag_ack_handler(const Pistache::Rest::Request &request,
                             Pistache::Http::ResponseWriter response);
  void
  cagack_document_api_default_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieves the CAG acknowledgement information of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void
  query_cag_ack(const std::string &ueId,
                const Pistache::Optional<std::string> &supportedFeatures,
                Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CAGACKDocumentApi_H_ */
