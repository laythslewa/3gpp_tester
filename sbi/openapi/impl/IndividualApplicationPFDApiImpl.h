/**
 * Nnef_PFDmanagement Service API
 * Packet Flow Description Management Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IndividualApplicationPFDApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_APPLICATION_PFD_API_IMPL_H_
#define INDIVIDUAL_APPLICATION_PFD_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualApplicationPFDApi.h>

#include <pistache/optional.h>

#include "PfdDataForApp.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualApplicationPFDApiImpl
    : public org::openapitools::server::api::IndividualApplicationPFDApi {
public:
  IndividualApplicationPFDApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualApplicationPFDApiImpl() {}

  void nnef_pf_dmanagement_ind_app_fetch(
      const std::string &appId,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif