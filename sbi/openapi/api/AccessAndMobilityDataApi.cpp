/**
 * Unified Data Repository Service API file for structured data for exposure
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

#include "AccessAndMobilityDataApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

AccessAndMobilityDataApi::AccessAndMobilityDataApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void AccessAndMobilityDataApi::init() { setupRoutes(); }

void AccessAndMobilityDataApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + "/exposure-data/:ueId/access-and-mobility-data",
      Routes::bind(&AccessAndMobilityDataApi::
                       create_or_replace_access_and_mobility_data_handler,
                   this));
  Routes::Delete(
      *router, base + "/exposure-data/:ueId/access-and-mobility-data",
      Routes::bind(
          &AccessAndMobilityDataApi::delete_access_and_mobility_data_handler,
          this));
  Routes::Get(
      *router, base + "/exposure-data/:ueId/access-and-mobility-data",
      Routes::bind(
          &AccessAndMobilityDataApi::query_access_and_mobility_data_handler,
          this));
  Routes::Patch(
      *router, base + "/exposure-data/:ueId/access-and-mobility-data",
      Routes::bind(
          &AccessAndMobilityDataApi::update_access_and_mobility_data_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &AccessAndMobilityDataApi::access_and_mobility_data_api_default_handler,
      this));
}

void AccessAndMobilityDataApi::
    create_or_replace_access_and_mobility_data_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  AccessAndMobilityData accessAndMobilityData;

  try {
    nlohmann::json::parse(request.body()).get_to(accessAndMobilityData);
    this->create_or_replace_access_and_mobility_data(
        ueId, accessAndMobilityData, response);
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
void AccessAndMobilityDataApi::delete_access_and_mobility_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  try {
    this->delete_access_and_mobility_data(ueId, response);
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
void AccessAndMobilityDataApi::query_access_and_mobility_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the query params
  auto suppFeatQuery = request.query().get("supp-feat");
  Pistache::Optional<std::string> suppFeat;
  if (!suppFeatQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(suppFeatQuery.get(), valueQuery_instance)) {
      suppFeat = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->query_access_and_mobility_data(ueId, suppFeat, response);
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
void AccessAndMobilityDataApi::update_access_and_mobility_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param

  AccessAndMobilityData accessAndMobilityData;

  try {
    nlohmann::json::parse(request.body()).get_to(accessAndMobilityData);
    this->update_access_and_mobility_data(ueId, accessAndMobilityData,
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

void AccessAndMobilityDataApi::access_and_mobility_data_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
