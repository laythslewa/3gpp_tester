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
 * LCSBroadcastAssistanceSubscriptionDataApiImpl.h
 *
 *
 */

#ifndef LCS_BROADCAST_ASSISTANCE_SUBSCRIPTION_DATA_API_IMPL_H_
#define LCS_BROADCAST_ASSISTANCE_SUBSCRIPTION_DATA_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <LCSBroadcastAssistanceSubscriptionDataApi.h>

#include <pistache/optional.h>

#include "LcsBroadcastAssistanceTypesData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class LCSBroadcastAssistanceSubscriptionDataApiImpl
    : public org::openapitools::server::api::
          LCSBroadcastAssistanceSubscriptionDataApi {
public:
  LCSBroadcastAssistanceSubscriptionDataApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~LCSBroadcastAssistanceSubscriptionDataApiImpl() {}

  void query_lcs_bca_data(
      const std::string &ueId, const std::string &servingPlmnId,
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