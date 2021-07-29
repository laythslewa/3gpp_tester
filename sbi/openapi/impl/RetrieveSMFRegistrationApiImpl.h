/**
 * Nudm_UECM
 * Nudm Context Management Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * RetrieveSMFRegistrationApiImpl.h
 *
 *
 */

#ifndef RETRIEVE_SMF_REGISTRATION_API_IMPL_H_
#define RETRIEVE_SMF_REGISTRATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <RetrieveSMFRegistrationApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "SmfRegistration.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RetrieveSMFRegistrationApiImpl
    : public org::openapitools::server::api::RetrieveSMFRegistrationApi {
public:
  RetrieveSMFRegistrationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~RetrieveSMFRegistrationApiImpl() {}

  void retrieve_smf_registration(const std::string &ueId,
                                 const int32_t &pduSessionId,
                                 Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif