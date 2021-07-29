/**
 * Nspaf_SecuredPacket
 * Nspaf Secured Packet Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SecuredPacketGenerationCustomOperationApi.h
 *
 *
 */

#ifndef SecuredPacketGenerationCustomOperationApi_H_
#define SecuredPacketGenerationCustomOperationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "UiccConfigurationParameter.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SecuredPacketGenerationCustomOperationApi {
public:
  SecuredPacketGenerationCustomOperationApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SecuredPacketGenerationCustomOperationApi() {}
  void init();

  const std::string base = "/nspaf-secured-packet/v1";

private:
  void setupRoutes();

  void provide_secured_packet_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void secured_packet_generation_custom_operation_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// request generation of a secured packet
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="supi">SUPI of the user</param>
  /// <param name="uiccConfigurationParameter"></param>
  virtual void provide_secured_packet(
      const std::string &supi,
      const UiccConfigurationParameter &uiccConfigurationParameter,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SecuredPacketGenerationCustomOperationApi_H_ */
