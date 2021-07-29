/**
 * Nhss_UECM
 * HSS UE Context Management © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * MMESGSNDeregistrationApiImpl.h
 *
 *
 */

#ifndef MMESGSN_DEREGISTRATION_API_IMPL_H_
#define MMESGSN_DEREGISTRATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <MMESGSNDeregistrationApi.h>

#include <pistache/optional.h>

#include "DeregistrationRequest.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class MMESGSNDeregistrationApiImpl
    : public org::openapitools::server::api::MMESGSNDeregistrationApi {
public:
  MMESGSNDeregistrationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~MMESGSNDeregistrationApiImpl() {}

  void deregister_sn(const DeregistrationRequest &deregistrationRequest,
                     Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif