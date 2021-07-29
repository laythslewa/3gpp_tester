/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * UEContextInSMSFDataRetrievalApiImpl.h
 *
 *
 */

#ifndef UE_CONTEXT_IN_SMSF_DATA_RETRIEVAL_API_IMPL_H_
#define UE_CONTEXT_IN_SMSF_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <UEContextInSMSFDataRetrievalApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "UeContextInSmsfData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UEContextInSMSFDataRetrievalApiImpl
    : public org::openapitools::server::api::UEContextInSMSFDataRetrievalApi {
public:
  UEContextInSMSFDataRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~UEContextInSMSFDataRetrievalApiImpl() {}

  void get_ue_ctx_in_smsf_data(
      const std::string &supi,
      const Pistache::Optional<std::string> &supportedFeatures,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif