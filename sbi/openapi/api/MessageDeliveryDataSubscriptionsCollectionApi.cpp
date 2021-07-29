/**
 * VAE_MessageDelivery
 * API for VAE Message Delivery Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MessageDeliveryDataSubscriptionsCollectionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

MessageDeliveryDataSubscriptionsCollectionApi::
    MessageDeliveryDataSubscriptionsCollectionApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void MessageDeliveryDataSubscriptionsCollectionApi::init() { setupRoutes(); }

void MessageDeliveryDataSubscriptionsCollectionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/subscriptions",
      Routes::bind(
          &MessageDeliveryDataSubscriptionsCollectionApi::
              create_individual_message_delivery_data_subscription_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &MessageDeliveryDataSubscriptionsCollectionApi::
          message_delivery_data_subscriptions_collection_api_default_handler,
      this));
}

void MessageDeliveryDataSubscriptionsCollectionApi::
    create_individual_message_delivery_data_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {

  // Getting the body param

  MessageDeliverySubscriptionData messageDeliverySubscriptionData;

  try {
    nlohmann::json::parse(request.body())
        .get_to(messageDeliverySubscriptionData);
    this->create_individual_message_delivery_data_subscription(
        messageDeliverySubscriptionData, response);
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

void MessageDeliveryDataSubscriptionsCollectionApi::
    message_delivery_data_subscriptions_collection_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org