/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
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
 * IndividualSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualSubscriptionDocumentApiImpl
    : public org::openapitools::server::api::IndividualSubscriptionDocumentApi {
public:
  IndividualSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualSubscriptionDocumentApiImpl() {}

  void delete_individual_subcription(const std::string &subscriptionId,
                                     Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif