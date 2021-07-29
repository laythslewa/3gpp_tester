/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UELocationInformationSubscriptionCreationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

UELocationInformationSubscriptionCreationApi::
    UELocationInformationSubscriptionCreationApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void UELocationInformationSubscriptionCreationApi::init() { setupRoutes(); }

void UELocationInformationSubscriptionCreationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(*router, base + "/loc-update-subs",
               Routes::bind(&UELocationInformationSubscriptionCreationApi::
                                location_update_subcribe_handler,
                            this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &UELocationInformationSubscriptionCreationApi::
          ue_location_information_subscription_creation_api_default_handler,
      this));
}

void UELocationInformationSubscriptionCreationApi::
    location_update_subcribe_handler(const Pistache::Rest::Request &request,
                                     Pistache::Http::ResponseWriter response) {

  // Getting the body param

  LocUpdateSubs locUpdateSubs;

  try {
    nlohmann::json::parse(request.body()).get_to(locUpdateSubs);
    this->location_update_subcribe(locUpdateSubs, response);
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

void UELocationInformationSubscriptionCreationApi::
    ue_location_information_subscription_creation_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
