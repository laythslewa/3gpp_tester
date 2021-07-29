/**
 * Npcf_AMPolicyAuthorization Service API
 * PCF Access and Mobility Policy Authorization Service. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualApplicationAMContextDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualApplicationAMContextDocumentApiImpl::
    IndividualApplicationAMContextDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualApplicationAMContextDocumentApi(rtr) {}

void IndividualApplicationAMContextDocumentApiImpl::delete_app_am_context(
    const std::string &appAmContextId,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualApplicationAMContextDocumentApiImpl::get_app_am_context(
    const std::string &appAmContextId,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualApplicationAMContextDocumentApiImpl::mod_app_am_context(
    const std::string &appAmContextId,
    const AppAmContextUpdateData &appAmContextUpdateData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
