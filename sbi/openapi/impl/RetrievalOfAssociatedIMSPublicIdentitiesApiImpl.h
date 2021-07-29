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
 * RetrievalOfAssociatedIMSPublicIdentitiesApiImpl.h
 *
 *
 */

#ifndef RETRIEVAL_OF_ASSOCIATED_IMS_PUBLIC_IDENTITIES_API_IMPL_H_
#define RETRIEVAL_OF_ASSOCIATED_IMS_PUBLIC_IDENTITIES_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <RetrievalOfAssociatedIMSPublicIdentitiesApi.h>

#include <pistache/optional.h>

#include "ImsAssociatedIdentities.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RetrievalOfAssociatedIMSPublicIdentitiesApiImpl
    : public org::openapitools::server::api::
          RetrievalOfAssociatedIMSPublicIdentitiesApi {
public:
  RetrievalOfAssociatedIMSPublicIdentitiesApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~RetrievalOfAssociatedIMSPublicIdentitiesApiImpl() {}

  void get_ims_assoc_ids(const std::string &imsUeId,
                         Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif