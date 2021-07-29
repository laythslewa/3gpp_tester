/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * StoredSearchDocumentApi.h
 *
 *
 */

#ifndef StoredSearchDocumentApi_H_
#define StoredSearchDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "RedirectResponse.h"
#include "StoredSearchResult.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class StoredSearchDocumentApi {
public:
  StoredSearchDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~StoredSearchDocumentApi() {}
  void init();

  const std::string base = "/nnrf-disc/v1";

private:
  void setupRoutes();

  void retrieve_stored_search_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void stored_search_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  ///
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="searchId">Id of a stored search</param>
  /// <param name="acceptEncoding">Accept-Encoding, described in IETF RFC 7231
  /// (optional, default to &quot;&quot;)</param>
  virtual void retrieve_stored_search(
      const std::string &searchId,
      const Pistache::Optional<Pistache::Http::Header::Raw> &acceptEncoding,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* StoredSearchDocumentApi_H_ */