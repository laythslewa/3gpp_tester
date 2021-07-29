/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NotificationSubscriptionCRUDApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

NotificationSubscriptionCRUDApi::NotificationSubscriptionCRUDApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void NotificationSubscriptionCRUDApi::init() { setupRoutes(); }

void NotificationSubscriptionCRUDApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + "/:realmId/:storageId/subs-to-notify/:subscriptionId",
      Routes::bind(&NotificationSubscriptionCRUDApi::
                       create_and_update_notification_subscription_handler,
                   this));
  Routes::Delete(*router,
                 base + "/:realmId/:storageId/subs-to-notify/:subscriptionId",
                 Routes::bind(&NotificationSubscriptionCRUDApi::
                                  delete_notification_subscription_handler,
                              this));
  Routes::Get(*router,
              base + "/:realmId/:storageId/subs-to-notify/:subscriptionId",
              Routes::bind(&NotificationSubscriptionCRUDApi::
                               get_notification_subscription_handler,
                           this));
  Routes::Patch(*router,
                base + "/:realmId/:storageId/subs-to-notify/:subscriptionId",
                Routes::bind(&NotificationSubscriptionCRUDApi::
                                 update_notification_subscription_handler,
                             this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&NotificationSubscriptionCRUDApi::
                       notification_subscription_crud_api_default_handler,
                   this));
}

void NotificationSubscriptionCRUDApi::
    create_and_update_notification_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto realmId = request.param(":realmId").as<std::string>();
  auto storageId = request.param(":storageId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  NotificationSubscription notificationSubscription;

  // Getting the query params
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }

  // Getting the header params
  auto ifNoneMatch = request.headers().tryGetRaw("If-None-Match");
  auto ifMatch = request.headers().tryGetRaw("If-Match");

  try {
    nlohmann::json::parse(request.body()).get_to(notificationSubscription);
    this->create_and_update_notification_subscription(
        realmId, storageId, subscriptionId, notificationSubscription,
        supportedFeatures, ifNoneMatch, ifMatch, response);
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
void NotificationSubscriptionCRUDApi::delete_notification_subscription_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto realmId = request.param(":realmId").as<std::string>();
  auto storageId = request.param(":storageId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the query params
  auto clientIdQuery = request.query().get("client-id");
  Pistache::Optional<ClientId> clientId;
  if (!clientIdQuery.isEmpty()) {
    ClientId valueQuery_instance;
    if (fromStringValue(clientIdQuery.get(), valueQuery_instance)) {
      clientId = Pistache::Some(valueQuery_instance);
    }
  }
  auto getPreviousQuery = request.query().get("get-previous");
  Pistache::Optional<bool> getPrevious;
  if (!getPreviousQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(getPreviousQuery.get(), valueQuery_instance)) {
      getPrevious = Pistache::Some(valueQuery_instance);
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

  // Getting the header params
  auto ifMatch = request.headers().tryGetRaw("If-Match");

  try {
    this->delete_notification_subscription(realmId, storageId, subscriptionId,
                                           clientId, getPrevious, ifMatch,
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
void NotificationSubscriptionCRUDApi::get_notification_subscription_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto realmId = request.param(":realmId").as<std::string>();
  auto storageId = request.param(":storageId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the query params
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }

  // Getting the header params
  auto ifNoneMatch = request.headers().tryGetRaw("If-None-Match");
  auto ifModifiedSince = request.headers().tryGetRaw("If-Modified-Since");

  try {
    this->get_notification_subscription(realmId, storageId, subscriptionId,
                                        supportedFeatures, ifNoneMatch,
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
void NotificationSubscriptionCRUDApi::update_notification_subscription_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto realmId = request.param(":realmId").as<std::string>();
  auto storageId = request.param(":storageId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

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

  // Getting the header params
  auto ifMatch = request.headers().tryGetRaw("If-Match");

  try {
    nlohmann::json::parse(request.body()).get_to(patchItem);
    this->update_notification_subscription(realmId, storageId, subscriptionId,
                                           patchItem, ifMatch,
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

void NotificationSubscriptionCRUDApi::
    notification_subscription_crud_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org