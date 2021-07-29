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

#include "ReachabilitySubscriptionDeletionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

ReachabilitySubscriptionDeletionApi::ReachabilitySubscriptionDeletionApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void ReachabilitySubscriptionDeletionApi::init() { setupRoutes(); }

void ReachabilitySubscriptionDeletionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router,
      base + "/:imsUeId/access-data/ps-domain/ue-reach-subscriptions/"
             ":subscriptionId",
      Routes::bind(
          &ReachabilitySubscriptionDeletionApi::ue_reach_unsubscribe_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&ReachabilitySubscriptionDeletionApi::
                       reachability_subscription_deletion_api_default_handler,
                   this));
}

void ReachabilitySubscriptionDeletionApi::ue_reach_unsubscribe_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto imsUeId = request.param(":imsUeId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the query params
  auto privateIdentityQuery = request.query().get("private-identity");
  Pistache::Optional<std::string> privateIdentity;
  if (!privateIdentityQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(privateIdentityQuery.get(), valueQuery_instance)) {
      privateIdentity = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->ue_reach_unsubscribe(imsUeId, subscriptionId, privateIdentity,
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

void ReachabilitySubscriptionDeletionApi::
    reachability_subscription_deletion_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
