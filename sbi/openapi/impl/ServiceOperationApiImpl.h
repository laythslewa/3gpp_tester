/**
 * GMDviaMBMSbyxMB
 * API for Group Message Delivery via MBMS by xMB © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ServiceOperationApiImpl.h
 *
 *
 */

#ifndef SERVICE_OPERATION_API_IMPL_H_
#define SERVICE_OPERATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <ServiceOperationApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "ServiceCreation.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ServiceOperationApiImpl
    : public org::openapitools::server::api::ServiceOperationApi {
public:
  ServiceOperationApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~ServiceOperationApiImpl() {}

  void scs_as_id_services_get(const std::string &scsAsId,
                              Pistache::Http::ResponseWriter &response);
  void scs_as_id_services_post(const std::string &scsAsId,
                               const ServiceCreation &serviceCreation,
                               Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif