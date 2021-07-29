/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SMFSelectionSubscriptionDataRetrievalApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

SMFSelectionSubscriptionDataRetrievalApi::
    SMFSelectionSubscriptionDataRetrievalApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SMFSelectionSubscriptionDataRetrievalApi::init() { setupRoutes(); }

void SMFSelectionSubscriptionDataRetrievalApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:supi/smf-select-data",
      Routes::bind(
          &SMFSelectionSubscriptionDataRetrievalApi::get_smf_sel_data_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SMFSelectionSubscriptionDataRetrievalApi::
          smf_selection_subscription_data_retrieval_api_default_handler,
      this));
}

void SMFSelectionSubscriptionDataRetrievalApi::get_smf_sel_data_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto supi = request.param(":supi").as<std::string>();

  // Getting the query params
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }
  auto plmnIdQuery = request.query().get("plmn-id");
  Pistache::Optional<PlmnId> plmnId;
  if (!plmnIdQuery.isEmpty()) {
    PlmnId valueQuery_instance;
    if (fromStringValue(plmnIdQuery.get(), valueQuery_instance)) {
      plmnId = Pistache::Some(valueQuery_instance);
    }
  }

  // Getting the header params
  auto ifNoneMatch = request.headers().tryGetRaw("If-None-Match");
  auto ifModifiedSince = request.headers().tryGetRaw("If-Modified-Since");

  try {
    this->get_smf_sel_data(supi, supportedFeatures, plmnId, ifNoneMatch,
                           ifModifiedSince, response);
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

void SMFSelectionSubscriptionDataRetrievalApi::
    smf_selection_subscription_data_retrieval_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
