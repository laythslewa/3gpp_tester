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

#include "SCSCFRestorationInfoRetrievalApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SCSCFRestorationInfoRetrievalApi::SCSCFRestorationInfoRetrievalApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SCSCFRestorationInfoRetrievalApi::init() { setupRoutes(); }

void SCSCFRestorationInfoRetrievalApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:impu/scscf-registration/scscf-restoration-info",
      Routes::bind(
          &SCSCFRestorationInfoRetrievalApi::get_scscf_restoration_info_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&SCSCFRestorationInfoRetrievalApi::
                       scscf_restoration_info_retrieval_api_default_handler,
                   this));
}

void SCSCFRestorationInfoRetrievalApi::get_scscf_restoration_info_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto impu = request.param(":impu").as<std::string>();

  try {
    this->get_scscf_restoration_info(impu, response);
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

void SCSCFRestorationInfoRetrievalApi::
    scscf_restoration_info_retrieval_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org