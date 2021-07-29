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
 * IndividualServiceOperationApi.h
 *
 *
 */

#ifndef IndividualServiceOperationApi_H_
#define IndividualServiceOperationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "ServiceCreation.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualServiceOperationApi {
public:
  IndividualServiceOperationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualServiceOperationApi() {}
  void init();

  const std::string base = "/3gpp-group-message-delivery-xmb/v1";

private:
  void setupRoutes();

  void scs_as_id_services_service_id_delete_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void scs_as_id_services_service_id_get_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_service_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// deletes an existing service resource for a given SCS/AS and a service id
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of SCS/AS</param>
  /// <param name="serviceId">Service Id</param>
  virtual void scs_as_id_services_service_id_delete(
      const std::string &scsAsId, const std::string &serviceId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// read a service resource for a given SCS/AS and a Service Id
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of SCS/AS</param>
  /// <param name="serviceId">Service Id</param>
  virtual void scs_as_id_services_service_id_get(
      const std::string &scsAsId, const std::string &serviceId,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualServiceOperationApi_H_ */