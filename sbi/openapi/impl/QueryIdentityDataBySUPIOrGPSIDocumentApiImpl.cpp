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

#include "QueryIdentityDataBySUPIOrGPSIDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

QueryIdentityDataBySUPIOrGPSIDocumentApiImpl::
    QueryIdentityDataBySUPIOrGPSIDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : QueryIdentityDataBySUPIOrGPSIDocumentApi(rtr) {}

void QueryIdentityDataBySUPIOrGPSIDocumentApiImpl::get_identity_data(
    const std::string &ueId, const Pistache::Optional<AppPortId> &appPortId,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org