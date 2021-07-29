/**
 * Naf_EventExposure
 * AF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ApplicationEventSubscriptionCollectionApiImpl.h
 *
 *
 */

#ifndef APPLICATION_EVENT_SUBSCRIPTION_COLLECTION_API_IMPL_H_
#define APPLICATION_EVENT_SUBSCRIPTION_COLLECTION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <ApplicationEventSubscriptionCollectionApi.h>

#include <pistache/optional.h>

#include "AfEventExposureSubsc.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ApplicationEventSubscriptionCollectionApiImpl
    : public org::openapitools::server::api::
          ApplicationEventSubscriptionCollectionApi {
public:
  ApplicationEventSubscriptionCollectionApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~ApplicationEventSubscriptionCollectionApiImpl() {}

  void
  post_af_event_exposure_subsc(const AfEventExposureSubsc &afEventExposureSubsc,
                               Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif