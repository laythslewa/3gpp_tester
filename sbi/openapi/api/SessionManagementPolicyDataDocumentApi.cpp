/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SessionManagementPolicyDataDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SessionManagementPolicyDataDocumentApi::SessionManagementPolicyDataDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SessionManagementPolicyDataDocumentApi::init() { setupRoutes(); }

void SessionManagementPolicyDataDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(*router, base + "/policy-data/ues/:ueId/sm-data",
              Routes::bind(&SessionManagementPolicyDataDocumentApi::
                               read_session_management_policy_data_handler,
                           this));
  Routes::Patch(*router, base + "/policy-data/ues/:ueId/sm-data",
                Routes::bind(&SessionManagementPolicyDataDocumentApi::
                                 update_session_management_policy_data_handler,
                             this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SessionManagementPolicyDataDocumentApi::
          session_management_policy_data_document_api_default_handler,
      this));
}

void SessionManagementPolicyDataDocumentApi::
    read_session_management_policy_data_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the query params
  auto snssaiQuery = request.query().get("snssai");
  Pistache::Optional<Snssai> snssai;
  if (!snssaiQuery.isEmpty()) {
    Snssai valueQuery_instance;
    if (fromStringValue(snssaiQuery.get(), valueQuery_instance)) {
      snssai = Pistache::Some(valueQuery_instance);
    }
  }
  auto dnnQuery = request.query().get("dnn");
  Pistache::Optional<std::string> dnn;
  if (!dnnQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(dnnQuery.get(), valueQuery_instance)) {
      dnn = Pistache::Some(valueQuery_instance);
    }
  }
  auto fieldsQuery = request.query().get("fields");
  Pistache::Optional<std::vector<std::string>> fields;
  if (!fieldsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(fieldsQuery.get(), valueQuery_instance)) {
      fields = Pistache::Some(valueQuery_instance);
    }
  }
  auto suppFeatQuery = request.query().get("supp-feat");
  Pistache::Optional<std::string> suppFeat;
  if (!suppFeatQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(suppFeatQuery.get(), valueQuery_instance)) {
      suppFeat = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->read_session_management_policy_data(ueId, snssai, dnn, fields,
                                              suppFeat, response);
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
void SessionManagementPolicyDataDocumentApi::
    update_session_management_policy_data_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  SmPolicyDataPatch smPolicyDataPatch;

  try {
    nlohmann::json::parse(request.body()).get_to(smPolicyDataPatch);
    this->update_session_management_policy_data(ueId, smPolicyDataPatch,
                                                response);
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

void SessionManagementPolicyDataDocumentApi::
    session_management_policy_data_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
