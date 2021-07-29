/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ObtainTheInformationAboutTheIndicatedDiscoveryCodeApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ObtainTheInformationAboutTheIndicatedDiscoveryCodeApiImpl::
    ObtainTheInformationAboutTheIndicatedDiscoveryCodeApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : ObtainTheInformationAboutTheIndicatedDiscoveryCodeApi(rtr) {}

void ObtainTheInformationAboutTheIndicatedDiscoveryCodeApiImpl::match_report(
    const std::string &ueId, const MatchReportReqData &matchReportReqData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
