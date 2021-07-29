/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ObtainTheAuthorizationToMonitorForAUEApi.h
 *
 *
 */

#ifndef ObtainTheAuthorizationToMonitorForAUEApi_H_
#define ObtainTheAuthorizationToMonitorForAUEApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "MonitorAuthReqData.h"
#include "MonitorAuthRespData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ObtainTheAuthorizationToMonitorForAUEApi {
public:
  ObtainTheAuthorizationToMonitorForAUEApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ObtainTheAuthorizationToMonitorForAUEApi() {}
  void init();

  const std::string base = "/n5g-ddnmf-disc/v1";

private:
  void setupRoutes();

  void obtain_monitor_auth_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void obtain_the_authorization_to_monitor_for_aue_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Obtain the authorization to monitor for a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  /// <param name="discEntryId">Discovery Entry Id</param>
  /// <param name="monitorAuthReqData"></param>
  virtual void
  obtain_monitor_auth(const std::string &ueId, const std::string &discEntryId,
                      const MonitorAuthReqData &monitorAuthReqData,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ObtainTheAuthorizationToMonitorForAUEApi_H_ */