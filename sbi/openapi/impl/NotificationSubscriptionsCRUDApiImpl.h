/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * NotificationSubscriptionsCRUDApiImpl.h
 *
 *
 */

#ifndef NOTIFICATION_SUBSCRIPTIONS_CRUD_API_IMPL_H_
#define NOTIFICATION_SUBSCRIPTIONS_CRUD_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <NotificationSubscriptionsCRUDApi.h>

#include <pistache/optional.h>

#include "NotificationSubscription.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NotificationSubscriptionsCRUDApiImpl
    : public org::openapitools::server::api::NotificationSubscriptionsCRUDApi {
public:
  NotificationSubscriptionsCRUDApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~NotificationSubscriptionsCRUDApiImpl() {}

  void get_notification_subscriptions(
      const std::string &realmId, const std::string &storageId,
      const Pistache::Optional<int32_t> &limitRange,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif