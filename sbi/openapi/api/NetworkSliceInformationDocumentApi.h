/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NetworkSliceInformationDocumentApi.h
 *
 *
 */

#ifndef NetworkSliceInformationDocumentApi_H_
#define NetworkSliceInformationDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "AuthorizedNetworkSliceInfo.h"
#include "NFType.h"
#include "PlmnId.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SliceInfoForPDUSession.h"
#include "SliceInfoForRegistration.h"
#include "SliceInfoForUEConfigurationUpdate.h"
#include "Tai.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NetworkSliceInformationDocumentApi {
public:
  NetworkSliceInformationDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~NetworkSliceInformationDocumentApi() {}
  void init();

  const std::string base = "/nnssf-nsselection/v2";

private:
  void setupRoutes();

  void n_s_selection_get_handler(const Pistache::Rest::Request &request,
                                 Pistache::Http::ResponseWriter response);
  void network_slice_information_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve the Network Slice Selection Information
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nfType">NF type of the NF service consumer</param>
  /// <param name="nfId">NF Instance ID of the NF service consumer</param>
  /// <param name="sliceInfoRequestForRegistration">Requested network slice
  /// information during Registration procedure (optional, default to
  /// SliceInfoForRegistration())</param> <param
  /// name="sliceInfoRequestForPduSession">Requested network slice information
  /// during PDU session establishment procedure (optional, default to
  /// SliceInfoForPDUSession())</param> <param
  /// name="sliceInfoRequestForUeCu">Requested network slice information during
  /// UE confuguration update procedure (optional, default to
  /// SliceInfoForUEConfigurationUpdate())</param> <param name="homePlmnId">PLMN
  /// ID of the HPLMN (optional, default to PlmnId())</param> <param
  /// name="tai">TAI of the UE (optional, default to Tai())</param> <param
  /// name="supportedFeatures">Features required to be supported by the NFs in
  /// the target slice instance (optional, default to &quot;&quot;)</param>
  virtual void
  n_s_selection_get(const Pistache::Optional<NFType> &nfType,
                    const Pistache::Optional<std::string> &nfId,
                    const Pistache::Optional<SliceInfoForRegistration>
                        &sliceInfoRequestForRegistration,
                    const Pistache::Optional<SliceInfoForPDUSession>
                        &sliceInfoRequestForPduSession,
                    const Pistache::Optional<SliceInfoForUEConfigurationUpdate>
                        &sliceInfoRequestForUeCu,
                    const Pistache::Optional<PlmnId> &homePlmnId,
                    const Pistache::Optional<Tai> &tai,
                    const Pistache::Optional<std::string> &supportedFeatures,
                    Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NetworkSliceInformationDocumentApi_H_ */