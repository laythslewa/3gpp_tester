/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CancelLocationApi.h
 *
 *
 */

#ifndef CancelLocationApi_H_
#define CancelLocationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "CancelLocData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class CancelLocationApi {
public:
  CancelLocationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~CancelLocationApi() {}
  void init();

  const std::string base = "/nlmf-loc/v1";

private:
  void setupRoutes();

  void cancel_location_handler(const Pistache::Rest::Request &request,
                               Pistache::Http::ResponseWriter response);
  void
  cancel_location_api_default_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// request cancellation of periodic or triggered location
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="cancelLocData"></param>
  virtual void cancel_location(const CancelLocData &cancelLocData,
                               Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CancelLocationApi_H_ */