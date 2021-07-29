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
 * TargetDnaiInfo.h
 *
 * Target DNAI Information
 */

#ifndef TargetDnaiInfo_H_
#define TargetDnaiInfo_H_

#include "SmfSelectionType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Target DNAI Information
/// </summary>
class TargetDnaiInfo {
public:
  TargetDnaiInfo();
  virtual ~TargetDnaiInfo();

  void validate();

  /////////////////////////////////////////////
  /// TargetDnaiInfo members

  /// <summary>
  /// DNAI (Data network access identifier), see clause 5.6.7 of 3GPP TS 23.501.
  /// </summary>
  std::string getTargetDnai() const;
  void setTargetDnai(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  SmfSelectionType getSmfSelectionType() const;
  void setSmfSelectionType(SmfSelectionType const &value);

  friend void to_json(nlohmann::json &j, const TargetDnaiInfo &o);
  friend void from_json(const nlohmann::json &j, TargetDnaiInfo &o);

protected:
  std::string m_TargetDnai;

  SmfSelectionType m_SmfSelectionType;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TargetDnaiInfo_H_ */