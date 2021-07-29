/**
 * Nbsf_Management
 * Binding Support Management Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * BindingResp.h
 *
 * Contains the binding information.
 */

#ifndef BindingResp_H_
#define BindingResp_H_

#include "IpEndPoint.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the binding information.
/// </summary>
class BindingResp {
public:
  BindingResp();
  virtual ~BindingResp();

  void validate();

  /////////////////////////////////////////////
  /// BindingResp members

  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getPcfSmFqdn() const;
  void setPcfSmFqdn(std::string const &value);
  bool pcfSmFqdnIsSet() const;
  void unsetPcfSmFqdn();
  /// <summary>
  /// IP end points of the PCF hosting the Npcf_SMPolicyControl service.
  /// </summary>
  std::vector<IpEndPoint> &getPcfSmIpEndPoints();
  void setPcfSmIpEndPoints(std::vector<IpEndPoint> const &value);
  bool pcfSmIpEndPointsIsSet() const;
  void unsetPcfSmIpEndPoints();

  friend void to_json(nlohmann::json &j, const BindingResp &o);
  friend void from_json(const nlohmann::json &j, BindingResp &o);

protected:
  std::string m_PcfSmFqdn;
  bool m_PcfSmFqdnIsSet;
  std::vector<IpEndPoint> m_PcfSmIpEndPoints;
  bool m_PcfSmIpEndPointsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* BindingResp_H_ */
