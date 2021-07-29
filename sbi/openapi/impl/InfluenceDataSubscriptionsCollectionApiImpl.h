/**
 * Unified Data Repository Service API file for Application Data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * InfluenceDataSubscriptionsCollectionApiImpl.h
 *
 *
 */

#ifndef INFLUENCE_DATA_SUBSCRIPTIONS_COLLECTION_API_IMPL_H_
#define INFLUENCE_DATA_SUBSCRIPTIONS_COLLECTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <InfluenceDataSubscriptionsCollectionApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "Snssai.h"
#include "TrafficInfluSub.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class InfluenceDataSubscriptionsCollectionApiImpl
    : public org::openapitools::server::api::
          InfluenceDataSubscriptionsCollectionApi {
public:
  InfluenceDataSubscriptionsCollectionApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~InfluenceDataSubscriptionsCollectionApiImpl() {}

  void create_individual_influence_data_subscription(
      const TrafficInfluSub &trafficInfluSub,
      Pistache::Http::ResponseWriter &response);
  void read_influence_data_subscriptions(
      const Pistache::Optional<std::string> &dnn,
      const Pistache::Optional<Snssai> &snssai,
      const Pistache::Optional<std::string> &internalGroupId,
      const Pistache::Optional<std::string> &supi,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif