/**
 * Nudm_NIDDAU
 * Nudm NIDD Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AuthorizeTheNIDDConfigurationRequestApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

AuthorizeTheNIDDConfigurationRequestApi::
    AuthorizeTheNIDDConfigurationRequestApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void AuthorizeTheNIDDConfigurationRequestApi::init() { setupRoutes(); }

void AuthorizeTheNIDDConfigurationRequestApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/:ueIdentity/authorize",
      Routes::bind(
          &AuthorizeTheNIDDConfigurationRequestApi::authorize_nidd_data_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &AuthorizeTheNIDDConfigurationRequestApi::
          authorize_the_nidd_configuration_request_api_default_handler,
      this));
}

void AuthorizeTheNIDDConfigurationRequestApi::authorize_nidd_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueIdentity = request.param(":ueIdentity").as<std::string>();

  // Getting the body param

  AuthorizationInfo authorizationInfo;

  try {
    nlohmann::json::parse(request.body()).get_to(authorizationInfo);
    this->authorize_nidd_data(ueIdentity, authorizationInfo, response);
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

void AuthorizeTheNIDDConfigurationRequestApi::
    authorize_the_nidd_configuration_request_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
