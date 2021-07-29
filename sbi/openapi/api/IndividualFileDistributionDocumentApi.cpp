/**
 * VAE_FileDistribution
 * API for VAE File Distribution Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualFileDistributionDocumentApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

IndividualFileDistributionDocumentApi::IndividualFileDistributionDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualFileDistributionDocumentApi::init() { setupRoutes(); }

void IndividualFileDistributionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(*router, base + "/file-distributions/:distributionId",
                 Routes::bind(&IndividualFileDistributionDocumentApi::
                                  delete_file_distribution_handler,
                              this));
  Routes::Get(*router, base + "/file-distributions/:distributionId",
              Routes::bind(&IndividualFileDistributionDocumentApi::
                               read_individual_file_distribution_handler,
                           this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualFileDistributionDocumentApi::
          individual_file_distribution_document_api_default_handler,
      this));
}

void IndividualFileDistributionDocumentApi::delete_file_distribution_handler(
    const Pistache::Rest::Request &request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto distributionId = request.param(":distributionId").as<std::string>();

  try {
    this->delete_file_distribution(distributionId, response);
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
void IndividualFileDistributionDocumentApi::
    read_individual_file_distribution_handler(
        const Pistache::Rest::Request &request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto distributionId = request.param(":distributionId").as<std::string>();

  try {
    this->read_individual_file_distribution(distributionId, response);
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

void IndividualFileDistributionDocumentApi::
    individual_file_distribution_document_api_default_handler(
        const Pistache::Rest::Request &,
        Pistache::Http::ResponseWriter response) {
  response.send(Pistache::Http::Code::Not_Found,
                "The requested method does not exist");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org