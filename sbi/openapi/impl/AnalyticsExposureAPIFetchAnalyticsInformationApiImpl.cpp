/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AnalyticsExposureAPIFetchAnalyticsInformationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

AnalyticsExposureAPIFetchAnalyticsInformationApiImpl::
    AnalyticsExposureAPIFetchAnalyticsInformationApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : AnalyticsExposureAPIFetchAnalyticsInformationApi(rtr) {}

void AnalyticsExposureAPIFetchAnalyticsInformationApiImpl::af_id_fetch_post(
    const std::string &afId, const AnalyticsRequest &analyticsRequest,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
