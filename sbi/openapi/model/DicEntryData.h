/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
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
 * DicEntryData.h
 *
 * A dictionary entry for a UE radio capability ID in the UCMF
 */

#ifndef DicEntryData_H_
#define DicEntryData_H_

#include "RefToBinaryData.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A dictionary entry for a UE radio capability ID in the UCMF
/// </summary>
class DicEntryData {
public:
  DicEntryData();
  virtual ~DicEntryData();

  void validate();

  /////////////////////////////////////////////
  /// DicEntryData members

  /// <summary>
  ///
  /// </summary>
  int32_t getDicEntryId() const;
  void setDicEntryId(int32_t const value);
  bool dicEntryIdIsSet() const;
  void unsetDicEntryId();
  /// <summary>
  /// Type Allocation Code (TAC) of the UE, comprising the initial eight-digit
  /// portion of the 15-digit IMEI and 16-digit IMEISV codes. See clause 6.2 of
  /// 3GPP TS 23.003.
  /// </summary>
  std::string getTypeAllocationCode() const;
  void setTypeAllocationCode(std::string const &value);
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getPlmnAssiUeRadioCapId() const;
  void setPlmnAssiUeRadioCapId(std::string const &value);
  bool plmnAssiUeRadioCapIdIsSet() const;
  void unsetPlmnAssiUeRadioCapId();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getManAssiUeRadioCapId() const;
  void setManAssiUeRadioCapId(std::string const &value);
  bool manAssiUeRadioCapIdIsSet() const;
  void unsetManAssiUeRadioCapId();
  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getUeRadioCapability5GS() const;
  void setUeRadioCapability5GS(RefToBinaryData const &value);
  bool ueRadioCapability5GSIsSet() const;
  void unsetUeRadioCapability5GS();
  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getUeRadioCapabilityEPS() const;
  void setUeRadioCapabilityEPS(RefToBinaryData const &value);
  bool ueRadioCapabilityEPSIsSet() const;
  void unsetUeRadioCapabilityEPS();

  friend void to_json(nlohmann::json &j, const DicEntryData &o);
  friend void from_json(const nlohmann::json &j, DicEntryData &o);

protected:
  int32_t m_DicEntryId;
  bool m_DicEntryIdIsSet;
  std::string m_TypeAllocationCode;

  std::string m_PlmnAssiUeRadioCapId;
  bool m_PlmnAssiUeRadioCapIdIsSet;
  std::string m_ManAssiUeRadioCapId;
  bool m_ManAssiUeRadioCapIdIsSet;
  RefToBinaryData m_UeRadioCapability5GS;
  bool m_UeRadioCapability5GSIsSet;
  RefToBinaryData m_UeRadioCapabilityEPS;
  bool m_UeRadioCapabilityEPSIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DicEntryData_H_ */