/**
 * Nsmsf_SMService Service API
 * SMSF SMService. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DeactivationOfSMSServiceApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

DeactivationOfSMSServiceApiImpl::DeactivationOfSMSServiceApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : DeactivationOfSMSServiceApi(rtr) {}

void DeactivationOfSMSServiceApiImpl::s_m_service_deactivation(
    const std::string &supi,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifMatch,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
