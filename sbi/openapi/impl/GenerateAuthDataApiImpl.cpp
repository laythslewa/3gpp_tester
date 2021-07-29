/**
 * Nhss_imsUEAU
 * Nhss UE Authentication Service for IMS. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "GenerateAuthDataApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

GenerateAuthDataApiImpl::GenerateAuthDataApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : GenerateAuthDataApi(rtr) {}

void GenerateAuthDataApiImpl::generate_sip_auth_data(
    const std::string &impi,
    const SipAuthenticationInfoRequest &sipAuthenticationInfoRequest,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org