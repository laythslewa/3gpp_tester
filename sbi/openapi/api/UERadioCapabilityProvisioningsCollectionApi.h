/**
 * Nucmf_Provisioning
 * UCMF_Provisioning Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * UERadioCapabilityProvisioningsCollectionApi.h
 *
 *
 */

#ifndef UERadioCapabilityProvisioningsCollectionApi_H_
#define UERadioCapabilityProvisioningsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "RacsData.h"
#include "RacsFailureReport.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UERadioCapabilityProvisioningsCollectionApi {
public:
  UERadioCapabilityProvisioningsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~UERadioCapabilityProvisioningsCollectionApi() {}
  void init();

  const std::string base = "/nucmf-provisioning/v1";

private:
  void setupRoutes();

  void create_provisioning_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void ue_radio_capability_provisionings_collection_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create an Individual UE radio capability provisioning
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="racsData">create new provisionings for a given
  /// SCS/AS.</param>
  virtual void
  create_provisioning(const RacsData &racsData,
                      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UERadioCapabilityProvisioningsCollectionApi_H_ */
