/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N32FErrorReportApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

N32FErrorReportApiImpl::N32FErrorReportApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : N32FErrorReportApi(rtr) {}

void N32FErrorReportApiImpl::post_n32f_error(
    const N32fErrorInfo &n32fErrorInfo,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
