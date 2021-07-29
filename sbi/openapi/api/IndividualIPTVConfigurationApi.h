/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * IndividualIPTVConfigurationApi.h
 *
 *
 */

#ifndef IndividualIPTVConfigurationApi_H_
#define IndividualIPTVConfigurationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "IptvConfigData.h"
#include "IptvConfigDataPatch.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualIPTVConfigurationApi {
public:
  IndividualIPTVConfigurationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualIPTVConfigurationApi() {}
  void init();

  const std::string base = "/3gpp-iptvconfiguration/v1";

private:
  void setupRoutes();

  void af_id_configurations_configuration_id_delete_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void af_id_configurations_configuration_id_get_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void af_id_configurations_configuration_id_patch_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void af_id_configurations_configuration_id_put_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_iptv_configuration_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Deletes an already existing configuration
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="configurationId">Identifier of the configuration
  /// resource</param>
  virtual void af_id_configurations_configuration_id_delete(
      const std::string &afId, const std::string &configurationId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// read an active configuration for the AF and the configuration Id
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="configurationId">Identifier of the configuration
  /// resource</param>
  virtual void af_id_configurations_configuration_id_get(
      const std::string &afId, const std::string &configurationId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Partial updates an existing configuration resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="configurationId">Identifier of the configuration
  /// resource</param> <param name="iptvConfigDataPatch"></param>
  virtual void af_id_configurations_configuration_id_patch(
      const std::string &afId, const std::string &configurationId,
      const IptvConfigDataPatch &iptvConfigDataPatch,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Updates/replaces an existing configuration resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="configurationId">Identifier of the configuration
  /// resource</param> <param name="iptvConfigData">Parameters to update/replace
  /// the existing configuration</param>
  virtual void af_id_configurations_configuration_id_put(
      const std::string &afId, const std::string &configurationId,
      const IptvConfigData &iptvConfigData,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualIPTVConfigurationApi_H_ */