/**
 * VAE_HDMapDynamicInfo
 * API for VAE HDMapDynamicInfo Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualHdMapDynamicInfoSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_HD_MAP_DYNAMIC_INFO_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_HD_MAP_DYNAMIC_INFO_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualHdMapDynamicInfoSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "HdMapDynamicInfoData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualHdMapDynamicInfoSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualHdMapDynamicInfoSubscriptionDocumentApi {
public:
  IndividualHdMapDynamicInfoSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualHdMapDynamicInfoSubscriptionDocumentApiImpl() {}

  void read_hd_map_dynamic_info_subscription(
      const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif