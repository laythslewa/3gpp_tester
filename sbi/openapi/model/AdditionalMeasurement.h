/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AdditionalMeasurement.h
 *
 * Represents additional measurement information.
 */

#ifndef AdditionalMeasurement_H_
#define AdditionalMeasurement_H_

#include "AddressList.h"
#include "CircumstanceDescription.h"
#include "IpEthFlowDescription.h"
#include "NetworkAreaInfo.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents additional measurement information.
/// </summary>
class AdditionalMeasurement {
public:
  AdditionalMeasurement();
  virtual ~AdditionalMeasurement();

  void validate();

  /////////////////////////////////////////////
  /// AdditionalMeasurement members

  /// <summary>
  ///
  /// </summary>
  NetworkAreaInfo getUnexpLoc() const;
  void setUnexpLoc(NetworkAreaInfo const &value);
  bool unexpLocIsSet() const;
  void unsetUnexpLoc();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpEthFlowDescription> &getUnexpFlowTeps();
  void setUnexpFlowTeps(std::vector<IpEthFlowDescription> const &value);
  bool unexpFlowTepsIsSet() const;
  void unsetUnexpFlowTeps();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getUnexpWakes();
  void setUnexpWakes(std::vector<std::string> const &value);
  bool unexpWakesIsSet() const;
  void unsetUnexpWakes();
  /// <summary>
  ///
  /// </summary>
  AddressList getDdosAttack() const;
  void setDdosAttack(AddressList const &value);
  bool ddosAttackIsSet() const;
  void unsetDdosAttack();
  /// <summary>
  ///
  /// </summary>
  AddressList getWrgDest() const;
  void setWrgDest(AddressList const &value);
  bool wrgDestIsSet() const;
  void unsetWrgDest();
  /// <summary>
  ///
  /// </summary>
  std::vector<CircumstanceDescription> &getCircums();
  void setCircums(std::vector<CircumstanceDescription> const &value);
  bool circumsIsSet() const;
  void unsetCircums();

  friend void to_json(nlohmann::json &j, const AdditionalMeasurement &o);
  friend void from_json(const nlohmann::json &j, AdditionalMeasurement &o);

protected:
  NetworkAreaInfo m_UnexpLoc;
  bool m_UnexpLocIsSet;
  std::vector<IpEthFlowDescription> m_UnexpFlowTeps;
  bool m_UnexpFlowTepsIsSet;
  std::vector<std::string> m_UnexpWakes;
  bool m_UnexpWakesIsSet;
  AddressList m_DdosAttack;
  bool m_DdosAttackIsSet;
  AddressList m_WrgDest;
  bool m_WrgDestIsSet;
  std::vector<CircumstanceDescription> m_Circums;
  bool m_CircumsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AdditionalMeasurement_H_ */