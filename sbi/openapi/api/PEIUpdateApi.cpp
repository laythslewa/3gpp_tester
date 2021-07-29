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

#include "PEIUpdateApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

PEIUpdateApi::PEIUpdateApi(std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void PEIUpdateApi::init() { setupRoutes(); }

void PEIUpdateApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(*router,
               base + "/:ueId/registrations/amf-3gpp-access/pei-update",
               Routes::bind(&PEIUpdateApi::pei_update_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&PEIUpdateApi::pei_update_api_default_handler, this));
}

void PEIUpdateApi::pei_update_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  PeiUpdateInfo peiUpdateInfo;

  try {
    nlohmann::json::parse(request.body()).get_to(peiUpdateInfo);
    this->pei_update(ueId, peiUpdateInfo, response);
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

void PEIUpdateApi::pei_update_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
