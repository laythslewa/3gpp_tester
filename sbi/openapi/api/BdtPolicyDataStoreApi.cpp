/**
 * Unified Data Repository Service API file for Application Data
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

#include "BdtPolicyDataStoreApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

BdtPolicyDataStoreApi::BdtPolicyDataStoreApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void BdtPolicyDataStoreApi::init() { setupRoutes(); }

void BdtPolicyDataStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/application-data/bdtPolicyData",
      Routes::bind(&BdtPolicyDataStoreApi::read_bdt_policy_data_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &BdtPolicyDataStoreApi::bdt_policy_data_store_api_default_handler, this));
}

void BdtPolicyDataStoreApi::read_bdt_policy_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {

  // Getting the query params
  auto bdtPolicyIdsQuery = request.query().get("bdt-policy-ids");
  Pistache::Optional<std::vector<std::string>> bdtPolicyIds;
  if (!bdtPolicyIdsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(bdtPolicyIdsQuery.get(), valueQuery_instance)) {
      bdtPolicyIds = Pistache::Some(valueQuery_instance);
    }
  }
  auto internalGroupIdsQuery = request.query().get("internal-group-ids");
  Pistache::Optional<std::vector<std::string>> internalGroupIds;
  if (!internalGroupIdsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(internalGroupIdsQuery.get(), valueQuery_instance)) {
      internalGroupIds = Pistache::Some(valueQuery_instance);
    }
  }
  auto supisQuery = request.query().get("supis");
  Pistache::Optional<std::vector<std::string>> supis;
  if (!supisQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(supisQuery.get(), valueQuery_instance)) {
      supis = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->read_bdt_policy_data(bdtPolicyIds, internalGroupIds, supis, response);
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

void BdtPolicyDataStoreApi::bdt_policy_data_store_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
