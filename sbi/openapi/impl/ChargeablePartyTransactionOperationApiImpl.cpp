/**
 * 3gpp-chargeable-party
 * API for Chargeable Party management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ChargeablePartyTransactionOperationApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ChargeablePartyTransactionOperationApiImpl::
    ChargeablePartyTransactionOperationApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : ChargeablePartyTransactionOperationApi(rtr) {}

void ChargeablePartyTransactionOperationApiImpl::scs_as_id_transactions_get(
    const std::string &scsAsId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void ChargeablePartyTransactionOperationApiImpl::scs_as_id_transactions_post(
    const std::string &scsAsId, const ChargeableParty &chargeableParty,
    Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org