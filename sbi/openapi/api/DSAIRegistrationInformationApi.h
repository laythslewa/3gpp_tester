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
 * DSAIRegistrationInformationApi.h
 *
 *
 */

#ifndef DSAIRegistrationInformationApi_H_
#define DSAIRegistrationInformationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "DsaiTagInformation.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DSAIRegistrationInformationApi {
public:
  DSAIRegistrationInformationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~DSAIRegistrationInformationApi() {}
  void init();

  const std::string base = "/nhss-ims-sdm/v1";

private:
  void setupRoutes();

  void get_dsai_info_handler(const Pistache::Rest::Request &request,
                             Pistache::Http::ResponseWriter response);
  void dsai_registration_information_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve the DSAI information associated to an Application Server
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="imsUeId">IMS Identity</param>
  /// <param name="applicationServerName">SIP URI of the Application Server
  /// Name</param> <param name="dsaiTag">The requested instance of Dynamic
  /// Service Activation Info (optional, default to &quot;&quot;)</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void
  get_dsai_info(const std::string &imsUeId,
                const Pistache::Optional<std::string> &applicationServerName,
                const Pistache::Optional<std::string> &dsaiTag,
                const Pistache::Optional<std::string> &supportedFeatures,
                Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DSAIRegistrationInformationApi_H_ */