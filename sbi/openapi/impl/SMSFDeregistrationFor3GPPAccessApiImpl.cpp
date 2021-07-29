/**
 * Nudm_UECM
 * Nudm Context Management Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SMSFDeregistrationFor3GPPAccessApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SMSFDeregistrationFor3GPPAccessApiImpl::SMSFDeregistrationFor3GPPAccessApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : SMSFDeregistrationFor3GPPAccessApi(rtr) {}

void SMSFDeregistrationFor3GPPAccessApiImpl::3_gpp_smsf_deregistration(
    const std::string &ueId, const Pistache::Optional<std::string> &smsfSetId,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
