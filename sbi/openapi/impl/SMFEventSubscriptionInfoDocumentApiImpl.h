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
 * SMFEventSubscriptionInfoDocumentApiImpl.h
 *
 *
 */

#ifndef SMF_EVENT_SUBSCRIPTION_INFO_DOCUMENT_API_IMPL_H_
#define SMF_EVENT_SUBSCRIPTION_INFO_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SMFEventSubscriptionInfoDocumentApi.h>

#include <pistache/optional.h>

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

class SMFEventSubscriptionInfoDocumentApiImpl
    : public org::openapitools::server::api::
          SMFEventSubscriptionInfoDocumentApi {
public:
  SMFEventSubscriptionInfoDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~SMFEventSubscriptionInfoDocumentApiImpl() {}

  void create_smf_subscriptions(const std::string &ueId,
                                const std::string &subsId,
                                const SmfSubscriptionInfo &smfSubscriptionInfo,
                                Pistache::Http::ResponseWriter &response);
  void get_smf_subscription_info(const std::string &ueId,
                                 const std::string &subsId,
                                 Pistache::Http::ResponseWriter &response);
  void modify_smf_subscription_info(
      const std::string &ueId, const std::string &subsId,
      const std::vector<PatchItem> &patchItem,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
  void remove_smf_subscriptions_info(const std::string &ueId,
                                     const std::string &subsId,
                                     Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif