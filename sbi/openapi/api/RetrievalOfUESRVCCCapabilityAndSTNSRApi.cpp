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

#include "RetrievalOfUESRVCCCapabilityAndSTNSRApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

RetrievalOfUESRVCCCapabilityAndSTNSRApi::
    RetrievalOfUESRVCCCapabilityAndSTNSRApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void RetrievalOfUESRVCCCapabilityAndSTNSRApi::init() { setupRoutes(); }

void RetrievalOfUESRVCCCapabilityAndSTNSRApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:imsUeId/srvcc-data",
      Routes::bind(
          &RetrievalOfUESRVCCCapabilityAndSTNSRApi::get_srvcc_data_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &RetrievalOfUESRVCCCapabilityAndSTNSRApi::
          retrieval_of_uesrvcc_capability_and_stnsr_api_default_handler,
      this));
}

void RetrievalOfUESRVCCCapabilityAndSTNSRApi::get_srvcc_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto imsUeId = request.param(":imsUeId").as<std::string>();

  // Getting the query params
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
    this->get_srvcc_data(imsUeId, supportedFeatures, privateIdentity, response);
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

void RetrievalOfUESRVCCCapabilityAndSTNSRApi::
    retrieval_of_uesrvcc_capability_and_stnsr_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org