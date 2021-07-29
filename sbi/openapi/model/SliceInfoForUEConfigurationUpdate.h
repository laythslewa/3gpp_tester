/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SliceInfoForUEConfigurationUpdate.h
 *
 * Contains the slice information requested during UE configuration update
 * procedure
 */

#ifndef SliceInfoForUEConfigurationUpdate_H_
#define SliceInfoForUEConfigurationUpdate_H_

#include "AllowedNssai.h"
#include "MappingOfSnssai.h"
#include "Snssai.h"
#include "SubscribedSnssai.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the slice information requested during UE configuration update
/// procedure
/// </summary>
class SliceInfoForUEConfigurationUpdate {
public:
  SliceInfoForUEConfigurationUpdate();
  virtual ~SliceInfoForUEConfigurationUpdate();

  void validate();

  /////////////////////////////////////////////
  /// SliceInfoForUEConfigurationUpdate members

  /// <summary>
  ///
  /// </summary>
  std::vector<SubscribedSnssai> &getSubscribedNssai();
  void setSubscribedNssai(std::vector<SubscribedSnssai> const &value);
  bool subscribedNssaiIsSet() const;
  void unsetSubscribedNssai();
  /// <summary>
  ///
  /// </summary>
  AllowedNssai getAllowedNssaiCurrentAccess() const;
  void setAllowedNssaiCurrentAccess(AllowedNssai const &value);
  bool allowedNssaiCurrentAccessIsSet() const;
  void unsetAllowedNssaiCurrentAccess();
  /// <summary>
  ///
  /// </summary>
  AllowedNssai getAllowedNssaiOtherAccess() const;
  void setAllowedNssaiOtherAccess(AllowedNssai const &value);
  bool allowedNssaiOtherAccessIsSet() const;
  void unsetAllowedNssaiOtherAccess();
  /// <summary>
  ///
  /// </summary>
  bool isDefaultConfiguredSnssaiInd() const;
  void setDefaultConfiguredSnssaiInd(bool const value);
  bool defaultConfiguredSnssaiIndIsSet() const;
  void unsetDefaultConfiguredSnssaiInd();
  /// <summary>
  ///
  /// </summary>
  std::vector<Snssai> &getRequestedNssai();
  void setRequestedNssai(std::vector<Snssai> const &value);
  bool requestedNssaiIsSet() const;
  void unsetRequestedNssai();
  /// <summary>
  ///
  /// </summary>
  std::vector<MappingOfSnssai> &getMappingOfNssai();
  void setMappingOfNssai(std::vector<MappingOfSnssai> const &value);
  bool mappingOfNssaiIsSet() const;
  void unsetMappingOfNssai();

  friend void to_json(nlohmann::json &j,
                      const SliceInfoForUEConfigurationUpdate &o);
  friend void from_json(const nlohmann::json &j,
                        SliceInfoForUEConfigurationUpdate &o);

protected:
  std::vector<SubscribedSnssai> m_SubscribedNssai;
  bool m_SubscribedNssaiIsSet;
  AllowedNssai m_AllowedNssaiCurrentAccess;
  bool m_AllowedNssaiCurrentAccessIsSet;
  AllowedNssai m_AllowedNssaiOtherAccess;
  bool m_AllowedNssaiOtherAccessIsSet;
  bool m_DefaultConfiguredSnssaiInd;
  bool m_DefaultConfiguredSnssaiIndIsSet;
  std::vector<Snssai> m_RequestedNssai;
  bool m_RequestedNssaiIsSet;
  std::vector<MappingOfSnssai> m_MappingOfNssai;
  bool m_MappingOfNssaiIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SliceInfoForUEConfigurationUpdate_H_ */
