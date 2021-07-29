/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualApplicationSessionContextDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualApplicationSessionContextDocumentApiImpl::
    IndividualApplicationSessionContextDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualApplicationSessionContextDocumentApi(rtr) {}

void IndividualApplicationSessionContextDocumentApiImpl::delete_app_session(
    const std::string &appSessionId,
    const EventsSubscReqData &eventsSubscReqData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualApplicationSessionContextDocumentApiImpl::get_app_session(
    const std::string &appSessionId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualApplicationSessionContextDocumentApiImpl::mod_app_session(
    const std::string &appSessionId,
    const AppSessionContextUpdateDataPatch &appSessionContextUpdateDataPatch,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org