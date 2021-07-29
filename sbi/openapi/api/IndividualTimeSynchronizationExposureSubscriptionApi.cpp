/**
 * 3gpp-time-sync-exposure
 * API for time synchronization exposure. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualTimeSynchronizationExposureSubscriptionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualTimeSynchronizationExposureSubscriptionApi::
    IndividualTimeSynchronizationExposureSubscriptionApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualTimeSynchronizationExposureSubscriptionApi::init() {
  setupRoutes();
}

void IndividualTimeSynchronizationExposureSubscriptionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(&IndividualTimeSynchronizationExposureSubscriptionApi::
                       af_id_subscriptions_subscription_id_delete_handler,
                   this));
  Routes::Get(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(&IndividualTimeSynchronizationExposureSubscriptionApi::
                       af_id_subscriptions_subscription_id_get_handler,
                   this));
  Routes::Put(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(&IndividualTimeSynchronizationExposureSubscriptionApi::
                       af_id_subscriptions_subscription_id_put_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualTimeSynchronizationExposureSubscriptionApi::
          individual_time_synchronization_exposure_subscription_api_default_handler,
      this));
}

void IndividualTimeSynchronizationExposureSubscriptionApi::
    af_id_subscriptions_subscription_id_delete_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto afId = request.param(":afId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  try {
    this->af_id_subscriptions_subscription_id_delete(afId, subscriptionId,
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
void IndividualTimeSynchronizationExposureSubscriptionApi::
    af_id_subscriptions_subscription_id_get_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto afId = request.param(":afId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  try {
    this->af_id_subscriptions_subscription_id_get(afId, subscriptionId,
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
void IndividualTimeSynchronizationExposureSubscriptionApi::
    af_id_subscriptions_subscription_id_put_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto afId = request.param(":afId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  TimeSyncExposureSubsc timeSyncExposureSubsc;

  try {
    nlohmann::json::parse(request.body()).get_to(timeSyncExposureSubsc);
    this->af_id_subscriptions_subscription_id_put(
        afId, subscriptionId, timeSyncExposureSubsc, response);
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

void IndividualTimeSynchronizationExposureSubscriptionApi::
    individual_time_synchronization_exposure_subscription_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
