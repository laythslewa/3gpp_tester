/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * DSAIRegistrationInformationApiImpl.h
 *
 *
 */

#ifndef DSAI_REGISTRATION_INFORMATION_API_IMPL_H_
#define DSAI_REGISTRATION_INFORMATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <DSAIRegistrationInformationApi.h>

#include <pistache/optional.h>

#include "DsaiTagInformation.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DSAIRegistrationInformationApiImpl
    : public org::openapitools::server::api::DSAIRegistrationInformationApi {
public:
  DSAIRegistrationInformationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~DSAIRegistrationInformationApiImpl() {}

  void
  get_dsai_info(const std::string &imsUeId,
                const Pistache::Optional<std::string> &applicationServerName,
                const Pistache::Optional<std::string> &dsaiTag,
                const Pistache::Optional<std::string> &supportedFeatures,
                Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif