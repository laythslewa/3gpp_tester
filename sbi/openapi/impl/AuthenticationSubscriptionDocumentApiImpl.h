/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * AuthenticationSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef AUTHENTICATION_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define AUTHENTICATION_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <AuthenticationSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "PatchItem.h"
#include "PatchResult.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AuthenticationSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::
          AuthenticationSubscriptionDocumentApi {
public:
  AuthenticationSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~AuthenticationSubscriptionDocumentApiImpl() {}

  void modify_authentication_subscription(
      const std::string &ueId, const std::vector<PatchItem> &patchItem,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif