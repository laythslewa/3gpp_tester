/**
 * Nbsf_Management
 * Binding Support Management Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualPCFBindingDocumentApi.h
 *
 *
 */

#ifndef IndividualPCFBindingDocumentApi_H_
#define IndividualPCFBindingDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PcfBinding.h"
#include "PcfBindingPatch.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualPCFBindingDocumentApi {
public:
  IndividualPCFBindingDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualPCFBindingDocumentApi() {}
  void init();

  const std::string base = "/nbsf-management/v1";

private:
  void setupRoutes();

  void delete_ind_pcf_binding_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void update_ind_pcf_binding_handler(const Pistache::Rest::Request &request,
                                      Pistache::Http::ResponseWriter response);
  void individual_pcf_binding_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Delete an existing Individual PCF Binding information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="bindingId">Represents the individual PCF Session
  /// Binding.</param>
  virtual void
  delete_ind_pcf_binding(const std::string &bindingId,
                         Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Update an existing Individual PCF Binding information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="bindingId">Represents the individual PCF Session
  /// Binding.</param> <param name="pcfBindingPatch">Parameters to update the
  /// existing session binding</param>
  virtual void
  update_ind_pcf_binding(const std::string &bindingId,
                         const PcfBindingPatch &pcfBindingPatch,
                         Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualPCFBindingDocumentApi_H_ */
