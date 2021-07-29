/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * SCPDomainRoutingInformationDocumentApiImpl.h
 *
 *
 */

#ifndef SCP_DOMAIN_ROUTING_INFORMATION_DOCUMENT_API_IMPL_H_
#define SCP_DOMAIN_ROUTING_INFORMATION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SCPDomainRoutingInformationDocumentApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "ScpDomainRoutingInformation.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SCPDomainRoutingInformationDocumentApiImpl
    : public org::openapitools::server::api::
          SCPDomainRoutingInformationDocumentApi {
public:
  SCPDomainRoutingInformationDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~SCPDomainRoutingInformationDocumentApiImpl() {}

  void s_cp_domain_routing_info_get(
      const Pistache::Optional<bool> &local,
      const Pistache::Optional<Pistache::Http::Header::Raw> &acceptEncoding,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif