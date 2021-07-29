/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N1N2MessageCollectionDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

N1N2MessageCollectionDocumentApiImpl::N1N2MessageCollectionDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : N1N2MessageCollectionDocumentApi(rtr) {}

void N1N2MessageCollectionDocumentApiImpl::n1_n2_message_transfer(
    const std::string &ueContextId,
    const N1N2MessageTransferReqData &n1N2MessageTransferReqData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
