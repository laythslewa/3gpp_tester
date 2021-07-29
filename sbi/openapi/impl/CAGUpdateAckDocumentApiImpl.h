/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * CAGUpdateAckDocumentApiImpl.h
 *
 *
 */

#ifndef CAG_UPDATE_ACK_DOCUMENT_API_IMPL_H_
#define CAG_UPDATE_ACK_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <CAGUpdateAckDocumentApi.h>

#include <pistache/optional.h>

#include "CagAckData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class CAGUpdateAckDocumentApiImpl
    : public org::openapitools::server::api::CAGUpdateAckDocumentApi {
public:
  CAGUpdateAckDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~CAGUpdateAckDocumentApiImpl() {}

  void create_cag_update_ack(
      const std::string &ueId, const CagAckData &cagAckData,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif