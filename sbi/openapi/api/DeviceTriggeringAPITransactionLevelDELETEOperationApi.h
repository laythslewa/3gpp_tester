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
 * DeviceTriggeringAPITransactionLevelDELETEOperationApi.h
 *
 *
 */

#ifndef DeviceTriggeringAPITransactionLevelDELETEOperationApi_H_
#define DeviceTriggeringAPITransactionLevelDELETEOperationApi_H_

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

class DeviceTriggeringAPITransactionLevelDELETEOperationApi {
public:
  DeviceTriggeringAPITransactionLevelDELETEOperationApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~DeviceTriggeringAPITransactionLevelDELETEOperationApi() {}
  void init();

  const std::string base = "/3gpp-device-triggering/v1";

private:
  void setupRoutes();

  void scs_as_id_transactions_transaction_id_delete_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  device_triggering_api_transaction_level_delete_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Deletes an already existing device triggering transaction.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scsAsId">Identifier of the SCS/AS</param>
  /// <param name="transactionId">Identifier of the transaction resource</param>
  virtual void scs_as_id_transactions_transaction_id_delete(
      const std::string &scsAsId, const std::string &transactionId,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeviceTriggeringAPITransactionLevelDELETEOperationApi_H_ */