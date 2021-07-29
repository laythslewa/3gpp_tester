/**
 * 3gpp-am-policyauthorization
 * API for AM policy authorization. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualApplicationAMContextApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_APPLICATION_AM_CONTEXT_API_IMPL_H_
#define INDIVIDUAL_APPLICATION_AM_CONTEXT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualApplicationAMContextApi.h>

#include <pistache/optional.h>

#include "AppAmContextExpData.h"
#include "AppAmContextExpRespData.h"
#include "AppAmContextExpUpdateData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualApplicationAMContextApiImpl
    : public org::openapitools::server::api::IndividualApplicationAMContextApi {
public:
  IndividualApplicationAMContextApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualApplicationAMContextApiImpl() {}

  void delete_app_am_context(const std::string &afId,
                             const std::string &appAmContextId,
                             Pistache::Http::ResponseWriter &response);
  void get_app_am_context(const std::string &afId,
                          const std::string &appAmContextId,
                          Pistache::Http::ResponseWriter &response);
  void
  mod_app_am_context(const std::string &afId, const std::string &appAmContextId,
                     const AppAmContextExpUpdateData &appAmContextExpUpdateData,
                     Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif