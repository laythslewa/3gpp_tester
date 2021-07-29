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
 * PFDSubscriptionsApiImpl.h
 *
 *
 */

#ifndef PFD_SUBSCRIPTIONS_API_IMPL_H_
#define PFD_SUBSCRIPTIONS_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <PFDSubscriptionsApi.h>

#include <pistache/optional.h>

#include "PfdSubscription.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class PFDSubscriptionsApiImpl
    : public org::openapitools::server::api::PFDSubscriptionsApi {
public:
  PFDSubscriptionsApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~PFDSubscriptionsApiImpl() {}

  void
  nnef_pf_dmanagement_create_subscr(const PfdSubscription &pfdSubscription,
                                    Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif