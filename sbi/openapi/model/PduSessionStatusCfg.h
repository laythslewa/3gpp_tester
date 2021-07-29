/**
 * Nhss_EE
 * HSS Event Exposure © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PduSessionStatusCfg.h
 *
 * Contains data needed for a Monitoring Configuration, specific to the &#39;PDN
 * Connectivity Status&#39; event type
 */

#ifndef PduSessionStatusCfg_H_
#define PduSessionStatusCfg_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains data needed for a Monitoring Configuration, specific to the
/// &#39;PDN Connectivity Status&#39; event type
/// </summary>
class PduSessionStatusCfg {
public:
  PduSessionStatusCfg();
  virtual ~PduSessionStatusCfg();

  void validate();

  /////////////////////////////////////////////
  /// PduSessionStatusCfg members

  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getApn() const;
  void setApn(std::string const &value);
  bool apnIsSet() const;
  void unsetApn();

  friend void to_json(nlohmann::json &j, const PduSessionStatusCfg &o);
  friend void from_json(const nlohmann::json &j, PduSessionStatusCfg &o);

protected:
  std::string m_Apn;
  bool m_ApnIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PduSessionStatusCfg_H_ */