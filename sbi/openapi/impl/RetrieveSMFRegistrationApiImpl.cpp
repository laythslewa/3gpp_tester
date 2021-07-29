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

#include "RetrieveSMFRegistrationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

RetrieveSMFRegistrationApiImpl::RetrieveSMFRegistrationApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : RetrieveSMFRegistrationApi(rtr) {}

void RetrieveSMFRegistrationApiImpl::retrieve_smf_registration(
    const std::string &ueId, const int32_t &pduSessionId,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org