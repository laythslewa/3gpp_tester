/**
 * Nhss_SDM
 * HSS Subscriber Data Management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UEContextInPGWDataRetrievalApi.h
 *
 *
 */

#ifndef UEContextInPGWDataRetrievalApi_H_
#define UEContextInPGWDataRetrievalApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "UeContextInPgwData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UEContextInPGWDataRetrievalApi {
public:
  UEContextInPGWDataRetrievalApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~UEContextInPGWDataRetrievalApi() {}
  void init();

  const std::string base = "/nhss-sdm/v1";

private:
  void setupRoutes();

  void get_ue_ctx_in_pgw_data_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void ue_context_in_pgw_data_retrieval_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve the UE Context In PGW
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  virtual void
  get_ue_ctx_in_pgw_data(const std::string &ueId,
                         Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UEContextInPGWDataRetrievalApi_H_ */