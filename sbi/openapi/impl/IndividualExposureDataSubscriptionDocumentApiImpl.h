/**
 * Unified Data Repository Service API file for structured data for exposure
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
 * IndividualExposureDataSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_EXPOSURE_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_EXPOSURE_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualExposureDataSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "ExposureDataSubscription.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualExposureDataSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualExposureDataSubscriptionDocumentApi {
public:
  IndividualExposureDataSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualExposureDataSubscriptionDocumentApiImpl() {}

  void delete_individual_exposure_data_subscription(
      const std::string &subId, Pistache::Http::ResponseWriter &response);
  void replace_individual_exposure_data_subscription(
      const std::string &subId,
      const ExposureDataSubscription &exposureDataSubscription,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif