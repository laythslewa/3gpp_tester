/**
 * Npcf_EventExposure
 * PCF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SnssaiDnnCombination.h
 *
 * Represents a combination of S-NSSAI and DNN(s).
 */

#ifndef SnssaiDnnCombination_H_
#define SnssaiDnnCombination_H_

#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a combination of S-NSSAI and DNN(s).
/// </summary>
class SnssaiDnnCombination {
public:
  SnssaiDnnCombination();
  virtual ~SnssaiDnnCombination();

  void validate();

  /////////////////////////////////////////////
  /// SnssaiDnnCombination members

  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const &value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getDnns();
  void setDnns(std::vector<std::string> const &value);
  bool dnnsIsSet() const;
  void unsetDnns();

  friend void to_json(nlohmann::json &j, const SnssaiDnnCombination &o);
  friend void from_json(const nlohmann::json &j, SnssaiDnnCombination &o);

protected:
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  std::vector<std::string> m_Dnns;
  bool m_DnnsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SnssaiDnnCombination_H_ */
