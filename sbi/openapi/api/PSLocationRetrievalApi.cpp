/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PSLocationRetrievalApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

PSLocationRetrievalApi::PSLocationRetrievalApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void PSLocationRetrievalApi::init() { setupRoutes(); }

void PSLocationRetrievalApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:imsUeId/access-data/ps-domain/location-data",
      Routes::bind(&PSLocationRetrievalApi::get_loc_ps_domain_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &PSLocationRetrievalApi::ps_location_retrieval_api_default_handler,
      this));
}

void PSLocationRetrievalApi::get_loc_ps_domain_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto imsUeId = request.param(":imsUeId").as<std::string>();

  // Getting the query params
  auto requestedNodesQuery = request.query().get("requested-nodes");
  Pistache::Optional<std::vector<RequestedNode>> requestedNodes;
  if (!requestedNodesQuery.isEmpty()) {
    std::vector<RequestedNode> valueQuery_instance;
    if (fromStringValue(requestedNodesQuery.get(), valueQuery_instance)) {
      requestedNodes = Pistache::Some(valueQuery_instance);
    }
  }
  auto servingNodeQuery = request.query().get("serving-node");
  Pistache::Optional<bool> servingNode;
  if (!servingNodeQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(servingNodeQuery.get(), valueQuery_instance)) {
      servingNode = Pistache::Some(valueQuery_instance);
    }
  }
  auto localTimeQuery = request.query().get("local-time");
  Pistache::Optional<bool> localTime;
  if (!localTimeQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(localTimeQuery.get(), valueQuery_instance)) {
      localTime = Pistache::Some(valueQuery_instance);
    }
  }
  auto currentLocationQuery = request.query().get("current-location");
  Pistache::Optional<bool> currentLocation;
  if (!currentLocationQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(currentLocationQuery.get(), valueQuery_instance)) {
      currentLocation = Pistache::Some(valueQuery_instance);
    }
  }
  auto ratTypeQuery = request.query().get("rat-type");
  Pistache::Optional<bool> ratType;
  if (!ratTypeQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(ratTypeQuery.get(), valueQuery_instance)) {
      ratType = Pistache::Some(valueQuery_instance);
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
  auto privateIdentityQuery = request.query().get("private-identity");
  Pistache::Optional<std::string> privateIdentity;
  if (!privateIdentityQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(privateIdentityQuery.get(), valueQuery_instance)) {
      privateIdentity = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->get_loc_ps_domain(imsUeId, requestedNodes, servingNode, localTime,
                            currentLocation, ratType, supportedFeatures,
                            privateIdentity, response);
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

void PSLocationRetrievalApi::ps_location_retrieval_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
