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
 * IndividualAppliedBDTPolicyDataDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_APPLIED_BDT_POLICY_DATA_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_APPLIED_BDT_POLICY_DATA_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualAppliedBDTPolicyDataDocumentApi.h>

#include <pistache/optional.h>

#include "BdtPolicyData.h"
#include "BdtPolicyDataPatch.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualAppliedBDTPolicyDataDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualAppliedBDTPolicyDataDocumentApi {
public:
  IndividualAppliedBDTPolicyDataDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualAppliedBDTPolicyDataDocumentApiImpl() {}

  void delete_individual_applied_bdt_policy_data(
      const std::string &bdtPolicyId, Pistache::Http::ResponseWriter &response);
  void update_individual_applied_bdt_policy_data(
      const std::string &bdtPolicyId,
      const BdtPolicyDataPatch &bdtPolicyDataPatch,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif