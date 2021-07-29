/**
 * Nnssaaf_NSSAA
 * Network Slice-Specific Authentication and Authorization Service. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SliceAuthenticationContextCreationApiImpl.h
 *
 *
 */

#ifndef SLICE_AUTHENTICATION_CONTEXT_CREATION_API_IMPL_H_
#define SLICE_AUTHENTICATION_CONTEXT_CREATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SliceAuthenticationContextCreationApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SliceAuthContext.h"
#include "SliceAuthInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SliceAuthenticationContextCreationApiImpl
    : public org::openapitools::server::api::
          SliceAuthenticationContextCreationApi {
public:
  SliceAuthenticationContextCreationApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~SliceAuthenticationContextCreationApiImpl() {}

  void
  create_slice_authentication_context(const SliceAuthInfo &sliceAuthInfo,
                                      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif