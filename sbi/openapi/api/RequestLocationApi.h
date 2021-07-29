/**
 * Ngmlc_Location
 * Ngmlc_Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * RequestLocationApi.h
 *
 *
 */

#ifndef RequestLocationApi_H_
#define RequestLocationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "InputData.h"
#include "LocationData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RequestLocationApi {
public:
  RequestLocationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~RequestLocationApi() {}
  void init();

  const std::string base = "/ngmlc-loc/v1";

private:
  void setupRoutes();

  void request_location_handler(const Pistache::Rest::Request &request,
                                Pistache::Http::ResponseWriter response);
  void
  request_location_api_default_handler(const Pistache::Rest::Request &request,
                                       Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Request Location of an UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="inputData"></param>
  virtual void request_location(const InputData &inputData,
                                Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RequestLocationApi_H_ */
