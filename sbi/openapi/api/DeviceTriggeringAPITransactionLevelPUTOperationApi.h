/**
 * 3gpp-device-triggering
 * API for device trigger. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeviceTriggeringAPITransactionLevelPUTOperationApi.h
 *
 *
 */

#ifndef DeviceTriggeringAPITransactionLevelPUTOperationApi_H_
#define DeviceTriggeringAPITransactionLevelPUTOperationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "DeviceTriggering.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DeviceTriggeringAPITransactionLevelPUTOperationApi {
public:
  DeviceTriggeringAPITransactionLevelPUTOperationApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~DeviceTriggeringAPITransactionLevelPUTOperationApi() {}
  void init();

  const std::string base = "/3gpp-device-triggering/v1";

private:
  void setupRoutes();

  void scs_as_id_transactions_transaction_id_put_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  device_triggering_api_transaction_level_put_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Replace an existing device triggering transaction resource and the
  /// corresponding device trigger request.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of the SCS/AS</param>
  /// <param name="transactionId">Identifier of the transaction resource</param>
  /// <param name="deviceTriggering">Parameters to update/replace the existing
  /// device triggering</param>
  virtual void scs_as_id_transactions_transaction_id_put(
      const std::string &scsAsId, const std::string &transactionId,
      const DeviceTriggering &deviceTriggering,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeviceTriggeringAPITransactionLevelPUTOperationApi_H_ */