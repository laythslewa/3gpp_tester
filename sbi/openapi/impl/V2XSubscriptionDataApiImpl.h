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
 * V2XSubscriptionDataApiImpl.h
 *
 *
 */

#ifndef V2_X_SUBSCRIPTION_DATA_API_IMPL_H_
#define V2_X_SUBSCRIPTION_DATA_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <V2XSubscriptionDataApi.h>

#include <pistache/optional.h>

#include "V2xSubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class V2XSubscriptionDataApiImpl
    : public org::openapitools::server::api::V2XSubscriptionDataApi {
public:
  V2XSubscriptionDataApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~V2XSubscriptionDataApiImpl() {}

  void query_v2x_data(
      const std::string &ueId,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif