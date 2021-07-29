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
 * RegistrationStatusRetrievalApiImpl.h
 *
 *
 */

#ifndef REGISTRATION_STATUS_RETRIEVAL_API_IMPL_H_
#define REGISTRATION_STATUS_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <RegistrationStatusRetrievalApi.h>

#include <pistache/optional.h>

#include "ImsRegistrationStatus.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RegistrationStatusRetrievalApiImpl
    : public org::openapitools::server::api::RegistrationStatusRetrievalApi {
public:
  RegistrationStatusRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~RegistrationStatusRetrievalApiImpl() {}

  void get_registration_status(
      const std::string &imsUeId,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif