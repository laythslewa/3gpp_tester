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
 * IndividualMessageDeliverySubscriptionDocumentApi.h
 *
 *
 */

#ifndef IndividualMessageDeliverySubscriptionDocumentApi_H_
#define IndividualMessageDeliverySubscriptionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "MessageDeliverySubscriptionData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualMessageDeliverySubscriptionDocumentApi {
public:
  IndividualMessageDeliverySubscriptionDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualMessageDeliverySubscriptionDocumentApi() {}
  void init();

  const std::string base = "/vae-message-delivery/v1";

private:
  void setupRoutes();

  void delete_message_delivery_subscription_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void read_individual_message_delivery_subscription_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_message_delivery_subscription_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Delete an individual Message Delivery Subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionId">String identifying a subscription to the
  /// Individual Message Delivery Subscription</param>
  virtual void delete_message_delivery_subscription(
      const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Get an existing individual Message Delivery Subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionId">String identifying a subscription to the
  /// Individual Message Delivery Subscription</param>
  virtual void read_individual_message_delivery_subscription(
      const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualMessageDeliverySubscriptionDocumentApi_H_ */