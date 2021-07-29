/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * HssInfo.h
 *
 * Information of an HSS NF Instance
 */

#ifndef HssInfo_H_
#define HssInfo_H_

#include "IdentityRange.h"
#include "ImsiRange.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information of an HSS NF Instance
/// </summary>
class HssInfo {
public:
  HssInfo();
  virtual ~HssInfo();

  void validate();

  /////////////////////////////////////////////
  /// HssInfo members

  /// <summary>
  /// Identifier of a group of NFs.
  /// </summary>
  std::string getGroupId() const;
  void setGroupId(std::string const &value);
  bool groupIdIsSet() const;
  void unsetGroupId();
  /// <summary>
  ///
  /// </summary>
  std::vector<ImsiRange> &getImsiRanges();
  void setImsiRanges(std::vector<ImsiRange> const &value);
  bool imsiRangesIsSet() const;
  void unsetImsiRanges();
  /// <summary>
  ///
  /// </summary>
  std::vector<IdentityRange> &getImsPrivateIdentityRanges();
  void setImsPrivateIdentityRanges(std::vector<IdentityRange> const &value);
  bool imsPrivateIdentityRangesIsSet() const;
  void unsetImsPrivateIdentityRanges();
  /// <summary>
  ///
  /// </summary>
  std::vector<IdentityRange> &getImsPublicIdentityRanges();
  void setImsPublicIdentityRanges(std::vector<IdentityRange> const &value);
  bool imsPublicIdentityRangesIsSet() const;
  void unsetImsPublicIdentityRanges();
  /// <summary>
  ///
  /// </summary>
  std::vector<IdentityRange> &getMsisdnRanges();
  void setMsisdnRanges(std::vector<IdentityRange> const &value);
  bool msisdnRangesIsSet() const;
  void unsetMsisdnRanges();

  friend void to_json(nlohmann::json &j, const HssInfo &o);
  friend void from_json(const nlohmann::json &j, HssInfo &o);

protected:
  std::string m_GroupId;
  bool m_GroupIdIsSet;
  std::vector<ImsiRange> m_ImsiRanges;
  bool m_ImsiRangesIsSet;
  std::vector<IdentityRange> m_ImsPrivateIdentityRanges;
  bool m_ImsPrivateIdentityRangesIsSet;
  std::vector<IdentityRange> m_ImsPublicIdentityRanges;
  bool m_ImsPublicIdentityRangesIsSet;
  std::vector<IdentityRange> m_MsisdnRanges;
  bool m_MsisdnRangesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HssInfo_H_ */
