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
 * IndividualIPTVConfigurationApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_IPTV_CONFIGURATION_API_IMPL_H_
#define INDIVIDUAL_IPTV_CONFIGURATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualIPTVConfigurationApi.h>

#include <pistache/optional.h>

#include "IptvConfigData.h"
#include "IptvConfigDataPatch.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualIPTVConfigurationApiImpl
    : public org::openapitools::server::api::IndividualIPTVConfigurationApi {
public:
  IndividualIPTVConfigurationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualIPTVConfigurationApiImpl() {}

  void af_id_configurations_configuration_id_delete(
      const std::string &afId, const std::string &configurationId,
      Pistache::Http::ResponseWriter &response);
  void af_id_configurations_configuration_id_get(
      const std::string &afId, const std::string &configurationId,
      Pistache::Http::ResponseWriter &response);
  void af_id_configurations_configuration_id_patch(
      const std::string &afId, const std::string &configurationId,
      const IptvConfigDataPatch &iptvConfigDataPatch,
      Pistache::Http::ResponseWriter &response);
  void af_id_configurations_configuration_id_put(
      const std::string &afId, const std::string &configurationId,
      const IptvConfigData &iptvConfigData,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif