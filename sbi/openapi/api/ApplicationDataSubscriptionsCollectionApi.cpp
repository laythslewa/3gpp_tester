/**
 * Unified Data Repository Service API file for Application Data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ApplicationDataSubscriptionsCollectionApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

ApplicationDataSubscriptionsCollectionApi::
    ApplicationDataSubscriptionsCollectionApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void ApplicationDataSubscriptionsCollectionApi::init() { setupRoutes(); }

void ApplicationDataSubscriptionsCollectionApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + "/application-data/subs-to-notify",
      Routes::bind(&ApplicationDataSubscriptionsCollectionApi::
                       create_individual_application_data_subscription_handler,
                   this));
  Routes::Get(
      *router, base + "/application-data/subs-to-notify",
      Routes::bind(&ApplicationDataSubscriptionsCollectionApi::
                       read_application_data_change_subscriptions_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &ApplicationDataSubscriptionsCollectionApi::
          application_data_subscriptions_collection_api_default_handler,
      this));
}

void ApplicationDataSubscriptionsCollectionApi::
    create_individual_application_data_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {

  // Getting the body param

  ApplicationDataSubs applicationDataSubs;

  try {
    nlohmann::json::parse(request.body()).get_to(applicationDataSubs);
    this->create_individual_application_data_subscription(applicationDataSubs,
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
void ApplicationDataSubscriptionsCollectionApi::
    read_application_data_change_subscriptions_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {

  // Getting the query params
  auto dataFilterQuery = request.query().get("data-filter");
  Pistache::Optional<DataFilter> dataFilter;
  if (!dataFilterQuery.isEmpty()) {
    DataFilter valueQuery_instance;
    if (fromStringValue(dataFilterQuery.get(), valueQuery_instance)) {
      dataFilter = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->read_application_data_change_subscriptions(dataFilter, response);
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

void ApplicationDataSubscriptionsCollectionApi::
    application_data_subscriptions_collection_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org