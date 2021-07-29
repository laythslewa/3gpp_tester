/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HSSEventSubscriptionInfoDocumentApi.h
 *
 *
 */

#ifndef HSSEventSubscriptionInfoDocumentApi_H_
#define HSSEventSubscriptionInfoDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "HssSubscriptionInfo.h"
#include "PatchItem.h"
#include "PatchResult.h"
#include "ProblemDetails.h"
#include "SmfSubscriptionInfo.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class HSSEventSubscriptionInfoDocumentApi {
public:
  HSSEventSubscriptionInfoDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~HSSEventSubscriptionInfoDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void
  create_hss_subscriptions_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void
  get_hss_subscription_info_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response);
  void
  modify_hss_subscription_info_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);
  void remove_hss_subscriptions_info_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void hss_event_subscription_info_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create HSS Subscription Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  /// <param name="subsId"></param>
  /// <param name="hssSubscriptionInfo"></param>
  virtual void
  create_hss_subscriptions(const std::string &ueId, const std::string &subsId,
                           const HssSubscriptionInfo &hssSubscriptionInfo,
                           Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Retrieve HSS Subscription Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  /// <param name="subsId"></param>
  virtual void
  get_hss_subscription_info(const std::string &ueId, const std::string &subsId,
                            Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Modify HSS Subscription Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  /// <param name="subsId"></param>
  /// <param name="patchItem"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void modify_hss_subscription_info(
      const std::string &ueId, const std::string &subsId,
      const std::vector<PatchItem> &patchItem,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Delete HSS Subscription Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  /// <param name="subsId"></param>
  virtual void
  remove_hss_subscriptions_info(const std::string &ueId,
                                const std::string &subsId,
                                Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HSSEventSubscriptionInfoDocumentApi_H_ */
