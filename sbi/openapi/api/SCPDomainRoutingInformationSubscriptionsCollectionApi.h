/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SCPDomainRoutingInformationSubscriptionsCollectionApi.h
 *
 *
 */

#ifndef SCPDomainRoutingInformationSubscriptionsCollectionApi_H_
#define SCPDomainRoutingInformationSubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "ScpDomainRoutingInfoSubscription.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SCPDomainRoutingInformationSubscriptionsCollectionApi {
public:
  SCPDomainRoutingInformationSubscriptionsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SCPDomainRoutingInformationSubscriptionsCollectionApi() {}
  void init();

  const std::string base = "/nnrf-disc/v1";

private:
  void setupRoutes();

  void scp_domain_routing_info_subscribe_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  scp_domain_routing_information_subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create a new subscription
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="scpDomainRoutingInfoSubscription"></param>
  /// <param name="contentEncoding">Content-Encoding, described in IETF RFC 7231
  /// (optional, default to &quot;&quot;)</param> <param
  /// name="acceptEncoding">Accept-Encoding, described in IETF RFC 7231
  /// (optional, default to &quot;&quot;)</param>
  virtual void scp_domain_routing_info_subscribe(
      const ScpDomainRoutingInfoSubscription &scpDomainRoutingInfoSubscription,
      const Pistache::Optional<Pistache::Http::Header::Raw> &contentEncoding,
      const Pistache::Optional<Pistache::Http::Header::Raw> &acceptEncoding,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SCPDomainRoutingInformationSubscriptionsCollectionApi_H_ */