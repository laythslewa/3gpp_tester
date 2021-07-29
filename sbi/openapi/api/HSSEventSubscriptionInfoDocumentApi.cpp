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

#include "HSSEventSubscriptionInfoDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

HSSEventSubscriptionInfoDocumentApi::HSSEventSubscriptionInfoDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void HSSEventSubscriptionInfoDocumentApi::init() { setupRoutes(); }

void HSSEventSubscriptionInfoDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(*router,
              base + "/subscription-data/:ueId/context-data/ee-subscriptions/"
                     ":subsId/hss-subscriptions",
              Routes::bind(&HSSEventSubscriptionInfoDocumentApi::
                               create_hss_subscriptions_handler,
                           this));
  Routes::Get(*router,
              base + "/subscription-data/:ueId/context-data/ee-subscriptions/"
                     ":subsId/hss-subscriptions",
              Routes::bind(&HSSEventSubscriptionInfoDocumentApi::
                               get_hss_subscription_info_handler,
                           this));
  Routes::Patch(*router,
                base + "/subscription-data/:ueId/context-data/ee-subscriptions/"
                       ":subsId/hss-subscriptions",
                Routes::bind(&HSSEventSubscriptionInfoDocumentApi::
                                 modify_hss_subscription_info_handler,
                             this));
  Routes::Delete(*router,
                 base + "/subscription-data/:ueId/context-data/"
                        "ee-subscriptions/:subsId/hss-subscriptions",
                 Routes::bind(&HSSEventSubscriptionInfoDocumentApi::
                                  remove_hss_subscriptions_info_handler,
                              this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&HSSEventSubscriptionInfoDocumentApi::
                       hss_event_subscription_info_document_api_default_handler,
                   this));
}

void HSSEventSubscriptionInfoDocumentApi::create_hss_subscriptions_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  // Getting the body param

  HssSubscriptionInfo hssSubscriptionInfo;

  try {
    nlohmann::json::parse(request.body()).get_to(hssSubscriptionInfo);
    this->create_hss_subscriptions(ueId, subsId, hssSubscriptionInfo, response);
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
void HSSEventSubscriptionInfoDocumentApi::get_hss_subscription_info_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  try {
    this->get_hss_subscription_info(ueId, subsId, response);
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
void HSSEventSubscriptionInfoDocumentApi::modify_hss_subscription_info_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
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
    this->modify_hss_subscription_info(ueId, subsId, patchItem,
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
void HSSEventSubscriptionInfoDocumentApi::remove_hss_subscriptions_info_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();
  auto subsId = request.param(":subsId").as<std::string>();

  try {
    this->remove_hss_subscriptions_info(ueId, subsId, response);
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

void HSSEventSubscriptionInfoDocumentApi::
    hss_event_subscription_info_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
