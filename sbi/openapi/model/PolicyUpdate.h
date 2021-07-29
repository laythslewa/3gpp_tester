/**
 * Npcf_UEPolicyControl
 * UE Policy Control Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PolicyUpdate.h
 *
 * Represents updated policies that the PCF provides in a notification or in the
 * reply to an Update Request.
 */

#ifndef PolicyUpdate_H_
#define PolicyUpdate_H_

#include "N2InfoContent.h"
#include "PresenceInfo.h"
#include "RequestTrigger.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents updated policies that the PCF provides in a notification or in
/// the reply to an Update Request.
/// </summary>
class PolicyUpdate {
public:
  PolicyUpdate();
  virtual ~PolicyUpdate();

  void validate();

  /////////////////////////////////////////////
  /// PolicyUpdate members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getResourceUri() const;
  void setResourceUri(std::string const &value);
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getUePolicy() const;
  void setUePolicy(std::string const &value);
  bool uePolicyIsSet() const;
  void unsetUePolicy();
  /// <summary>
  ///
  /// </summary>
  N2InfoContent getN2Pc5Pol() const;
  void setN2Pc5Pol(N2InfoContent const &value);
  bool n2Pc5PolIsSet() const;
  void unsetN2Pc5Pol();
  /// <summary>
  ///
  /// </summary>
  N2InfoContent getN2Pc5ProSePol() const;
  void setN2Pc5ProSePol(N2InfoContent const &value);
  bool n2Pc5ProSePolIsSet() const;
  void unsetN2Pc5ProSePol();
  /// <summary>
  /// Request Triggers that the PCF subscribes. Only values \&quot;LOC_CH\&quot;
  /// and \&quot;PRA_CH\&quot; are permitted.
  /// </summary>
  std::vector<RequestTrigger> &getTriggers();
  void setTriggers(std::vector<RequestTrigger> const &value);
  bool triggersIsSet() const;
  void unsetTriggers();
  /// <summary>
  /// Contains the presence reporting area(s) for which reporting was requested.
  /// The praId attribute within the PresenceInfo data type is the key of the
  /// map.
  /// </summary>
  std::map<std::string, PresenceInfo> &getPras();
  void setPras(std::map<std::string, PresenceInfo> const &value);
  bool prasIsSet() const;
  void unsetPras();

  friend void to_json(nlohmann::json &j, const PolicyUpdate &o);
  friend void from_json(const nlohmann::json &j, PolicyUpdate &o);

protected:
  std::string m_ResourceUri;

  std::string m_UePolicy;
  bool m_UePolicyIsSet;
  N2InfoContent m_N2Pc5Pol;
  bool m_N2Pc5PolIsSet;
  N2InfoContent m_N2Pc5ProSePol;
  bool m_N2Pc5ProSePolIsSet;
  std::vector<RequestTrigger> m_Triggers;
  bool m_TriggersIsSet;
  std::map<std::string, PresenceInfo> m_Pras;
  bool m_PrasIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PolicyUpdate_H_ */