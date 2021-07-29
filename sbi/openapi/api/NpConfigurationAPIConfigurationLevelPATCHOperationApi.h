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
/*
 * NpConfigurationAPIConfigurationLevelPATCHOperationApi.h
 *
 *
 */

#ifndef NpConfigurationAPIConfigurationLevelPATCHOperationApi_H_
#define NpConfigurationAPIConfigurationLevelPATCHOperationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "NpConfiguration.h"
#include "NpConfigurationPatch.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NpConfigurationAPIConfigurationLevelPATCHOperationApi {
public:
  NpConfigurationAPIConfigurationLevelPATCHOperationApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~NpConfigurationAPIConfigurationLevelPATCHOperationApi() {}
  void init();

  const std::string base = "/3gpp-network-parameter-configuration/v1";

private:
  void setupRoutes();

  void scs_as_id_configurations_configuration_id_patch_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  np_configuration_api_configuration_level_patch_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Updates/replaces an existing configuration resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of the SCS/AS</param>
  /// <param name="configurationId">Identifier of the configuration
  /// resource</param> <param name="npConfigurationPatch"></param>
  virtual void scs_as_id_configurations_configuration_id_patch(
      const std::string &scsAsId, const std::string &configurationId,
      const NpConfigurationPatch &npConfigurationPatch,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NpConfigurationAPIConfigurationLevelPATCHOperationApi_H_ */
