/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ProseSubscriptionDataRetrievalApiImpl.h
 *
 *
 */

#ifndef PROSE_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_
#define PROSE_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <ProseSubscriptionDataRetrievalApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "ProseSubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ProseSubscriptionDataRetrievalApiImpl
    : public org::openapitools::server::api::ProseSubscriptionDataRetrievalApi {
public:
  ProseSubscriptionDataRetrievalApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~ProseSubscriptionDataRetrievalApiImpl() {}

  void get_prose_data(
      const std::string &supi,
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