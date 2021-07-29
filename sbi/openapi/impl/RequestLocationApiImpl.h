/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * RequestLocationApiImpl.h
 *
 *
 */

#ifndef REQUEST_LOCATION_API_IMPL_H_
#define REQUEST_LOCATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <RequestLocationApi.h>

#include <pistache/optional.h>

#include "InputData.h"
#include "LocationData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RequestLocationApiImpl
    : public org::openapitools::server::api::RequestLocationApi {
public:
  RequestLocationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~RequestLocationApiImpl() {}

  void request_location(const InputData &inputData,
                        Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif