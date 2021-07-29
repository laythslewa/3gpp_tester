/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualAnalyticsExposureSubscriptionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualAnalyticsExposureSubscriptionApi::
    IndividualAnalyticsExposureSubscriptionApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualAnalyticsExposureSubscriptionApi::init() { setupRoutes(); }

void IndividualAnalyticsExposureSubscriptionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router, base + "/:afId/subscriptions/:subscriptionId",
      Routes::bind(&IndividualAnalyticsExposureSubscriptionApi::
                       af_id_subscriptions_subscription_id_delete_handler,
                   this));
  Routes::Get(*router, base + "/:afId/subscriptions/:subscriptionId",
              Routes::bind(&IndividualAnalyticsExposureSubscriptionApi::
                               af_id_subscriptions_subscription_id_get_handler,
                           this));
  Routes::Put(*router, base + "/:afId/subscriptions/:subscriptionId",
              Routes::bind(&IndividualAnalyticsExposureSubscriptionApi::
                               af_id_subscriptions_subscription_id_put_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualAnalyticsExposureSubscriptionApi::
          individual_analytics_exposure_subscription_api_default_handler,
      this));
}

void IndividualAnalyticsExposureSubscriptionApi::
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
void IndividualAnalyticsExposureSubscriptionApi::
    af_id_subscriptions_subscription_id_get_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto afId = request.param(":afId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the query params
  auto suppFeatQuery = request.query().get("supp-feat");
  Pistache::Optional<std::string> suppFeat;
  if (!suppFeatQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(suppFeatQuery.get(), valueQuery_instance)) {
      suppFeat = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->af_id_subscriptions_subscription_id_get(afId, subscriptionId,
                                                  suppFeat, response);
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
void IndividualAnalyticsExposureSubscriptionApi::
    af_id_subscriptions_subscription_id_put_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto afId = request.param(":afId").as<std::string>();
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  AnalyticsExposureSubsc analyticsExposureSubsc;

  try {
    nlohmann::json::parse(request.body()).get_to(analyticsExposureSubsc);
    this->af_id_subscriptions_subscription_id_put(
        afId, subscriptionId, analyticsExposureSubsc, response);
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

void IndividualAnalyticsExposureSubscriptionApi::
    individual_analytics_exposure_subscription_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
