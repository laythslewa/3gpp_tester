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
 * N32FContextTerminateApiImpl.h
 *
 *
 */

#ifndef N32_F_CONTEXT_TERMINATE_API_IMPL_H_
#define N32_F_CONTEXT_TERMINATE_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <N32FContextTerminateApi.h>

#include <pistache/optional.h>

#include "N32fContextInfo.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class N32FContextTerminateApiImpl
    : public org::openapitools::server::api::N32FContextTerminateApi {
public:
  N32FContextTerminateApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~N32FContextTerminateApiImpl() {}

  void post_n32f_terminate(const N32fContextInfo &n32fContextInfo,
                           Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif