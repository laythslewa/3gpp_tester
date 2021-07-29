/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AuthenticationSoRDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AuthenticationSoRDocumentApiImpl::AuthenticationSoRDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : AuthenticationSoRDocumentApi(rtr) {}

void AuthenticationSoRDocumentApiImpl::create_authentication_so_r(
    const std::string &ueId, const SorData &sorData,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void AuthenticationSoRDocumentApiImpl::query_auth_so_r(
    const std::string &ueId,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org