/**
 * Unified Data Repository Service API file for policy data
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
 * PlmnUePolicySetDocumentApiImpl.h
 *
 *
 */

#ifndef PLMN_UE_POLICY_SET_DOCUMENT_API_IMPL_H_
#define PLMN_UE_POLICY_SET_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <PlmnUePolicySetDocumentApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "UePolicySet.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class PlmnUePolicySetDocumentApiImpl
    : public org::openapitools::server::api::PlmnUePolicySetDocumentApi {
public:
  PlmnUePolicySetDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~PlmnUePolicySetDocumentApiImpl() {}

  void read_plmn_ue_policy_set(const std::string &plmnId,
                               Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif