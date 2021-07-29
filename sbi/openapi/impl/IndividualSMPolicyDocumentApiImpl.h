/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualSMPolicyDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_SM_POLICY_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_SM_POLICY_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualSMPolicyDocumentApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SmPolicyControl.h"
#include "SmPolicyDecision.h"
#include "SmPolicyDeleteData.h"
#include "SmPolicyUpdateContextData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualSMPolicyDocumentApiImpl
    : public org::openapitools::server::api::IndividualSMPolicyDocumentApi {
public:
  IndividualSMPolicyDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualSMPolicyDocumentApiImpl() {}

  void delete_sm_policy(const std::string &smPolicyId,
                        const SmPolicyDeleteData &smPolicyDeleteData,
                        Pistache::Http::ResponseWriter &response);
  void get_sm_policy(const std::string &smPolicyId,
                     Pistache::Http::ResponseWriter &response);
  void
  update_sm_policy(const std::string &smPolicyId,
                   const SmPolicyUpdateContextData &smPolicyUpdateContextData,
                   Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif