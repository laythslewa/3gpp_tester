/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AreaScope.h
 *
 *
 */

#ifndef AreaScope_H_
#define AreaScope_H_

#include "TacInfo.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class AreaScope {
public:
  AreaScope();
  virtual ~AreaScope();

  void validate();

  /////////////////////////////////////////////
  /// AreaScope members

  /// <summary>
  /// When present, this IE shall contain a list of the E-UTRAN Cell
  /// Identifications where the MDT data collection shall take place.
  /// </summary>
  std::vector<std::string> &getEutraCellIdList();
  void setEutraCellIdList(std::vector<std::string> const &value);
  bool eutraCellIdListIsSet() const;
  void unsetEutraCellIdList();
  /// <summary>
  /// When present, this IE shall contain a list of the NR Cell Identities where
  /// the MDT data collection shall take place.
  /// </summary>
  std::vector<std::string> &getNrCellIdList();
  void setNrCellIdList(std::vector<std::string> const &value);
  bool nrCellIdListIsSet() const;
  void unsetNrCellIdList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getTacList();
  void setTacList(std::vector<std::string> const &value);
  bool tacListIsSet() const;
  void unsetTacList();
  /// <summary>
  /// A map (list of key-value pairs) where PlmnId converted to a string serves
  /// as key
  /// </summary>
  std::map<std::string, TacInfo> &getTacInfoPerPlmn();
  void setTacInfoPerPlmn(std::map<std::string, TacInfo> const &value);
  bool tacInfoPerPlmnIsSet() const;
  void unsetTacInfoPerPlmn();

  friend void to_json(nlohmann::json &j, const AreaScope &o);
  friend void from_json(const nlohmann::json &j, AreaScope &o);

protected:
  std::vector<std::string> m_EutraCellIdList;
  bool m_EutraCellIdListIsSet;
  std::vector<std::string> m_NrCellIdList;
  bool m_NrCellIdListIsSet;
  std::vector<std::string> m_TacList;
  bool m_TacListIsSet;
  std::map<std::string, TacInfo> m_TacInfoPerPlmn;
  bool m_TacInfoPerPlmnIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AreaScope_H_ */
