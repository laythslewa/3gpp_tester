/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SCSCFRegistrationAndDeregistrationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

SCSCFRegistrationAndDeregistrationApiImpl::
    SCSCFRegistrationAndDeregistrationApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : SCSCFRegistrationAndDeregistrationApi(rtr) {}

void SCSCFRegistrationAndDeregistrationApiImpl::s_cscf_registration(
    const std::string &imsUeId, const ScscfRegistration &scscfRegistration,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org