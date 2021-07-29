/**
 * 3gpp-acs-pp
 * API for 5G ACS Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualACSConfigurationSubscriptionApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_ACS_CONFIGURATION_SUBSCRIPTION_API_IMPL_H_
#define INDIVIDUAL_ACS_CONFIGURATION_SUBSCRIPTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualACSConfigurationSubscriptionApi.h>

#include <pistache/optional.h>

#include "AcsConfigurationData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualACSConfigurationSubscriptionApiImpl
    : public org::openapitools::server::api::
          IndividualACSConfigurationSubscriptionApi {
public:
  IndividualACSConfigurationSubscriptionApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualACSConfigurationSubscriptionApiImpl() {}

  void af_id_subscriptions_subscription_id_delete(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response);
  void af_id_subscriptions_subscription_id_get(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response);
  void af_id_subscriptions_subscription_id_put(
      const std::string &afId, const std::string &subscriptionId,
      const AcsConfigurationData &acsConfigurationData,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif