/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TrafficInfluenceSubscriptionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

TrafficInfluenceSubscriptionApiImpl::TrafficInfluenceSubscriptionApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : TrafficInfluenceSubscriptionApi(rtr) {}

void TrafficInfluenceSubscriptionApiImpl::af_id_subscriptions_get(
    const std::string &afId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void TrafficInfluenceSubscriptionApiImpl::af_id_subscriptions_post(
    const std::string &afId, const TrafficInfluSub &trafficInfluSub,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
