/**
 * Npcf_BDTPolicyControl Service API
 * PCF BDT Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualBDTPolicyDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualBDTPolicyDocumentApiImpl::IndividualBDTPolicyDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualBDTPolicyDocumentApi(rtr) {}

void IndividualBDTPolicyDocumentApiImpl::get_bdt_policy(
    const std::string &bdtPolicyId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualBDTPolicyDocumentApiImpl::update_bdt_policy(
    const std::string &bdtPolicyId, const PatchBdtPolicy &patchBdtPolicy,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org