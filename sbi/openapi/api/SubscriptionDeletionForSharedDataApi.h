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
 * SubscriptionDeletionForSharedDataApi.h
 *
 *
 */

#ifndef SubscriptionDeletionForSharedDataApi_H_
#define SubscriptionDeletionForSharedDataApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SubscriptionDeletionForSharedDataApi {
public:
  SubscriptionDeletionForSharedDataApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubscriptionDeletionForSharedDataApi() {}
  void init();

  const std::string base = "/nhss-ims-sdm/v1";

private:
  void setupRoutes();

  void
  unsubscribe_for_shared_data_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void subscription_deletion_for_shared_data_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// unsubscribe from notifications for shared data
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionId">Id of the Shared data Subscription</param>
  virtual void
  unsubscribe_for_shared_data(const std::string &subscriptionId,
                              Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SubscriptionDeletionForSharedDataApi_H_ */