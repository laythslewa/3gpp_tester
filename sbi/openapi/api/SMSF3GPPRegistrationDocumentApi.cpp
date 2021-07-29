/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SMSF3GPPRegistrationDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SMSF3GPPRegistrationDocumentApi::SMSF3GPPRegistrationDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SMSF3GPPRegistrationDocumentApi::init() { setupRoutes(); }

void SMSF3GPPRegistrationDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + "/subscription-data/:ueId/context-data/smsf-3gpp-access",
      Routes::bind(
          &SMSF3GPPRegistrationDocumentApi::create_smsf_context3gpp_handler,
          this));
  Routes::Delete(
      *router, base + "/subscription-data/:ueId/context-data/smsf-3gpp-access",
      Routes::bind(
          &SMSF3GPPRegistrationDocumentApi::delete_smsf_context3gpp_handler,
          this));
  Routes::Get(
      *router, base + "/subscription-data/:ueId/context-data/smsf-3gpp-access",
      Routes::bind(
          &SMSF3GPPRegistrationDocumentApi::query_smsf_context3gpp_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&SMSF3GPPRegistrationDocumentApi::
                       smsf3_gpp_registration_document_api_default_handler,
                   this));
}

void SMSF3GPPRegistrationDocumentApi::create_smsf_context3gpp_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  SmsfRegistration smsfRegistration;

  try {
    nlohmann::json::parse(request.body()).get_to(smsfRegistration);
    this->create_smsf_context3gpp(ueId, smsfRegistration, response);
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
void SMSF3GPPRegistrationDocumentApi::delete_smsf_context3gpp_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  try {
    this->delete_smsf_context3gpp(ueId, response);
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
void SMSF3GPPRegistrationDocumentApi::query_smsf_context3gpp_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the query params
  auto fieldsQuery = request.query().get("fields");
  Pistache::Optional<std::vector<std::string>> fields;
  if (!fieldsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(fieldsQuery.get(), valueQuery_instance)) {
      fields = Pistache::Some(valueQuery_instance);
    }
  }
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->query_smsf_context3gpp(ueId, fields, supportedFeatures, response);
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

void SMSF3GPPRegistrationDocumentApi::
    smsf3_gpp_registration_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
