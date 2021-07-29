/**
 * Nudm_PP
 * Nudm Parameter Provision Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Class5GVNGroupDeletionApi.h
 *
 *
 */

#ifndef Class5GVNGroupDeletionApi_H_
#define Class5GVNGroupDeletionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class Class5GVNGroupDeletionApi {
public:
  Class5GVNGroupDeletionApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~Class5GVNGroupDeletionApi() {}
  void init();

  const std::string base = "/nudm-pp/v1";

private:
  void setupRoutes();

  void delete_5_g_vn_group_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void class5_gvn_group_deletion_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// delete a 5G VN Group
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="extGroupId">External Identifier of the Group</param>
  /// <param name="mtcProviderInfo">MTC Provider Information that originated the
  /// service operation (optional, default to &quot;&quot;)</param> <param
  /// name="afId">AF ID that originated the service operation (optional, default
  /// to &quot;&quot;)</param>
  virtual void
  delete_5_g_vn_group(const std::string &extGroupId,
                      const Pistache::Optional<std::string> &mtcProviderInfo,
                      const Pistache::Optional<std::string> &afId,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Class5GVNGroupDeletionApi_H_ */
