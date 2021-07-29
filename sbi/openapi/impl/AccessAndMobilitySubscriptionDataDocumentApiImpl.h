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
 * AccessAndMobilitySubscriptionDataDocumentApiImpl.h
 *
 *
 */

#ifndef ACCESS_AND_MOBILITY_SUBSCRIPTION_DATA_DOCUMENT_API_IMPL_H_
#define ACCESS_AND_MOBILITY_SUBSCRIPTION_DATA_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <AccessAndMobilitySubscriptionDataDocumentApi.h>

#include <pistache/optional.h>

#include "AccessAndMobilitySubscriptionData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class AccessAndMobilitySubscriptionDataDocumentApiImpl
    : public org::openapitools::server::api::
          AccessAndMobilitySubscriptionDataDocumentApi {
public:
  AccessAndMobilitySubscriptionDataDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~AccessAndMobilitySubscriptionDataDocumentApiImpl() {}

  void query_am_data(
      const std::string &ueId, const std::string &servingPlmnId,
      const Pistache::Optional<std::vector<std::string>> &fields,
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