/**
 * 3gpp-lpi-pp
 * API for Location Privacy Indication Parameters Provisioning. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualLPIParametersProvisioningApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_LPI_PARAMETERS_PROVISIONING_API_IMPL_H_
#define INDIVIDUAL_LPI_PARAMETERS_PROVISIONING_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualLPIParametersProvisioningApi.h>

#include <pistache/optional.h>

#include "LpiParametersProvision.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualLPIParametersProvisioningApiImpl
    : public org::openapitools::server::api::
          IndividualLPIParametersProvisioningApi {
public:
  IndividualLPIParametersProvisioningApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualLPIParametersProvisioningApiImpl() {}

  void af_id_provisioned_lpis_provisioned_lpi_id_delete(
      const std::string &afId, const std::string &provisionedLpiId,
      Pistache::Http::ResponseWriter &response);
  void af_id_provisioned_lpis_provisioned_lpi_id_get(
      const std::string &afId, const std::string &provisionedLpiId,
      Pistache::Http::ResponseWriter &response);
  void af_id_provisioned_lpis_provisioned_lpi_id_put(
      const std::string &afId, const std::string &provisionedLpiId,
      const LpiParametersProvision &lpiParametersProvision,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif