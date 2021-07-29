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

#include "Query5GVnGroupConfigurationDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

Query5GVnGroupConfigurationDocumentApi::Query5GVnGroupConfigurationDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void Query5GVnGroupConfigurationDocumentApi::init() { setupRoutes(); }

void Query5GVnGroupConfigurationDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(*router,
              base +
                  "/subscription-data/group-data/5g-vn-groups/:externalGroupId",
              Routes::bind(&Query5GVnGroupConfigurationDocumentApi::
                               get5_g_vn_group_configuration_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &Query5GVnGroupConfigurationDocumentApi::
          query5_g_vn_group_configuration_document_api_default_handler,
      this));
}

void Query5GVnGroupConfigurationDocumentApi::
    get5_g_vn_group_configuration_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto externalGroupId = request.param(":externalGroupId").as<std::string>();

  try {
    this->get5_g_vn_group_configuration(externalGroupId, response);
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

void Query5GVnGroupConfigurationDocumentApi::
    query5_g_vn_group_configuration_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org