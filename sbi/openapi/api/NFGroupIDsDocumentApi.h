/**
 * Nudr_GroupIDmap
 * Unified Data Repository Service for NF-Group ID retrieval. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NFGroupIDsDocumentApi.h
 *
 *
 */

#ifndef NFGroupIDsDocumentApi_H_
#define NFGroupIDsDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "NFType.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NFGroupIDsDocumentApi {
public:
  NFGroupIDsDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~NFGroupIDsDocumentApi() {}
  void init();

  const std::string base = "/nudr-group-id-map/v1";

private:
  void setupRoutes();

  void get_nf_group_i_ds_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void nf_group_i_ds_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieves NF-Group IDs for provided Subscriber and NF types
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfType">Type of NF</param>
  /// <param name="subscriberId">Identifier of the subscriber</param>
  virtual void
  get_nf_group_i_ds(const Pistache::Optional<std::vector<NFType>> &nfType,
                    const Pistache::Optional<std::string> &subscriberId,
                    Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NFGroupIDsDocumentApi_H_ */
