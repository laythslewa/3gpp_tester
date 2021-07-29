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
 * IndividualPDUSessionHSMFOrSMFApi.h
 *
 *
 */

#ifndef IndividualPDUSessionHSMFOrSMFApi_H_
#define IndividualPDUSessionHSMFOrSMFApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "HsmfUpdateData.h"
#include "HsmfUpdateError.h"
#include "HsmfUpdatedData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "ReleaseData.h"
#include "ReleasedData.h"
#include "RetrieveData.h"
#include "RetrievedData.h"
#include "TransferMoDataReqData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualPDUSessionHSMFOrSMFApi {
public:
  IndividualPDUSessionHSMFOrSMFApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IndividualPDUSessionHSMFOrSMFApi() {}
  void init();

  const std::string base = "/nsmf-pdusession/v1";

private:
  void setupRoutes();

  void release_pdu_session_handler(const Pistache::Rest::Request &request,
                                   Pistache::Http::ResponseWriter response);
  void retrieve_pdu_session_handler(const Pistache::Rest::Request &request,
                                    Pistache::Http::ResponseWriter response);
  void transfer_mo_data_handler(const Pistache::Rest::Request &request,
                                Pistache::Http::ResponseWriter response);
  void update_pdu_session_handler(const Pistache::Rest::Request &request,
                                  Pistache::Http::ResponseWriter response);
  void individual_pdu_session_hsmf_or_smf_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Release
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pduSessionRef">PDU session reference</param>
  /// <param name="releaseData">data sent to H-SMF or SMF when releasing the PDU
  /// session (optional)</param>
  virtual void
  release_pdu_session(const std::string &pduSessionRef,
                      const ReleaseData &releaseData,
                      Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Retrieve
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pduSessionRef">PDU session reference</param>
  /// <param name="retrieveData">representation of the payload of the Retrieve
  /// Request</param>
  virtual void
  retrieve_pdu_session(const std::string &pduSessionRef,
                       const RetrieveData &retrieveData,
                       Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Transfer MO Data
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  virtual void transfer_mo_data(const Pistache::Rest::Request &request,
                                Pistache::Http::ResponseWriter &response) = 0;

  /// <summary>
  /// Update (initiated by V-SMF or I-SMF)
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pduSessionRef">PDU session reference</param>
  /// <param name="hsmfUpdateData">representation of the updates to apply to the
  /// PDU session</param>
  virtual void update_pdu_session(const std::string &pduSessionRef,
                                  const HsmfUpdateData &hsmfUpdateData,
                                  Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndividualPDUSessionHSMFOrSMFApi_H_ */