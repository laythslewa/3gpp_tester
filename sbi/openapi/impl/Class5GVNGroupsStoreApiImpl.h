/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Class5GVNGroupsStoreApiImpl.h
 *
 *
 */

#ifndef CLASS5_GVN_GROUPS_STORE_API_IMPL_H_
#define CLASS5_GVN_GROUPS_STORE_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <Class5GVNGroupsStoreApi.h>

#include <pistache/optional.h>

#include "5GVnGroupConfiguration.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class Class5GVNGroupsStoreApiImpl
    : public org::openapitools::server::api::Class5GVNGroupsStoreApi {
public:
  Class5GVNGroupsStoreApiImpl(std::shared_ptr<Pistache::Rest::Router>);
  ~Class5GVNGroupsStoreApiImpl() {}

  void
  query5_g_vn_group(const Pistache::Optional<std::vector<std::string>> &gpsis,
                    Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif