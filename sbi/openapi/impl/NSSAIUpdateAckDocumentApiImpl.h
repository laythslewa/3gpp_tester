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
 * NSSAIUpdateAckDocumentApiImpl.h
 *
 *
 */

#ifndef NSSAI_UPDATE_ACK_DOCUMENT_API_IMPL_H_
#define NSSAI_UPDATE_ACK_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <NSSAIUpdateAckDocumentApi.h>

#include <pistache/optional.h>

#include "NssaiAckData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class NSSAIUpdateAckDocumentApiImpl
    : public org::openapitools::server::api::NSSAIUpdateAckDocumentApi {
public:
  NSSAIUpdateAckDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~NSSAIUpdateAckDocumentApiImpl() {}

  void create_nssai_update_ack(
      const std::string &ueId, const NssaiAckData &nssaiAckData,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif