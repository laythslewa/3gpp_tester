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
 * Class5GVNGroupsInternalDocumentApiImpl.h
 *
 *
 */

#ifndef CLASS5_GVN_GROUPS_INTERNAL_DOCUMENT_API_IMPL_H_
#define CLASS5_GVN_GROUPS_INTERNAL_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <Class5GVNGroupsInternalDocumentApi.h>

#include <pistache/optional.h>

#include "5GVnGroupConfiguration.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class Class5GVNGroupsInternalDocumentApiImpl
    : public org::openapitools::server::api::
          Class5GVNGroupsInternalDocumentApi {
public:
  Class5GVNGroupsInternalDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~Class5GVNGroupsInternalDocumentApiImpl() {}

  void query5_g_vn_group_internal(
      const Pistache::Optional<std::vector<std::string>> &internalGroupIds,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif