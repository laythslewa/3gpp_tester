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
 * Pc5QoSPara.h
 *
 *
 */

#ifndef Pc5QoSPara_H_
#define Pc5QoSPara_H_

#include "Pc5QosFlowItem.h"
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
class Pc5QoSPara {
public:
  Pc5QoSPara();
  virtual ~Pc5QoSPara();

  void validate();

  /////////////////////////////////////////////
  /// Pc5QoSPara members

  /// <summary>
  /// This IE shall contain the set of PC5 flow(s).
  /// </summary>
  std::vector<Pc5QosFlowItem> &getPc5QosFlowList();
  void setPc5QosFlowList(std::vector<Pc5QosFlowItem> const &value);
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getPc5LinkAmbr() const;
  void setPc5LinkAmbr(std::string const &value);
  bool pc5LinkAmbrIsSet() const;
  void unsetPc5LinkAmbr();

  friend void to_json(nlohmann::json &j, const Pc5QoSPara &o);
  friend void from_json(const nlohmann::json &j, Pc5QoSPara &o);

protected:
  std::vector<Pc5QosFlowItem> m_Pc5QosFlowList;

  std::string m_Pc5LinkAmbr;
  bool m_Pc5LinkAmbrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Pc5QoSPara_H_ */
