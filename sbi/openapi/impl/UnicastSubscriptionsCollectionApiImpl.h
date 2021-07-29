/**
 * SS_NetworkResourceAdaptation
 * SS Network Resource Adaptation Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * UnicastSubscriptionsCollectionApiImpl.h
 *
 *
 */

#ifndef UNICAST_SUBSCRIPTIONS_COLLECTION_API_IMPL_H_
#define UNICAST_SUBSCRIPTIONS_COLLECTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <UnicastSubscriptionsCollectionApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "UnicastSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UnicastSubscriptionsCollectionApiImpl
    : public org::openapitools::server::api::UnicastSubscriptionsCollectionApi {
public:
  UnicastSubscriptionsCollectionApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~UnicastSubscriptionsCollectionApiImpl() {}

  void
  create_unicast_subscription(const UnicastSubscription &unicastSubscription,
                              Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif