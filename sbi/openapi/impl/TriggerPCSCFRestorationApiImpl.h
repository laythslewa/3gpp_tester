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
 * TriggerPCSCFRestorationApiImpl.h
 *
 *
 */

#ifndef TRIGGER_PCSCF_RESTORATION_API_IMPL_H_
#define TRIGGER_PCSCF_RESTORATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <TriggerPCSCFRestorationApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "TriggerRequest.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class TriggerPCSCFRestorationApiImpl
    : public org::openapitools::server::api::TriggerPCSCFRestorationApi {
public:
  TriggerPCSCFRestorationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~TriggerPCSCFRestorationApiImpl() {}

  void trigger_pcscf_restoration(const TriggerRequest &triggerRequest,
                                 Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif