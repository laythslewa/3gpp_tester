/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualSMContextApi.h
 *
 *
 */

#ifndef IndividualSMContextApi_H_
#define IndividualSMContextApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ExtProblemDetails.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SendMoDataReqData.h"
#include "SmContextReleaseData.h"
#include "SmContextReleasedData.h"
#include "SmContextRetrieveData.h"
#include "SmContextRetrievedData.h"
#include "SmContextUpdateData.h"
#include "SmContextUpdateError.h"
#include "SmContextUpdatedData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualSMContextApi {
public:
  IndividualSMContextApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualSMContextApi() {}
  void init();

  const std::string base = "/nsmf-pdusession/v1";

private:
  void setupRoutes();

  void release_sm_context_handler(const Pistache::Rest::Request &request,
                                  Pistache::Http::ResponseWriter response);
  void retrieve_sm_context_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void send_mo_data_handler(const Pistache::Rest::Request &request,
                            Pistache::Http::ResponseWriter response);
  void update_sm_context_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void individual_sm_context_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Release SM Context
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smContextRef">SM context reference</param>
  /// <param name="smContextReleaseData">representation of the data to be sent
  /// to the SMF when releasing the SM context (optional)</param>
  virtual void
  release_sm_context(const std::string &smContextRef,
                     const SmContextReleaseData &smContextReleaseData,
                     Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Retrieve SM Context
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smContextRef">SM context reference</param>
  /// <param name="smContextRetrieveData">parameters used to retrieve the SM
  /// context (optional)</param>
  virtual void
  retrieve_sm_context(const std::string &smContextRef,
                      const SmContextRetrieveData &smContextRetrieveData,
                      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Send MO Data
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  virtual void send_mo_data(const Pistache::Rest::Request &request,
                            Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Update SM Context
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smContextRef">SM context reference</param>
  /// <param name="smContextUpdateData">representation of the updates to apply
  /// to the SM context</param>
  virtual void update_sm_context(const std::string &smContextRef,
                                 const SmContextUpdateData &smContextUpdateData,
                                 Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualSMContextApi_H_ */
