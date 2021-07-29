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
 * PSLocationRetrievalApi.h
 *
 *
 */

#ifndef PSLocationRetrievalApi_H_
#define PSLocationRetrievalApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "PsLocation.h"
#include "RedirectResponse.h"
#include "RequestedNode.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class PSLocationRetrievalApi {
public:
  PSLocationRetrievalApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~PSLocationRetrievalApi() {}
  void init();

  const std::string base = "/nhss-ims-sdm/v1";

private:
  void setupRoutes();

  void get_loc_ps_domain_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void ps_location_retrieval_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve the location data in PS domain
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="imsUeId">IMS Public Identity</param>
  /// <param name="requestedNodes">Indicates the serving node(s) for which the
  /// request is applicable. (optional, default to
  /// std::vector&lt;RequestedNode&gt;())</param> <param
  /// name="servingNode">Indicates that only the stored NF id/address of the
  /// serving node(s) is required (optional, default to false)</param> <param
  /// name="localTime">Indicates that only the Local Time Zone information of
  /// the location in the visited network where the UE is attached is requested
  /// (optional, default to false)</param> <param
  /// name="currentLocation">Indicates whether an active location retrieval has
  /// to be initiated by the requested node (optional, default to false)</param>
  /// <param name="ratType">Indicates whether RAT Type retrieval is requested
  /// (optional, default to false)</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param> <param name="privateIdentity">IMS Private Identity
  /// (optional, default to &quot;&quot;)</param>
  virtual void get_loc_ps_domain(
      const std::string &imsUeId,
      const Pistache::Optional<std::vector<RequestedNode>> &requestedNodes,
      const Pistache::Optional<bool> &servingNode,
      const Pistache::Optional<bool> &localTime,
      const Pistache::Optional<bool> &currentLocation,
      const Pistache::Optional<bool> &ratType,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<std::string> &privateIdentity,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PSLocationRetrievalApi_H_ */
