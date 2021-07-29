/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * RetrievalOfUESRVCCCapabilityAndSTNSRApiImpl.h
 *
 *
 */

#ifndef RETRIEVAL_OF_UESRVCC_CAPABILITY_AND_STNSR_API_IMPL_H_
#define RETRIEVAL_OF_UESRVCC_CAPABILITY_AND_STNSR_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <RetrievalOfUESRVCCCapabilityAndSTNSRApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "SrvccData.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RetrievalOfUESRVCCCapabilityAndSTNSRApiImpl
    : public org::openapitools::server::api::
          RetrievalOfUESRVCCCapabilityAndSTNSRApi {
public:
  RetrievalOfUESRVCCCapabilityAndSTNSRApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~RetrievalOfUESRVCCCapabilityAndSTNSRApiImpl() {}

  void get_srvcc_data(const std::string &imsUeId,
                      const Pistache::Optional<std::string> &supportedFeatures,
                      const Pistache::Optional<std::string> &privateIdentity,
                      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif