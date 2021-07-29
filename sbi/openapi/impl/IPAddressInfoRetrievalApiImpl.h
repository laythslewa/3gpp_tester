/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * IPAddressInfoRetrievalApiImpl.h
 *
 *
 */

#ifndef IP_ADDRESS_INFO_RETRIEVAL_API_IMPL_H_
#define IP_ADDRESS_INFO_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IPAddressInfoRetrievalApi.h>

#include <pistache/optional.h>

#include "IpAddress.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IPAddressInfoRetrievalApiImpl
    : public org::openapitools::server::api::IPAddressInfoRetrievalApi {
public:
  IPAddressInfoRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~IPAddressInfoRetrievalApiImpl() {}

  void get_ip_address_info(const std::string &imsUeId,
                           Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif