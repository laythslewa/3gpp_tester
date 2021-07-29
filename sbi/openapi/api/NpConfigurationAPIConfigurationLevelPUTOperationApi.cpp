/**
 * 3gpp-network-parameter-configuration
 * API for network parameter configuration. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NpConfigurationAPIConfigurationLevelPUTOperationApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

NpConfigurationAPIConfigurationLevelPUTOperationApi::
    NpConfigurationAPIConfigurationLevelPUTOperationApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void NpConfigurationAPIConfigurationLevelPUTOperationApi::init() {
  setupRoutes();
}

void NpConfigurationAPIConfigurationLevelPUTOperationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + "/:scsAsId/configurations/:configurationId",
      Routes::bind(&NpConfigurationAPIConfigurationLevelPUTOperationApi::
                       scs_as_id_configurations_configuration_id_put_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NpConfigurationAPIConfigurationLevelPUTOperationApi::
          np_configuration_api_configuration_level_put_operation_api_default_handler,
      this));
}

void NpConfigurationAPIConfigurationLevelPUTOperationApi::
    scs_as_id_configurations_configuration_id_put_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto scsAsId = request.param(":scsAsId").as<std::string>();
  auto configurationId = request.param(":configurationId").as<std::string>();

  // Getting the body param

  NpConfiguration npConfiguration;

  try {
    nlohmann::json::parse(request.body()).get_to(npConfiguration);
    this->scs_as_id_configurations_configuration_id_put(
        scsAsId, configurationId, npConfiguration, response);
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

void NpConfigurationAPIConfigurationLevelPUTOperationApi::
    np_configuration_api_configuration_level_put_operation_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org