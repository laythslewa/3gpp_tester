/**
 * Npcf_AMPolicyAuthorization Service API
 * PCF Access and Mobility Policy Authorization Service. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * AMPolicyEventsSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef AM_POLICY_EVENTS_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define AM_POLICY_EVENTS_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <AMPolicyEventsSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "AmEventsSubscData.h"
#include "AmEventsSubscRespData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AMPolicyEventsSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::
          AMPolicyEventsSubscriptionDocumentApi {
public:
  AMPolicyEventsSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~AMPolicyEventsSubscriptionDocumentApiImpl() {}

  void delete_am_events_subsc(const std::string &appAmContextId,
                              Pistache::Http::ResponseWriter &response);
  void update_am_events_subsc(const std::string &appAmContextId,
                              const AmEventsSubscData &amEventsSubscData,
                              Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif