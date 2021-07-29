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

#include "SMSFRegistrationForNon3GPPAccessApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SMSFRegistrationForNon3GPPAccessApi::SMSFRegistrationForNon3GPPAccessApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SMSFRegistrationForNon3GPPAccessApi::init() { setupRoutes(); }

void SMSFRegistrationForNon3GPPAccessApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(*router, base + "/:ueId/registrations/smsf-non-3gpp-access",
              Routes::bind(&SMSFRegistrationForNon3GPPAccessApi::
                               non3_gpp_smsf_registration_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SMSFRegistrationForNon3GPPAccessApi::
          smsf_registration_for_non3_gpp_access_api_default_handler,
      this));
}

void SMSFRegistrationForNon3GPPAccessApi::non3_gpp_smsf_registration_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  SmsfRegistration smsfRegistration;

  try {
    nlohmann::json::parse(request.body()).get_to(smsfRegistration);
    this->non3_gpp_smsf_registration(ueId, smsfRegistration, response);
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

void SMSFRegistrationForNon3GPPAccessApi::
    smsf_registration_for_non3_gpp_access_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
