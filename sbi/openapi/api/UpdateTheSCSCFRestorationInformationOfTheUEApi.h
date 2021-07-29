/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UpdateTheSCSCFRestorationInformationOfTheUEApi.h
 *
 *
 */

#ifndef UpdateTheSCSCFRestorationInformationOfTheUEApi_H_
#define UpdateTheSCSCFRestorationInformationOfTheUEApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "ScscfRestorationInfoRequest.h"
#include "ScscfRestorationInfoResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UpdateTheSCSCFRestorationInformationOfTheUEApi {
public:
  UpdateTheSCSCFRestorationInformationOfTheUEApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~UpdateTheSCSCFRestorationInformationOfTheUEApi() {}
  void init();

  const std::string base = "/nhss-ims-uecm/v1";

private:
  void setupRoutes();

  void update_scscf_restoration_info_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void update_the_scscf_restoration_information_of_the_ue_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Update the S-CSCF restoration information of the UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="impu">Public identity of the user.</param>
  /// <param name="scscfRestorationInfoRequest"></param>
  virtual void update_scscf_restoration_info(
      const std::string &impu,
      const ScscfRestorationInfoRequest &scscfRestorationInfoRequest,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UpdateTheSCSCFRestorationInformationOfTheUEApi_H_ */
