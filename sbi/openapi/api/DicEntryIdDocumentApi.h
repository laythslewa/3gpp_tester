/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DicEntryIdDocumentApi.h
 *
 *
 */

#ifndef DicEntryIdDocumentApi_H_
#define DicEntryIdDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "DicEntryData.h"
#include "ProblemDetails.h"
#include "RacFormat.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DicEntryIdDocumentApi {
public:
  DicEntryIdDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~DicEntryIdDocumentApi() {}
  void init();

  const std::string base = "/nucmf-uecm/v1";

private:
  void setupRoutes();

  void get_dic_entry_handler(const Pistache::Rest::Request &request,
                             Pistache::Http::ResponseWriter response);
  void dic_entry_id_document_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Get an individual dictionary entry via dicEntryId
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="dicEntryId">the ID of a dictionary entry in the UCMF</param>
  /// <param name="racFormat">Encoding format of of RAC Info (optional, default
  /// to RacFormat())</param> <param name="supportedFeatures">supported features
  /// of the NF consumer (optional, default to &quot;&quot;)</param>
  virtual void
  get_dic_entry(const int32_t &dicEntryId,
                const Pistache::Optional<RacFormat> &racFormat,
                const Pistache::Optional<std::string> &supportedFeatures,
                Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DicEntryIdDocumentApi_H_ */