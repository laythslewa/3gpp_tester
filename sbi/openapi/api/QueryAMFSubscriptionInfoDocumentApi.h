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
 * QueryAMFSubscriptionInfoDocumentApi.h
 *
 *
 */

#ifndef QueryAMFSubscriptionInfoDocumentApi_H_
#define QueryAMFSubscriptionInfoDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AmfSubscriptionInfo.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class QueryAMFSubscriptionInfoDocumentApi {
public:
  QueryAMFSubscriptionInfoDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~QueryAMFSubscriptionInfoDocumentApi() {}
  void init();

  const std::string base = "";

private:
  void setupRoutes();

  void
  get_amf_subscription_info_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response);
  void query_amf_subscription_info_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve AMF subscription Info
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId"></param>
  /// <param name="subsId"></param>
  virtual void
  get_amf_subscription_info(const std::string &ueId, const std::string &subsId,
                            Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* QueryAMFSubscriptionInfoDocumentApi_H_ */