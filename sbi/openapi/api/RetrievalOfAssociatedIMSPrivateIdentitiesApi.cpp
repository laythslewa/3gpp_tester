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

#include "RetrievalOfAssociatedIMSPrivateIdentitiesApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

RetrievalOfAssociatedIMSPrivateIdentitiesApi::
    RetrievalOfAssociatedIMSPrivateIdentitiesApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void RetrievalOfAssociatedIMSPrivateIdentitiesApi::init() { setupRoutes(); }

void RetrievalOfAssociatedIMSPrivateIdentitiesApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(*router, base + "/:imsUeId/identities/private-identities",
              Routes::bind(&RetrievalOfAssociatedIMSPrivateIdentitiesApi::
                               get_ims_private_ids_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &RetrievalOfAssociatedIMSPrivateIdentitiesApi::
          retrieval_of_associated_ims_private_identities_api_default_handler,
      this));
}

void RetrievalOfAssociatedIMSPrivateIdentitiesApi::get_ims_private_ids_handler(
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
  auto impiQuery = request.query().get("impi");
  Pistache::Optional<std::string> impi;
  if (!impiQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(impiQuery.get(), valueQuery_instance)) {
      impi = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->get_ims_private_ids(imsUeId, supportedFeatures, impi, response);
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

void RetrievalOfAssociatedIMSPrivateIdentitiesApi::
    retrieval_of_associated_ims_private_identities_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
