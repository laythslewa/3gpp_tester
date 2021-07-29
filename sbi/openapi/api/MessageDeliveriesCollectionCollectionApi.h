/**
 * VAE_MessageDelivery
 * API for VAE Message Delivery Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * MessageDeliveriesCollectionCollectionApi.h
 *
 *
 */

#ifndef MessageDeliveriesCollectionCollectionApi_H_
#define MessageDeliveriesCollectionCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "DownlinkMessageDeliveryData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class MessageDeliveriesCollectionCollectionApi {
public:
  MessageDeliveriesCollectionCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~MessageDeliveriesCollectionCollectionApi() {}
  void init();

  const std::string base = "/vae-message-delivery/v1";

private:
  void setupRoutes();

  void create_downlink_message_delivery_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void message_deliveries_collection_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// VAE Message delivery resource create service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionId">String identifying a subscription to the
  /// Individual Message Delivery Subscription</param> <param
  /// name="downlinkMessageDeliveryData"></param>
  virtual void create_downlink_message_delivery(
      const std::string &subscriptionId,
      const DownlinkMessageDeliveryData &downlinkMessageDeliveryData,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MessageDeliveriesCollectionCollectionApi_H_ */