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

#include "EventExposureGroupSubscriptionDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

EventExposureGroupSubscriptionDocumentApi::
    EventExposureGroupSubscriptionDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void EventExposureGroupSubscriptionDocumentApi::init() { setupRoutes(); }

void EventExposureGroupSubscriptionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Patch(
      *router,
      base +
          "/subscription-data/group-data/:ueGroupId/ee-subscriptions/:subsId",
      Routes::bind(&EventExposureGroupSubscriptionDocumentApi::
                       modify_ee_group_subscription_handler,
                   this));
  Routes::Get(
      *router,
      base +
          "/subscription-data/group-data/:ueGroupId/ee-subscriptions/:subsId",
      Routes::bind(&EventExposureGroupSubscriptionDocumentApi::
                       query_ee_group_subscription_handler,
                   this));
  Routes::Delete(
      *router,
      base +
          "/subscription-data/group-data/:ueGroupId/ee-subscriptions/:subsId",
      Routes::bind(&EventExposureGroupSubscriptionDocumentApi::
                       remove_ee_group_subscriptions_handler,
                   this));
  Routes::Put(
      *router,
      base +
          "/subscription-data/group-data/:ueGroupId/ee-subscriptions/:subsId",
      Routes::bind(&EventExposureGroupSubscriptionDocumentApi::
                       update_ee_group_subscriptions_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &EventExposureGroupSubscriptionDocumentApi::
          event_exposure_group_subscription_document_api_default_handler,
      this));
}

void EventExposureGroupSubscriptionDocumentApi::
    modify_ee_group_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueGroupId = request.param(":ueGroupId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

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
    this->modify_ee_group_subscription(ueGroupId, subsId, patchItem,
                                       supportedFeatures, response);
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
void EventExposureGroupSubscriptionDocumentApi::
    query_ee_group_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueGroupId = request.param(":ueGroupId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  try {
    this->query_ee_group_subscription(ueGroupId, subsId, response);
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
void EventExposureGroupSubscriptionDocumentApi::
    remove_ee_group_subscriptions_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueGroupId = request.param(":ueGroupId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  try {
    this->remove_ee_group_subscriptions(ueGroupId, subsId, response);
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
void EventExposureGroupSubscriptionDocumentApi::
    update_ee_group_subscriptions_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueGroupId = request.param(":ueGroupId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  // Getting the body param

  EeSubscription eeSubscription;

  try {
    nlohmann::json::parse(request.body()).get_to(eeSubscription);
    this->update_ee_group_subscriptions(ueGroupId, subsId, eeSubscription,
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

void EventExposureGroupSubscriptionDocumentApi::
    event_exposure_group_subscription_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
