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
 * GPSIToSUPITranslationOrSUPIToGPSITranslationApiImpl.h
 *
 *
 */

#ifndef GPSI_TO_SUPI_TRANSLATION_OR_SUPI_TO_GPSI_TRANSLATION_API_IMPL_H_
#define GPSI_TO_SUPI_TRANSLATION_OR_SUPI_TO_GPSI_TRANSLATION_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <GPSIToSUPITranslationOrSUPIToGPSITranslationApi.h>

#include <pistache/optional.h>

#include "AppPortId.h"
#include "GpsiType.h"
#include "IdTranslationResult.h"
#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class GPSIToSUPITranslationOrSUPIToGPSITranslationApiImpl
    : public org::openapitools::server::api::
          GPSIToSUPITranslationOrSUPIToGPSITranslationApi {
public:
  GPSIToSUPITranslationOrSUPIToGPSITranslationApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~GPSIToSUPITranslationOrSUPIToGPSITranslationApiImpl() {}

  void get_supi_or_gpsi(
      const std::string &ueId,
      const Pistache::Optional<std::string> &supportedFeatures,
      const Pistache::Optional<std::string> &afId,
      const Pistache::Optional<AppPortId> &appPortId,
      const Pistache::Optional<GpsiType> &requestedGpsiType,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw> &ifModifiedSince,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif