/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SecParamExchReqData.h
 *
 * Request data structure for parameter exchange
 */

#ifndef SecParamExchReqData_H_
#define SecParamExchReqData_H_

#include "IpxProviderSecInfo.h"
#include "ProtectionPolicy.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Request data structure for parameter exchange
/// </summary>
class SecParamExchReqData {
public:
  SecParamExchReqData();
  virtual ~SecParamExchReqData();

  void validate();

  /////////////////////////////////////////////
  /// SecParamExchReqData members

  /// <summary>
  ///
  /// </summary>
  std::string getN32fContextId() const;
  void setN32fContextId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getJweCipherSuiteList();
  void setJweCipherSuiteList(std::vector<std::string> const &value);
  bool jweCipherSuiteListIsSet() const;
  void unsetJweCipherSuiteList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getJwsCipherSuiteList();
  void setJwsCipherSuiteList(std::vector<std::string> const &value);
  bool jwsCipherSuiteListIsSet() const;
  void unsetJwsCipherSuiteList();
  /// <summary>
  ///
  /// </summary>
  ProtectionPolicy getProtectionPolicyInfo() const;
  void setProtectionPolicyInfo(ProtectionPolicy const &value);
  bool protectionPolicyInfoIsSet() const;
  void unsetProtectionPolicyInfo();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpxProviderSecInfo> &getIpxProviderSecInfoList();
  void setIpxProviderSecInfoList(std::vector<IpxProviderSecInfo> const &value);
  bool ipxProviderSecInfoListIsSet() const;
  void unsetIpxProviderSecInfoList();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getSender() const;
  void setSender(std::string const &value);
  bool senderIsSet() const;
  void unsetSender();

  friend void to_json(nlohmann::json &j, const SecParamExchReqData &o);
  friend void from_json(const nlohmann::json &j, SecParamExchReqData &o);

protected:
  std::string m_N32fContextId;

  std::vector<std::string> m_JweCipherSuiteList;
  bool m_JweCipherSuiteListIsSet;
  std::vector<std::string> m_JwsCipherSuiteList;
  bool m_JwsCipherSuiteListIsSet;
  ProtectionPolicy m_ProtectionPolicyInfo;
  bool m_ProtectionPolicyInfoIsSet;
  std::vector<IpxProviderSecInfo> m_IpxProviderSecInfoList;
  bool m_IpxProviderSecInfoListIsSet;
  std::string m_Sender;
  bool m_SenderIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SecParamExchReqData_H_ */