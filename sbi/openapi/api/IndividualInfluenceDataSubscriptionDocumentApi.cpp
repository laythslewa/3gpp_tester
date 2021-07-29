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

#include "IndividualInfluenceDataSubscriptionDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualInfluenceDataSubscriptionDocumentApi::
    IndividualInfluenceDataSubscriptionDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualInfluenceDataSubscriptionDocumentApi::init() { setupRoutes(); }

void IndividualInfluenceDataSubscriptionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router,
      base + "/application-data/influenceData/subs-to-notify/:subscriptionId",
      Routes::bind(&IndividualInfluenceDataSubscriptionDocumentApi::
                       delete_individual_influence_data_subscription_handler,
                   this));
  Routes::Get(
      *router,
      base + "/application-data/influenceData/subs-to-notify/:subscriptionId",
      Routes::bind(&IndividualInfluenceDataSubscriptionDocumentApi::
                       read_individual_influence_data_subscription_handler,
                   this));
  Routes::Put(
      *router,
      base + "/application-data/influenceData/subs-to-notify/:subscriptionId",
      Routes::bind(&IndividualInfluenceDataSubscriptionDocumentApi::
                       replace_individual_influence_data_subscription_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualInfluenceDataSubscriptionDocumentApi::
          individual_influence_data_subscription_document_api_default_handler,
      this));
}

void IndividualInfluenceDataSubscriptionDocumentApi::
    delete_individual_influence_data_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  try {
    this->delete_individual_influence_data_subscription(subscriptionId,
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
void IndividualInfluenceDataSubscriptionDocumentApi::
    read_individual_influence_data_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  try {
    this->read_individual_influence_data_subscription(subscriptionId, response);
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
void IndividualInfluenceDataSubscriptionDocumentApi::
    replace_individual_influence_data_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  TrafficInfluSub trafficInfluSub;

  try {
    nlohmann::json::parse(request.body()).get_to(trafficInfluSub);
    this->replace_individual_influence_data_subscription(
        subscriptionId, trafficInfluSub, response);
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

void IndividualInfluenceDataSubscriptionDocumentApi::
    individual_influence_data_subscription_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
