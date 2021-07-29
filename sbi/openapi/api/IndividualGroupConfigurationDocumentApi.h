/**
 * VAE_DynamicGroup
 * VAE_Dynamic_Group Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualGroupConfigurationDocumentApi.h
 *
 *
 */

#ifndef IndividualGroupConfigurationDocumentApi_H_
#define IndividualGroupConfigurationDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "GroupConfigurationData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualGroupConfigurationDocumentApi {
public:
  IndividualGroupConfigurationDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualGroupConfigurationDocumentApi() {}
  void init();

  const std::string base = "/vae-dynamic-group/v1";

private:
  void setupRoutes();

  void
  delete_group_configuration_handler(const Pistache::Rest::Request &request,
                                     Pistache::Http::ResponseWriter response);
  void read_dynamic_group_configuration_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_group_configuration_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// VAE Group Configuration resource delete service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="configId">Unique ID of the group configuration to be
  /// deleted</param>
  virtual void
  delete_group_configuration(const std::string &configId,
                             Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// VAE Group Configuration resource read service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="configId">Identifier of an group configuration
  /// resource</param>
  virtual void read_dynamic_group_configuration(
      const std::string &configId,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualGroupConfigurationDocumentApi_H_ */
