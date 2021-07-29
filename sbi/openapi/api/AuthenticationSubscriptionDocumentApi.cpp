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

#include "AuthenticationSubscriptionDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

AuthenticationSubscriptionDocumentApi::AuthenticationSubscriptionDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void AuthenticationSubscriptionDocumentApi::init() { setupRoutes(); }

void AuthenticationSubscriptionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Patch(*router,
                base + "/subscription-data/:ueId/authentication-data/"
                       "authentication-subscription",
                Routes::bind(&AuthenticationSubscriptionDocumentApi::
                                 modify_authentication_subscription_handler,
                             this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&AuthenticationSubscriptionDocumentApi::
                       authentication_subscription_document_api_default_handler,
                   this));
}

void AuthenticationSubscriptionDocumentApi::
    modify_authentication_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the body param
  std::vector<PatchItem> patchItem;

  // Getting the query params
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    nlohmann::json::parse(request.body()).get_to(patchItem);
    this->modify_authentication_subscription(ueId, patchItem, supportedFeatures,
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

void AuthenticationSubscriptionDocumentApi::
    authentication_subscription_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
