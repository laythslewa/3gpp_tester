/**
 * 3gpp-as-session-with-qos
 * API for setting us an AS session with required QoS. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::
    AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::init() {
  setupRoutes();
}

void AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Patch(
      *router, base + "/:scsAsId/subscriptions/:subscriptionId",
      Routes::bind(&AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::
                       scs_as_id_subscriptions_subscription_id_patch_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::
          as_session_with_qo_sapi_subscription_level_patch_operation_api_default_handler,
      this));
}

void AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::
    scs_as_id_subscriptions_subscription_id_patch_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  AsSessionWithQoSSubscriptionPatch asSessionWithQoSSubscriptionPatch;

  try {
    nlohmann::json::parse(request.body())
        .get_to(asSessionWithQoSSubscriptionPatch);
    this->scs_as_id_subscriptions_subscription_id_patch(
        scsAsId, subscriptionId, asSessionWithQoSSubscriptionPatch, response);
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

void AsSessionWithQoSAPISubscriptionLevelPATCHOperationApi::
    as_session_with_qo_sapi_subscription_level_patch_operation_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
