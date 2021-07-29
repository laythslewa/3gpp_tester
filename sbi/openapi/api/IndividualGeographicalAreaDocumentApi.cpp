/**
 * VAE_Service Continuity
 * API for VAE Service Continuity Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualGeographicalAreaDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualGeographicalAreaDocumentApi::IndividualGeographicalAreaDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualGeographicalAreaDocumentApi::init() { setupRoutes(); }

void IndividualGeographicalAreaDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(*router, base + "/geo-areas/:geoId",
              Routes::bind(&IndividualGeographicalAreaDocumentApi::
                               query_service_continuity_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualGeographicalAreaDocumentApi::
          individual_geographical_area_document_api_default_handler,
      this));
}

void IndividualGeographicalAreaDocumentApi::query_service_continuity_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto geoId = request.param(":geoId").as<std::string>();

  // Getting the query params
  auto serviceIdQuery = request.query().get("service-id");
  Pistache::Optional<std::string> serviceId;
  if (!serviceIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(serviceIdQuery.get(), valueQuery_instance)) {
      serviceId = Pistache::Some(valueQuery_instance);
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
    this->query_service_continuity(geoId, serviceId, suppFeat, response);
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

void IndividualGeographicalAreaDocumentApi::
    individual_geographical_area_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
