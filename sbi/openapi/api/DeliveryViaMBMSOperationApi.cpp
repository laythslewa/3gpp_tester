/**
 * GMDviaMBMSbyxMB
 * API for Group Message Delivery via MBMS by xMB © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DeliveryViaMBMSOperationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

DeliveryViaMBMSOperationApi::DeliveryViaMBMSOperationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void DeliveryViaMBMSOperationApi::init() { setupRoutes(); }

void DeliveryViaMBMSOperationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:scsAsId/services/:serviceId/delivery-via-mbms",
      Routes::bind(
          &DeliveryViaMBMSOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_get_handler,
          this));
  Routes::Post(
      *router, base + "/:scsAsId/services/:serviceId/delivery-via-mbms",
      Routes::bind(
          &DeliveryViaMBMSOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_post_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&DeliveryViaMBMSOperationApi::
                       delivery_via_mbms_operation_api_default_handler,
                   this));
}

void DeliveryViaMBMSOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_get_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();

  try {
    this->scs_as_id_services_service_id_delivery_via_mbms_get(
        scsAsId, serviceId, response);
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
void DeliveryViaMBMSOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_post_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();

  // Getting the body param

  GMDViaMBMSByxMB gMDViaMBMSByxMB;

  try {
    nlohmann::json::parse(request.body()).get_to(gMDViaMBMSByxMB);
    this->scs_as_id_services_service_id_delivery_via_mbms_post(
        scsAsId, serviceId, gMDViaMBMSByxMB, response);
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

void DeliveryViaMBMSOperationApi::
    delivery_via_mbms_operation_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
