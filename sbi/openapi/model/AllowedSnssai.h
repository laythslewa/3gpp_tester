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
 * AllowedSnssai.h
 *
 * Contains the authorized S-NSSAI and optional mapped home S-NSSAI and network
 * slice instance information
 */

#ifndef AllowedSnssai_H_
#define AllowedSnssai_H_

#include "NsiInformation.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the authorized S-NSSAI and optional mapped home S-NSSAI and network
/// slice instance information
/// </summary>
class AllowedSnssai {
public:
  AllowedSnssai();
  virtual ~AllowedSnssai();

  void validate();

  /////////////////////////////////////////////
  /// AllowedSnssai members

  /// <summary>
  ///
  /// </summary>
  Snssai getAllowedSnssai() const;
  void setAllowedSnssai(Snssai const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<NsiInformation> &getNsiInformationList();
  void setNsiInformationList(std::vector<NsiInformation> const &value);
  bool nsiInformationListIsSet() const;
  void unsetNsiInformationList();
  /// <summary>
  ///
  /// </summary>
  Snssai getMappedHomeSnssai() const;
  void setMappedHomeSnssai(Snssai const &value);
  bool mappedHomeSnssaiIsSet() const;
  void unsetMappedHomeSnssai();

  friend void to_json(nlohmann::json &j, const AllowedSnssai &o);
  friend void from_json(const nlohmann::json &j, AllowedSnssai &o);

protected:
  Snssai m_AllowedSnssai;

  std::vector<NsiInformation> m_NsiInformationList;
  bool m_NsiInformationListIsSet;
  Snssai m_MappedHomeSnssai;
  bool m_MappedHomeSnssaiIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AllowedSnssai_H_ */