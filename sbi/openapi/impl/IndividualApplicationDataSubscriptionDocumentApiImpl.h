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
 * IndividualApplicationDataSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_APPLICATION_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_APPLICATION_DATA_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualApplicationDataSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "ApplicationDataSubs.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualApplicationDataSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualApplicationDataSubscriptionDocumentApi {
public:
  IndividualApplicationDataSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualApplicationDataSubscriptionDocumentApiImpl() {}

  void delete_individual_application_data_subscription(
      const std::string &subsId, Pistache::Http::ResponseWriter &response);
  void read_individual_application_data_subscription(
      const std::string &subsId, Pistache::Http::ResponseWriter &response);
  void replace_individual_application_data_subscription(
      const std::string &subsId, const ApplicationDataSubs &applicationDataSubs,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif