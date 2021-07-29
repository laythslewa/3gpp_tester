/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeleteSMSRegistrationInformationApi.h
 *
 *
 */

#ifndef DeleteSMSRegistrationInformationApi_H_
#define DeleteSMSRegistrationInformationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DeleteSMSRegistrationInformationApi {
public:
  DeleteSMSRegistrationInformationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~DeleteSMSRegistrationInformationApi() {}
  void init();

  const std::string base = "/nhss-ims-sdm/v1";

private:
  void setupRoutes();

  void
  delete_sms_registration_info_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void delete_sms_registration_information_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// delete the SMS registration information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="imsUeId">Identifier of the UE</param>
  /// <param name="privateIdentity">IMS Private Identity (optional, default to
  /// &quot;&quot;)</param>
  virtual void delete_sms_registration_info(
      const std::string &imsUeId,
      const Pistache::Optional<std::string> &privateIdentity,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeleteSMSRegistrationInformationApi_H_ */
