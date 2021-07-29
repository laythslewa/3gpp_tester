/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TriggerSORInfoUpdateApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

TriggerSORInfoUpdateApiImpl::TriggerSORInfoUpdateApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : TriggerSORInfoUpdateApi(rtr) {}

void TriggerSORInfoUpdateApiImpl::update_sor_info(
    const std::string &supi, const SorUpdateInfo &sorUpdateInfo,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
