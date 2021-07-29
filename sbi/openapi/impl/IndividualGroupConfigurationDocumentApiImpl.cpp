/**
 * VAE_DynamicGroup
 * VAE_Dynamic_Group Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualGroupConfigurationDocumentApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

IndividualGroupConfigurationDocumentApiImpl::
    IndividualGroupConfigurationDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr)
    : IndividualGroupConfigurationDocumentApi(rtr) {}

void IndividualGroupConfigurationDocumentApiImpl::delete_group_configuration(
    const std::string &configId, Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void IndividualGroupConfigurationDocumentApiImpl::
    read_dynamic_group_configuration(const std::string &configId,
                                     Pistache::Http::ResponseWriter &response) {
  response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org
