/**
 * Npcf_AMPolicyControl
 * Access and Mobility Policy Control Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualAMPolicyAssociationDocumentApi.h
 *
 *
 */

#ifndef IndividualAMPolicyAssociationDocumentApi_H_
#define IndividualAMPolicyAssociationDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "PolicyAssociation.h"
#include "PolicyAssociationUpdateRequest.h"
#include "PolicyUpdate.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualAMPolicyAssociationDocumentApi {
public:
  IndividualAMPolicyAssociationDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualAMPolicyAssociationDocumentApi() {}
  void init();

  const std::string base = "/npcf-am-policy-control/v1";

private:
  void setupRoutes();

  void delete_individual_am_policy_association_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void read_individual_am_policy_association_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void
  report_observed_event_triggers_for_individual_am_policy_association_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);
  void individual_am_policy_association_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Delete individual AM policy association.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="polAssoId">Identifier of a policy association</param>
  virtual void delete_individual_am_policy_association(
      const std::string &polAssoId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Read individual AM policy association.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="polAssoId">Identifier of a policy association</param>
  virtual void read_individual_am_policy_association(
      const std::string &polAssoId,
      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Report observed event triggers and obtain updated policies for an
  /// individual AM policy association.
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="polAssoId">Identifier of a policy association</param>
  /// <param name="policyAssociationUpdateRequest"></param>
  virtual void
  report_observed_event_triggers_for_individual_am_policy_association(
      const std::string &polAssoId,
      const PolicyAssociationUpdateRequest &policyAssociationUpdateRequest,
      Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualAMPolicyAssociationDocumentApi_H_ */