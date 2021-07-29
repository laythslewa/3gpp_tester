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

#include "InfluenceDataStoreApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

InfluenceDataStoreApi::InfluenceDataStoreApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void InfluenceDataStoreApi::init() { setupRoutes(); }

void InfluenceDataStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/application-data/influenceData",
      Routes::bind(&InfluenceDataStoreApi::read_influence_data_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &InfluenceDataStoreApi::influence_data_store_api_default_handler, this));
}

void InfluenceDataStoreApi::read_influence_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {

  // Getting the query params
  auto influenceIdsQuery = request.query().get("influence-Ids");
  Pistache::Optional<std::vector<std::string>> influenceIds;
  if (!influenceIdsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(influenceIdsQuery.get(), valueQuery_instance)) {
      influenceIds = Pistache::Some(valueQuery_instance);
    }
  }
  auto dnnsQuery = request.query().get("dnns");
  Pistache::Optional<std::vector<std::string>> dnns;
  if (!dnnsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(dnnsQuery.get(), valueQuery_instance)) {
      dnns = Pistache::Some(valueQuery_instance);
    }
  }
  auto snssaisQuery = request.query().get("snssais");
  Pistache::Optional<std::vector<Snssai>> snssais;
  if (!snssaisQuery.isEmpty()) {
    std::vector<Snssai> valueQuery_instance;
    if (fromStringValue(snssaisQuery.get(), valueQuery_instance)) {
      snssais = Pistache::Some(valueQuery_instance);
    }
  }
  auto internalGroupIdsQuery = request.query().get("internal-Group-Ids");
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
  auto suppFeatQuery = request.query().get("supp-feat");
  Pistache::Optional<std::string> suppFeat;
  if (!suppFeatQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(suppFeatQuery.get(), valueQuery_instance)) {
      suppFeat = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->read_influence_data(influenceIds, dnns, snssais, internalGroupIds,
                              supis, suppFeat, response);
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

void InfluenceDataStoreApi::influence_data_store_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org