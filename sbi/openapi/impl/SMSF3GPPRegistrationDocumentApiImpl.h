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
 * SMSF3GPPRegistrationDocumentApiImpl.h
 *
 *
 */

#ifndef SMSF3_GPP_REGISTRATION_DOCUMENT_API_IMPL_H_
#define SMSF3_GPP_REGISTRATION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SMSF3GPPRegistrationDocumentApi.h>

#include <pistache/optional.h>

#include "SmsfRegistration.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SMSF3GPPRegistrationDocumentApiImpl
    : public org::openapitools::server::api::SMSF3GPPRegistrationDocumentApi {
public:
  SMSF3GPPRegistrationDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~SMSF3GPPRegistrationDocumentApiImpl() {}

  void create_smsf_context3gpp(const std::string &ueId,
                               const SmsfRegistration &smsfRegistration,
                               Pistache::Http::ResponseWriter &response);
  void delete_smsf_context3gpp(const std::string &ueId,
                               Pistache::Http::ResponseWriter &response);
  void query_smsf_context3gpp(
      const std::string &ueId,
      const Pistache::Optional<std::vector<std::string>> &fields,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif