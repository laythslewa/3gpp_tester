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
 * SubsToNotifyCollectionApiImpl.h
 *
 *
 */

#ifndef SUBS_TO_NOTIFY_COLLECTION_API_IMPL_H_
#define SUBS_TO_NOTIFY_COLLECTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SubsToNotifyCollectionApi.h>

#include <pistache/optional.h>

#include "SubscriptionDataSubscriptions.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SubsToNotifyCollectionApiImpl
    : public org::openapitools::server::api::SubsToNotifyCollectionApi {
public:
  SubsToNotifyCollectionApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~SubsToNotifyCollectionApiImpl() {}

  void
  query_subs_to_notify(const Pistache::Optional<std::string> &ueId,
                       const Pistache::Optional<std::string> &supportedFeatures,
                       Pistache::Http::ResponseWriter &response);
  void remove_multiple_subscription_data_subscriptions(
      const Pistache::Optional<std::string> &ueId,
      const Pistache::Optional<std::string> &nfInstanceId,
      const Pistache::Optional<bool> &deleteAllNfs,
      const Pistache::Optional<bool> &implicitUnsubscribeIndication,
      Pistache::Http::ResponseWriter &response);
  void subscription_data_subscriptions(
      const SubscriptionDataSubscriptions &subscriptionDataSubscriptions,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif