/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RepositoryDataApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

RepositoryDataApi::RepositoryDataApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void RepositoryDataApi::init() { setupRoutes(); }

void RepositoryDataApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + "/:imsUeId/repository-data/:serviceIndication",
      Routes::bind(&RepositoryDataApi::get_repository_data_serv_ind_handler,
                   this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &RepositoryDataApi::repository_data_api_default_handler, this));
}

void RepositoryDataApi::get_repository_data_serv_ind_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto imsUeId = request.param(":imsUeId").as<std::string>();
  auto serviceIndication =
      request.param(":serviceIndication").as<std::string>();

  try {
    this->get_repository_data_serv_ind(imsUeId, serviceIndication, response);
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

void RepositoryDataApi::repository_data_api_default_handler(
    const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org