/**
 * Unified Data Repository Service API file for Application Data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IPTVConfigurationDataStoreApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IPTVConfigurationDataStoreApiImpl::IPTVConfigurationDataStoreApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : IPTVConfigurationDataStoreApi(rtr) {}

void IPTVConfigurationDataStoreApiImpl::read_iptv_congifuration_data(
    const Pistache::Optional<std::vector<std::string>> &configIds,
    const Pistache::Optional<std::vector<std::string>> &dnns,
    const Pistache::Optional<std::vector<Snssai>> &snssais,
    const Pistache::Optional<std::vector<std::string>> &supis,
    const Pistache::Optional<std::vector<std::string>> &interGroupIds,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org