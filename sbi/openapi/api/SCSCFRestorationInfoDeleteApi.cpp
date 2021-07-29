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

#include "SCSCFRestorationInfoDeleteApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SCSCFRestorationInfoDeleteApi::SCSCFRestorationInfoDeleteApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SCSCFRestorationInfoDeleteApi::init() { setupRoutes(); }

void SCSCFRestorationInfoDeleteApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/:impu/scscf-registration/scscf-restoration-info",
      Routes::bind(
          &SCSCFRestorationInfoDeleteApi::delete_scscf_restoration_info_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&SCSCFRestorationInfoDeleteApi::
                       scscf_restoration_info_delete_api_default_handler,
                   this));
}

void SCSCFRestorationInfoDeleteApi::delete_scscf_restoration_info_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto impu = request.param(":impu").as<std::string>();

  try {
    this->delete_scscf_restoration_info(impu, response);
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

void SCSCFRestorationInfoDeleteApi::
    scscf_restoration_info_delete_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org