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
 * RegistrationStatusRetrievalApi.h
 *
 *
 */

#ifndef RegistrationStatusRetrievalApi_H_
#define RegistrationStatusRetrievalApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ImsRegistrationStatus.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RegistrationStatusRetrievalApi {
public:
  RegistrationStatusRetrievalApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~RegistrationStatusRetrievalApi() {}
  void init();

  const std::string base = "/nhss-ims-sdm/v1";

private:
  void setupRoutes();

  void get_registration_status_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void registration_status_retrieval_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve the registration status of a user
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="imsUeId">IMS Identity</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void get_registration_status(
      const std::string &imsUeId,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RegistrationStatusRetrievalApi_H_ */