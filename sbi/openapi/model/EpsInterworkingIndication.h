/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EpsInterworkingIndication.h
 *
 * EPS Interworking Indication. Possible values are - NONE - WITH_N26 -
 * WITHOUT_N26 - IWK_NON_3GPP
 */

#ifndef EpsInterworkingIndication_H_
#define EpsInterworkingIndication_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// EPS Interworking Indication. Possible values are - NONE - WITH_N26 -
/// WITHOUT_N26 - IWK_NON_3GPP
/// </summary>
class EpsInterworkingIndication {
public:
  EpsInterworkingIndication();
  virtual ~EpsInterworkingIndication();

  void validate();

  /////////////////////////////////////////////
  /// EpsInterworkingIndication members

  friend void to_json(nlohmann::json &j, const EpsInterworkingIndication &o);
  friend void from_json(const nlohmann::json &j, EpsInterworkingIndication &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EpsInterworkingIndication_H_ */
