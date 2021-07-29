/**
 * VAE_FileDistribution
 * API for VAE File Distribution Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * FileDistributionsCollectionDocumentApiImpl.h
 *
 *
 */

#ifndef FILE_DISTRIBUTIONS_COLLECTION_DOCUMENT_API_IMPL_H_
#define FILE_DISTRIBUTIONS_COLLECTION_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <FileDistributionsCollectionDocumentApi.h>

#include <pistache/optional.h>

#include "FileDistributionData.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class FileDistributionsCollectionDocumentApiImpl
    : public org::openapitools::server::api::
          FileDistributionsCollectionDocumentApi {
public:
  FileDistributionsCollectionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~FileDistributionsCollectionDocumentApiImpl() {}

  void
  create_file_distributions(const FileDistributionData &fileDistributionData,
                            Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif