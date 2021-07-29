/**
 * SS_NetworkResourceAdaptation
 * SS Network Resource Adaptation Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualUnicastSubscriptionDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualUnicastSubscriptionDocumentApi::
    IndividualUnicastSubscriptionDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualUnicastSubscriptionDocumentApi::init() { setupRoutes(); }

void IndividualUnicastSubscriptionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(*router, base + "/unicast-subscriptions/:uniSubId",
                 Routes::bind(&IndividualUnicastSubscriptionDocumentApi::
                                  delete_unicast_subscription_handler,
                              this));
  Routes::Get(*router, base + "/unicast-subscriptions/:uniSubId",
              Routes::bind(&IndividualUnicastSubscriptionDocumentApi::
                               get_unicast_subscription_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualUnicastSubscriptionDocumentApi::
          individual_unicast_subscription_document_api_default_handler,
      this));
}

void IndividualUnicastSubscriptionDocumentApi::
    delete_unicast_subscription_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto uniSubId = request.param(":uniSubId").as<std::string>();

  try {
    this->delete_unicast_subscription(uniSubId, response);
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
void IndividualUnicastSubscriptionDocumentApi::get_unicast_subscription_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto uniSubId = request.param(":uniSubId").as<std::string>();

  try {
    this->get_unicast_subscription(uniSubId, response);
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

void IndividualUnicastSubscriptionDocumentApi::
    individual_unicast_subscription_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
