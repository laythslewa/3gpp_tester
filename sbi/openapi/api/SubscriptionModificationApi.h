/**
 * Nhss_SDM
 * HSS Subscriber Data Management. © 2021, 3GPP Organizational Partners (ARIB,
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
 * SubscriptionModificationApi.h
 *
 *
 */

#ifndef SubscriptionModificationApi_H_
#define SubscriptionModificationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PatchItem.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SubscriptionModificationApi {
public:
  SubscriptionModificationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubscriptionModificationApi() {}
  void init();

  const std::string base = "/nhss-sdm/v1";

private:
  void setupRoutes();

  void modify_handler(const Pistache::Rest::Request &request,
                      Pistache::Http::ResponseWriter response);
  void subscription_modification_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// modify the subscription
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">IMSI of the user</param>
  /// <param name="subscriptionId">Id of the Subscription</param>
  /// <param name="patchItem"></param>
  virtual void modify(const std::string &ueId,
                      const std::string &subscriptionId,
                      const std::vector<PatchItem> &patchItem,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SubscriptionModificationApi_H_ */
