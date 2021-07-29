/**
 * VAE_MessageDelivery
 * API for VAE Message Delivery Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualMessageDeliverySubscriptionDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualMessageDeliverySubscriptionDocumentApiImpl::
    IndividualMessageDeliverySubscriptionDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualMessageDeliverySubscriptionDocumentApi(rtr) {}

void IndividualMessageDeliverySubscriptionDocumentApiImpl::
    delete_message_delivery_subscription(
        const std::string &subscriptionId,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualMessageDeliverySubscriptionDocumentApiImpl::
    read_individual_message_delivery_subscription(
        const std::string &subscriptionId,
        Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
