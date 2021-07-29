/**
 * Nudsf_Timer
 * Nudsf Timer Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * TimerStopApiImpl.h
 *
 *
 */

#ifndef TIMER_STOP_API_IMPL_H_
#define TIMER_STOP_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <TimerStopApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class TimerStopApiImpl : public org::openapitools::server::api::TimerStopApi {
public:
  TimerStopApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~TimerStopApiImpl() {}

  void delete_timer(const std::string &realmId, const std::string &storageId,
                    const std::string &timerId,
                    const Pistache::Optional<std::string> &supportedFeatures,
                    Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif