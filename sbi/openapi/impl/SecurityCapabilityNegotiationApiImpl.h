/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SecurityCapabilityNegotiationApiImpl.h
 *
 *
 */

#ifndef SECURITY_CAPABILITY_NEGOTIATION_API_IMPL_H_
#define SECURITY_CAPABILITY_NEGOTIATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SecurityCapabilityNegotiationApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "SecNegotiateReqData.h"
#include "SecNegotiateRspData.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SecurityCapabilityNegotiationApiImpl
    : public org::openapitools::server::api::SecurityCapabilityNegotiationApi {
public:
  SecurityCapabilityNegotiationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~SecurityCapabilityNegotiationApiImpl() {}

  void post_exchange_capability(const SecNegotiateReqData &secNegotiateReqData,
                                Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif