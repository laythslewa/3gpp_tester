/**
 * Nudm_UECM
 * Nudm Context Management Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi.h
 *
 *
 */

#ifndef ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi_H_
#define ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "Amf3GppAccessRegistrationModification.h"
#include "PatchResult.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi {
public:
  ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi() {}
  void init();

  const std::string base = "/nudm-uecm/v1";

private:
  void setupRoutes();

  void
  update3_gpp_registration_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void
  parameter_update_in_the_amf_registration_for3_gpp_access_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Update a parameter in the AMF registration for 3GPP access
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  /// <param name="amf3GppAccessRegistrationModification"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void update3_gpp_registration(
      const std::string &ueId,
      const Amf3GppAccessRegistrationModification
          &amf3GppAccessRegistrationModification,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ParameterUpdateInTheAMFRegistrationFor3GPPAccessApi_H_ */
