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

#include "SMFDeregistrationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SMFDeregistrationApi::SMFDeregistrationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SMFDeregistrationApi::init() { setupRoutes(); }

void SMFDeregistrationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/:ueId/registrations/smf-registrations/:pduSessionId",
      Routes::bind(&SMFDeregistrationApi::smf_deregistration_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SMFDeregistrationApi::smf_deregistration_api_default_handler, this));
}

void SMFDeregistrationApi::smf_deregistration_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
  auto pduSessionId = request.param(":pduSessionId").as<int32_t>();

  // Getting the query params
  auto smfSetIdQuery = request.query().get("smf-set-id");
  Pistache::Optional<std::string> smfSetId;
  if (!smfSetIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(smfSetIdQuery.get(), valueQuery_instance)) {
      smfSetId = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->smf_deregistration(ueId, pduSessionId, smfSetId, response);
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

void SMFDeregistrationApi::smf_deregistration_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org