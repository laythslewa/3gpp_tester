/**
 * NRF OAuth2
 * NRF OAuth2 Authorization. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AccessTokenRequestApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

AccessTokenRequestApi::AccessTokenRequestApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void AccessTokenRequestApi::init() { setupRoutes(); }

void AccessTokenRequestApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/oauth2/token",
      Routes::bind(&AccessTokenRequestApi::access_token_request_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &AccessTokenRequestApi::access_token_request_api_default_handler, this));
}

void AccessTokenRequestApi::access_token_request_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  try {
    this->access_token_request(request, response);
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

void AccessTokenRequestApi::access_token_request_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
