/**
 * Unified Data Repository Service API file for Application Data
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
 * IndividualInfluenceDataDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_INFLUENCE_DATA_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_INFLUENCE_DATA_DOCUMENT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <IndividualInfluenceDataDocumentApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "TrafficInfluData.h"
#include "TrafficInfluDataPatch.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class IndividualInfluenceDataDocumentApiImpl
    : public org::openapitools::server::api::
          IndividualInfluenceDataDocumentApi {
public:
  IndividualInfluenceDataDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~IndividualInfluenceDataDocumentApiImpl() {}

  void create_or_replace_individual_influence_data(
      const std::string &influenceId, const TrafficInfluData &trafficInfluData,
      Pistache::Http::ResponseWriter &response);
  void
  delete_individual_influence_data(const std::string &influenceId,
                                   Pistache::Http::ResponseWriter &response);
  void update_individual_influence_data(
      const std::string &influenceId,
      const TrafficInfluDataPatch &trafficInfluDataPatch,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif