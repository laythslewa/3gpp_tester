/**
 * Nsoraf_SOR
 * Nsoraf Steering Of Roaming Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi.h
 *
 *
 */

#ifndef ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi_H_
#define ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "SorAckInfo.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class
    ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi {
public:
  ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi() {
  }
  void init();

  const std::string base = "/nsoraf-sor/v1";

private:
  void setupRoutes();

  void sor_ack_info_handler(const Pistache::Rest::Request &request,
                            Pistache::Http::ResponseWriter response);
  void
  providing_the_reception_status_of_the_acknowledgement_of_steering_of_roaming_information_reception_by_the_ue_api_default_handler(
      const Pistache::Rest::Request &request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// SoR Acknowledgment Reception Notification
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="supi">Identifier of the UE</param>
  /// <param name="sorAckInfo"></param>
  virtual void sor_ack_info(const std::string &supi,
                            const SorAckInfo &sorAckInfo,
                            Pistache::Http::ResponseWriter &response) = 0;
};

} // namespace api
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ProvidingTheReceptionStatusOfTheAcknowledgementOfSteeringOfRoamingInformationReceptionByTheUEApi_H_ \
        */