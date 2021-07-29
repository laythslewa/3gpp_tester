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

#include "ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::
    ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::init() {
  setupRoutes();
}

void ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/:ueId/match-report",
      Routes::bind(&ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::
                       match_report_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::
          obtain_the_information_about_the_indicated_discovery_code_api_default_handler,
      this));
}

void ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::
    match_report_handler(const Pistache::Rest::Request &request,
                         Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  MatchReportReqData matchReportReqData;

  try {
    nlohmann::json::parse(request.body()).get_to(matchReportReqData);
    this->match_report(ueId, matchReportReqData, response);
  } catch (nlohmann::detail::exception &e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (std::exception &e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi::
    obtain_the_information_about_the_indicated_discovery_code_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
