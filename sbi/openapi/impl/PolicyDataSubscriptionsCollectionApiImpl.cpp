/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PolicyDataSubscriptionsCollectionApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

PolicyDataSubscriptionsCollectionApiImpl::
    PolicyDataSubscriptionsCollectionApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : PolicyDataSubscriptionsCollectionApi(rtr) {}

void PolicyDataSubscriptionsCollectionApiImpl::
    create_individual_policy_data_subscription(
        const PolicyDataSubscription &policyDataSubscription,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
