/**
 * Unified Data Repository Service API file for Application Data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualIPTVConfigurationDataDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_IPTV_CONFIGURATION_DATA_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_IPTV_CONFIGURATION_DATA_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualIPTVConfigurationDataDocumentApi.h>

#include <pistache/optional.h>

#include "IptvConfigData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualIPTVConfigurationDataDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualIPTVConfigurationDataDocumentApi {
public:
  IndividualIPTVConfigurationDataDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualIPTVConfigurationDataDocumentApiImpl() {}

  void create_or_replace_individual_iptv_configuration_data(
      const std::string &configurationId, const IptvConfigData &iptvConfigData,
      Pistache::Http::ResponseWriter &response);
  void delete_individual_iptv_configuration_data(
      const std::string &configurationId,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif