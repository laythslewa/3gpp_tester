/**
 * 3gpp-applying-bdt-policy
 * API for applying BDT policy © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualAppliedBDTPolicySubscriptionApi.h
 *
 *
 */

#ifndef IndividualAppliedBDTPolicySubscriptionApi_H_
#define IndividualAppliedBDTPolicySubscriptionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AppliedBdtPolicy.h"
#include "AppliedBdtPolicyPatch.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualAppliedBDTPolicySubscriptionApi {
public:
  IndividualAppliedBDTPolicySubscriptionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualAppliedBDTPolicySubscriptionApi() {}
  void init();

  const std::string base = "/3gpp-applying-bdt-policy/v1";

private:
  void setupRoutes();

  void af_id_subscriptions_subscription_id_delete_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_subscription_id_get_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void af_id_subscriptions_subscription_id_patch_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_applied_bdt_policy_subscription_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Deletes an already existing subscription
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param>
  virtual void af_id_subscriptions_subscription_id_delete(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// read an active subscriptions for the SCS/AS and the subscription Id
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param>
  virtual void af_id_subscriptions_subscription_id_get(
      const std::string &afId, const std::string &subscriptionId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Updates/replaces an existing subscription resource
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="afId">Identifier of the AF</param>
  /// <param name="subscriptionId">Identifier of the subscription
  /// resource</param> <param name="appliedBdtPolicyPatch"></param>
  virtual void af_id_subscriptions_subscription_id_patch(
      const std::string &afId, const std::string &subscriptionId,
      const AppliedBdtPolicyPatch &appliedBdtPolicyPatch,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualAppliedBDTPolicySubscriptionApi_H_ */
