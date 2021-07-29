/**
 * 3gpp-akma
 * API for Naanf_AKMA. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RetrieveTheAKMAApplicationKeyMaterialCollectionApi.h
 *
 *
 */

#ifndef RetrieveTheAKMAApplicationKeyMaterialCollectionApi_H_
#define RetrieveTheAKMAApplicationKeyMaterialCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AkmaAfKeyData.h"
#include "AkmaAfKeyRequest.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RetrieveTheAKMAApplicationKeyMaterialCollectionApi {
public:
  RetrieveTheAKMAApplicationKeyMaterialCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~RetrieveTheAKMAApplicationKeyMaterialCollectionApi() {}
  void init();

  const std::string base = "/naanf-akma/v1";

private:
  void setupRoutes();

  void
  get_akmaapp_key_material_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void
  retrieve_the_akma_application_key_material_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Request to retrieve AKMA Application Key information.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="akmaAfKeyRequest"></param>
  virtual void
  get_akmaapp_key_material(const AkmaAfKeyRequest &akmaAfKeyRequest,
                           Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RetrieveTheAKMAApplicationKeyMaterialCollectionApi_H_ */
