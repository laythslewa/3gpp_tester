/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ProvidingAcknowledgementOfSteeringOfRoamingApiImpl.h
 *
 *
 */

#ifndef PROVIDING_ACKNOWLEDGEMENT_OF_STEERING_OF_ROAMING_API_IMPL_H_
#define PROVIDING_ACKNOWLEDGEMENT_OF_STEERING_OF_ROAMING_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <ProvidingAcknowledgementOfSteeringOfRoamingApi.h>

#include <pistache/optional.h>

#include "AcknowledgeInfo.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ProvidingAcknowledgementOfSteeringOfRoamingApiImpl
    : public org::openapitools::server::api::
          ProvidingAcknowledgementOfSteeringOfRoamingApi {
public:
  ProvidingAcknowledgementOfSteeringOfRoamingApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~ProvidingAcknowledgementOfSteeringOfRoamingApiImpl() {}

  void sor_ack_info(const std::string &supi,
                    const AcknowledgeInfo &acknowledgeInfo,
                    Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif