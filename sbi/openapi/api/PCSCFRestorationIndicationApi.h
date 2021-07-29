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
 * PCSCFRestorationIndicationApi.h
 *
 *
 */

#ifndef PCSCFRestorationIndicationApi_H_
#define PCSCFRestorationIndicationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PcscfRestorationRequestData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class PCSCFRestorationIndicationApi {
public:
  PCSCFRestorationIndicationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~PCSCFRestorationIndicationApi() {}
  void init();

  const std::string base = "/npcf-policyauthorization/v1";

private:
  void setupRoutes();

  void pcscf_restoration_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void pcscf_restoration_indication_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Indicates P-CSCF restoration and does not create an Individual Application
  /// Session Context
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pcscfRestorationRequestData">PCSCF Restoration
  /// Indication</param>
  virtual void pcscf_restoration(
      const PcscfRestorationRequestData &pcscfRestorationRequestData,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PCSCFRestorationIndicationApi_H_ */
