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

#include "SCSCFRegistrationAndDeregistrationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SCSCFRegistrationAndDeregistrationApi::SCSCFRegistrationAndDeregistrationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SCSCFRegistrationAndDeregistrationApi::init() { setupRoutes(); }

void SCSCFRegistrationAndDeregistrationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + "/:imsUeId/scscf-registration",
      Routes::bind(
          &SCSCFRegistrationAndDeregistrationApi::s_cscf_registration_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SCSCFRegistrationAndDeregistrationApi::
          scscf_registration_and_deregistration_api_default_handler,
      this));
}

void SCSCFRegistrationAndDeregistrationApi::s_cscf_registration_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto imsUeId = request.param(":imsUeId").as<std::string>();

  // Getting the body param

  ScscfRegistration scscfRegistration;

  try {
    nlohmann::json::parse(request.body()).get_to(scscfRegistration);
    this->s_cscf_registration(imsUeId, scscfRegistration, response);
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

void SCSCFRegistrationAndDeregistrationApi::
    scscf_registration_and_deregistration_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
