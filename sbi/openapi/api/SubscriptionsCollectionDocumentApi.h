/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SubscriptionsCollectionDocumentApi.h
 *
 *
 */

#ifndef SubscriptionsCollectionDocumentApi_H_
#define SubscriptionsCollectionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AmfCreateEventSubscription.h"
#include "AmfCreatedEventSubscription.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SubscriptionsCollectionDocumentApi {
public:
  SubscriptionsCollectionDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubscriptionsCollectionDocumentApi() {}
  void init();

  const std::string base = "/namf-evts/v1";

private:
  void setupRoutes();

  void create_subscription_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void subscriptions_collection_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Namf_EventExposure Subscribe service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="amfCreateEventSubscription"></param>
  virtual void create_subscription(
      const AmfCreateEventSubscription &amfCreateEventSubscription,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SubscriptionsCollectionDocumentApi_H_ */
