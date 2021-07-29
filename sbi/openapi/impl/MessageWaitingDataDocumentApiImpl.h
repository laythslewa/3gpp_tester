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
 * MessageWaitingDataDocumentApiImpl.h
 *
 *
 */

#ifndef MESSAGE_WAITING_DATA_DOCUMENT_API_IMPL_H_
#define MESSAGE_WAITING_DATA_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <MessageWaitingDataDocumentApi.h>

#include <pistache/optional.h>

#include "MessageWaitingData.h"
#include "PatchItem.h"
#include "ProblemDetails.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class MessageWaitingDataDocumentApiImpl
    : public org::openapitools::server::api::MessageWaitingDataDocumentApi {
public:
  MessageWaitingDataDocumentApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~MessageWaitingDataDocumentApiImpl() {}

  void create_message_waiting_data(const std::string &ueId,
                                   const MessageWaitingData &messageWaitingData,
                                   Pistache::Http::ResponseWriter &response);
  void delete_message_waiting_data(const std::string &ueId,
                                   Pistache::Http::ResponseWriter &response);
  void modify_message_waiting_data(const std::string &ueId,
                                   const std::vector<PatchItem> &patchItem,
                                   Pistache::Http::ResponseWriter &response);
  void query_message_waiting_data(
      const std::string &ueId,
      const Pistache::Optional<std::vector<std::string>> &fields,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif