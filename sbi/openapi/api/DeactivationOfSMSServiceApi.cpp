/**
 * Nsmsf_SMService Service API
 * SMSF SMService. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DeactivationOfSMSServiceApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

DeactivationOfSMSServiceApi::DeactivationOfSMSServiceApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void DeactivationOfSMSServiceApi::init() { setupRoutes(); }

void DeactivationOfSMSServiceApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/ue-contexts/:supi",
      Routes::bind(
          &DeactivationOfSMSServiceApi::s_m_service_deactivation_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&DeactivationOfSMSServiceApi::
                       deactivation_of_sms_service_api_default_handler,
                   this));
}

void DeactivationOfSMSServiceApi::s_m_service_deactivation_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto supi = request.param(":supi").as<std::string>();

  // Getting the header params
  auto ifMatch = request.headers().tryGetRaw("If-Match");

  try {
    this->s_m_service_deactivation(supi, ifMatch, response);
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

void DeactivationOfSMSServiceApi::
    deactivation_of_sms_service_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
