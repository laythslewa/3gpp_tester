/**
 * Nsmsf_SMService Service API
 * SMSF SMService. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ActivationOfSMSServiceApiImpl.h
 *
 *
 */

#ifndef ACTIVATION_OF_SMS_SERVICE_API_IMPL_H_
#define ACTIVATION_OF_SMS_SERVICE_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <ActivationOfSMSServiceApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "UeSmsContextData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ActivationOfSMSServiceApiImpl
    : public org::openapitools::server::api::ActivationOfSMSServiceApi {
public:
  ActivationOfSMSServiceApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~ActivationOfSMSServiceApiImpl() {}

  void s_m_service_activation(const std::string &supi,
                              const UeSmsContextData &ueSmsContextData,
                              Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif