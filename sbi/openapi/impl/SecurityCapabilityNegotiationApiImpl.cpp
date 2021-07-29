/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SecurityCapabilityNegotiationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SecurityCapabilityNegotiationApiImpl::SecurityCapabilityNegotiationApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : SecurityCapabilityNegotiationApi(rtr) {}

void SecurityCapabilityNegotiationApiImpl::post_exchange_capability(
    const SecNegotiateReqData &secNegotiateReqData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org