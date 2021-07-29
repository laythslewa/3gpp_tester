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
 * AMFRegistrationFor3GPPAccessApi.h
 *
 *
 */

#ifndef AMFRegistrationFor3GPPAccessApi_H_
#define AMFRegistrationFor3GPPAccessApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "Amf3GppAccessRegistration.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AMFRegistrationFor3GPPAccessApi {
public:
  AMFRegistrationFor3GPPAccessApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AMFRegistrationFor3GPPAccessApi() {}
  void init();

  const std::string base = "/nudm-uecm/v1";

private:
  void setupRoutes();

  void 3_gpp_registration_handler(const Pistache::Rest::Request &request,
                                  Pistache::Http::ResponseWriter response);
  void amf_registration_for3_gpp_access_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// register as AMF for 3GPP access
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  /// <param name="amf3GppAccessRegistration"></param>
  virtual void 3_gpp_registration(
      const std::string &ueId,
      const Amf3GppAccessRegistration &amf3GppAccessRegistration,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AMFRegistrationFor3GPPAccessApi_H_ */
