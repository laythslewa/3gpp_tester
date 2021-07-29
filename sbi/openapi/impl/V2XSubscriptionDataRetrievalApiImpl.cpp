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

#include "V2XSubscriptionDataRetrievalApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

V2XSubscriptionDataRetrievalApiImpl::V2XSubscriptionDataRetrievalApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : V2XSubscriptionDataRetrievalApi(rtr) {}

void V2XSubscriptionDataRetrievalApiImpl::get_v2x_data(
    const std::string &supi,
    const Pistache::Optional<std::string> &supportedFeatures,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
