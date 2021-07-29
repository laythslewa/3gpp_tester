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

#include "RetrieveSMFRegistrationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

RetrieveSMFRegistrationApi::RetrieveSMFRegistrationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void RetrieveSMFRegistrationApi::init() { setupRoutes(); }

void RetrieveSMFRegistrationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:ueId/registrations/smf-registrations/:pduSessionId",
      Routes::bind(
          &RetrieveSMFRegistrationApi::retrieve_smf_registration_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&RetrieveSMFRegistrationApi::
                       retrieve_smf_registration_api_default_handler,
                   this));
}

void RetrieveSMFRegistrationApi::retrieve_smf_registration_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
  auto pduSessionId = request.param(":pduSessionId").as<int32_t>();

  try {
    this->retrieve_smf_registration(ueId, pduSessionId, response);
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

void RetrieveSMFRegistrationApi::retrieve_smf_registration_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
