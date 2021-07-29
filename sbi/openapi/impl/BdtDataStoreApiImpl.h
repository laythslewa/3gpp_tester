/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * BdtDataStoreApiImpl.h
 *
 *
 */

#ifndef BDT_DATA_STORE_API_IMPL_H_
#define BDT_DATA_STORE_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <BdtDataStoreApi.h>

#include <pistache/optional.h>

#include "BdtData.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class BdtDataStoreApiImpl
    : public org::openapitools::server::api::BdtDataStoreApi {
public:
  BdtDataStoreApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~BdtDataStoreApiImpl() {}

  void
  read_bdt_data(const Pistache::Optional<std::vector<std::string>> &bdtRefIds,
                const Pistache::Optional<std::string> &suppFeat,
                Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif