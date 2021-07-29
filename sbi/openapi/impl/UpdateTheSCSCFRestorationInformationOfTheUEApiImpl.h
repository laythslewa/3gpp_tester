/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * UpdateTheSCSCFRestorationInformationOfTheUEApiImpl.h
 *
 *
 */

#ifndef UPDATE_THE_SCSCF_RESTORATION_INFORMATION_OF_THE_UE_API_IMPL_H_
#define UPDATE_THE_SCSCF_RESTORATION_INFORMATION_OF_THE_UE_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <UpdateTheSCSCFRestorationInformationOfTheUEApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include "ScscfRestorationInfoRequest.h"
#include "ScscfRestorationInfoResponse.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class UpdateTheSCSCFRestorationInformationOfTheUEApiImpl
    : public org::openapitools::server::api::
          UpdateTheSCSCFRestorationInformationOfTheUEApi {
public:
  UpdateTheSCSCFRestorationInformationOfTheUEApiImpl(
      std::shared_ptr<Pistache::Rest::Router>);
  ~UpdateTheSCSCFRestorationInformationOfTheUEApiImpl() {}

  void update_scscf_restoration_info(
      const std::string &impu,
      const ScscfRestorationInfoRequest &scscfRestorationInfoRequest,
      Pistache::Http::ResponseWriter &response);
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif