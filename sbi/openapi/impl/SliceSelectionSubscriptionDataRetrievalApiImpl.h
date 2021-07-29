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
 * SliceSelectionSubscriptionDataRetrievalApiImpl.h
 *
 *
 */

#ifndef SLICE_SELECTION_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_
#define SLICE_SELECTION_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <SliceSelectionSubscriptionDataRetrievalApi.h>

#include <pistache/optional.h>

#include "Nssai.h"
#include "PlmnId.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class SliceSelectionSubscriptionDataRetrievalApiImpl
    : public org::openapitools::server::api::
          SliceSelectionSubscriptionDataRetrievalApi {
public:
  SliceSelectionSubscriptionDataRetrievalApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~SliceSelectionSubscriptionDataRetrievalApiImpl() {}

  void get_nssai(
      const std::string &supi,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<PlmnId> &plmnId,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif