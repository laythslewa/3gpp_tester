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

#include "SMSFNon3GPPRegistrationDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SMSFNon3GPPRegistrationDocumentApiImpl::SMSFNon3GPPRegistrationDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : SMSFNon3GPPRegistrationDocumentApi(rtr) {}

void SMSFNon3GPPRegistrationDocumentApiImpl::create_smsf_context_non3gpp(
    const std::string &ueId, const SmsfRegistration &smsfRegistration,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SMSFNon3GPPRegistrationDocumentApiImpl::delete_smsf_context_non3gpp(
    const std::string &ueId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void SMSFNon3GPPRegistrationDocumentApiImpl::query_smsf_context_non3gpp(
    const std::string &ueId,
    const Pistache::Optional<std::vector<std::string>> &fields,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
