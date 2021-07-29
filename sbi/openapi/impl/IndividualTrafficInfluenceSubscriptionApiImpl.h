/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualTrafficInfluenceSubscriptionApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_TRAFFIC_INFLUENCE_SUBSCRIPTION_API_IMPL_H_
#define INDIVIDUAL_TRAFFIC_INFLUENCE_SUBSCRIPTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualTrafficInfluenceSubscriptionApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "TrafficInfluSub.h"
#include "TrafficInfluSubPatch.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualTrafficInfluenceSubscriptionApiImpl
    : public org::openapitools::server::api::
          IndividualTrafficInfluenceSubscriptionApi {
public:
  IndividualTrafficInfluenceSubscriptionApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualTrafficInfluenceSubscriptionApiImpl() {}

  void af_id_subscriptions_subscription_id_delete(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response);
  void af_id_subscriptions_subscription_id_get(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response);
  void af_id_subscriptions_subscription_id_patch(
      const std::string &afId, const std::string &subscriptionId,
      const TrafficInfluSubPatch &trafficInfluSubPatch,
      Pistache::Http::ResponseWriter &response);
  void af_id_subscriptions_subscription_id_put(
      const std::string &afId, const std::string &subscriptionId,
      const TrafficInfluSub &trafficInfluSub,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif