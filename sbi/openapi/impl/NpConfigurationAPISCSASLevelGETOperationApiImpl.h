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
 * NpConfigurationAPISCSASLevelGETOperationApiImpl.h
 *
 *
 */

#ifndef NP_CONFIGURATION_APISCSAS_LEVEL_GET_OPERATION_API_IMPL_H_
#define NP_CONFIGURATION_APISCSAS_LEVEL_GET_OPERATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <NpConfigurationAPISCSASLevelGETOperationApi.h>

#include <pistache/optional.h>

#include "NpConfiguration.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NpConfigurationAPISCSASLevelGETOperationApiImpl
    : public org::openapitools::server::api::
          NpConfigurationAPISCSASLevelGETOperationApi {
public:
  NpConfigurationAPISCSASLevelGETOperationApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~NpConfigurationAPISCSASLevelGETOperationApiImpl() {}

  void scs_as_id_configurations_get(const std::string &scsAsId,
                                    Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif