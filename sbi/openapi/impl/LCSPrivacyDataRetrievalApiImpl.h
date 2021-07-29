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
 * LCSPrivacyDataRetrievalApiImpl.h
 *
 *
 */

#ifndef LCS_PRIVACY_DATA_RETRIEVAL_API_IMPL_H_
#define LCS_PRIVACY_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <LCSPrivacyDataRetrievalApi.h>

#include <pistache/optional.h>

#include "LcsPrivacyData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class LCSPrivacyDataRetrievalApiImpl
    : public org::openapitools::server::api::LCSPrivacyDataRetrievalApi {
public:
  LCSPrivacyDataRetrievalApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~LCSPrivacyDataRetrievalApiImpl() {}

  void get_lcs_privacy_data(
      const std::string &ueId,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif