/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RecordCRUDApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

RecordCRUDApiImpl::RecordCRUDApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr)
    : RecordCRUDApi(rtr) {}

void RecordCRUDApiImpl::create_or_modify_record(
    const std::string &realmId, const std::string &storageId,
    const std::string &recordId, const Record &record,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifMatch,
    const Pistache::Optional<bool> &getPrevious,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RecordCRUDApiImpl::delete_record(
    const std::string &realmId, const std::string &storageId,
    const std::string &recordId,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifMatch,
    const Pistache::Optional<bool> &getPrevious,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RecordCRUDApiImpl::get_meta(
    const std::string &realmId, const std::string &storageId,
    const std::string &recordId,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RecordCRUDApiImpl::get_record(
    const std::string &realmId, const std::string &storageId,
    const std::string &recordId,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RecordCRUDApiImpl::search_record(
    const std::string &realmId, const std::string &storageId,
    const Pistache::Optional<int32_t> &limitRange,
    const Pistache::Optional<SearchExpression> &filter,
    const Pistache::Optional<bool> &countIndicator,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RecordCRUDApiImpl::update_meta(
    const std::string &realmId, const std::string &storageId,
    const std::string &recordId, const std::vector<PatchItem> &patchItem,
    const Pistache::Optional<Pistache::Http::Header::Raw> &ifMatch,
    const Pistache::Optional<std::string> &supportedFeatures,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org