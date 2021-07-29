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
 * UpdateLocationApi.h
 *
 *
 */

#ifndef UpdateLocationApi_H_
#define UpdateLocationApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "LocUpdateData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UpdateLocationApi {
public:
  UpdateLocationApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~UpdateLocationApi() {}
  void init();

  const std::string base = "/ngmlc-loc/v1";

private:
  void setupRoutes();

  void update_location_handler(const Pistache::Rest::Request &request,
                               Pistache::Http::ResponseWriter response);
  void
  update_location_api_default_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// update UE location information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="locUpdateData"></param>
  virtual void update_location(const LocUpdateData &locUpdateData,
                               Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UpdateLocationApi_H_ */
