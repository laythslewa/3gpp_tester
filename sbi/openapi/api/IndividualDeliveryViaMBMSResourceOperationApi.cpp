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

#include "IndividualDeliveryViaMBMSResourceOperationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualDeliveryViaMBMSResourceOperationApi::
    IndividualDeliveryViaMBMSResourceOperationApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualDeliveryViaMBMSResourceOperationApi::init() { setupRoutes(); }

void IndividualDeliveryViaMBMSResourceOperationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router,
      base + "/:scsAsId/services/:serviceId/delivery-via-mbms/:transactionId",
      Routes::bind(
          &IndividualDeliveryViaMBMSResourceOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_transaction_id_delete_handler,
          this));
  Routes::Get(
      *router,
      base + "/:scsAsId/services/:serviceId/delivery-via-mbms/:transactionId",
      Routes::bind(
          &IndividualDeliveryViaMBMSResourceOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_transaction_id_get_handler,
          this));
  Routes::Patch(
      *router,
      base + "/:scsAsId/services/:serviceId/delivery-via-mbms/:transactionId",
      Routes::bind(
          &IndividualDeliveryViaMBMSResourceOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_transaction_id_patch_handler,
          this));
  Routes::Put(
      *router,
      base + "/:scsAsId/services/:serviceId/delivery-via-mbms/:transactionId",
      Routes::bind(
          &IndividualDeliveryViaMBMSResourceOperationApi::
              scs_as_id_services_service_id_delivery_via_mbms_transaction_id_put_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualDeliveryViaMBMSResourceOperationApi::
          individual_delivery_via_mbms_resource_operation_api_default_handler,
      this));
}

void IndividualDeliveryViaMBMSResourceOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_transaction_id_delete_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();
  auto transactionId = request.param(":transactionId").as<std::string>();

  try {
    this->scs_as_id_services_service_id_delivery_via_mbms_transaction_id_delete(
        scsAsId, serviceId, transactionId, response);
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
void IndividualDeliveryViaMBMSResourceOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_transaction_id_get_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();
  auto transactionId = request.param(":transactionId").as<std::string>();

  try {
    this->scs_as_id_services_service_id_delivery_via_mbms_transaction_id_get(
        scsAsId, serviceId, transactionId, response);
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
void IndividualDeliveryViaMBMSResourceOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_transaction_id_patch_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();
  auto transactionId = request.param(":transactionId").as<std::string>();

  // Getting the body param

  GMDViaMBMSByxMBPatch gMDViaMBMSByxMBPatch;

  try {
    nlohmann::json::parse(request.body()).get_to(gMDViaMBMSByxMBPatch);
    this->scs_as_id_services_service_id_delivery_via_mbms_transaction_id_patch(
        scsAsId, serviceId, transactionId, gMDViaMBMSByxMBPatch, response);
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
void IndividualDeliveryViaMBMSResourceOperationApi::
    scs_as_id_services_service_id_delivery_via_mbms_transaction_id_put_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto serviceId = request.param(":serviceId").as<std::string>();
  auto transactionId = request.param(":transactionId").as<std::string>();

  // Getting the body param

  GMDViaMBMSByxMB gMDViaMBMSByxMB;

  try {
    nlohmann::json::parse(request.body()).get_to(gMDViaMBMSByxMB);
    this->scs_as_id_services_service_id_delivery_via_mbms_transaction_id_put(
        scsAsId, serviceId, transactionId, gMDViaMBMSByxMB, response);
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

void IndividualDeliveryViaMBMSResourceOperationApi::
    individual_delivery_via_mbms_resource_operation_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
