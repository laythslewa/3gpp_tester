/**
 * Nhss_UECM
 * HSS UE Context Management © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MMESGSNDeregistrationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

MMESGSNDeregistrationApi::MMESGSNDeregistrationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void MMESGSNDeregistrationApi::init() { setupRoutes(); }

void MMESGSNDeregistrationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/deregister-sn",
      Routes::bind(&MMESGSNDeregistrationApi::deregister_sn_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &MMESGSNDeregistrationApi::mmesgsn_deregistration_api_default_handler,
      this));
}

void MMESGSNDeregistrationApi::deregister_sn_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {

  // Getting the body param

  DeregistrationRequest deregistrationRequest;

  try {
    nlohmann::json::parse(request.body()).get_to(deregistrationRequest);
    this->deregister_sn(deregistrationRequest, response);
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

void MMESGSNDeregistrationApi::mmesgsn_deregistration_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
