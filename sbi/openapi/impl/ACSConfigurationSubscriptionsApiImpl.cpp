/**
 * 3gpp-acs-pp
 * API for 5G ACS Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ACSConfigurationSubscriptionsApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ACSConfigurationSubscriptionsApiImpl::ACSConfigurationSubscriptionsApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : ACSConfigurationSubscriptionsApi(rtr) {}

void ACSConfigurationSubscriptionsApiImpl::af_id_subscriptions_get(
    const std::string &afId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ACSConfigurationSubscriptionsApiImpl::af_id_subscriptions_post(
    const std::string &afId, const AcsConfigurationData &acsConfigurationData,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
