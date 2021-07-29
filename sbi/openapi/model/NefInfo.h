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
 * NefInfo.h
 *
 * Information of an NEF NF Instance
 */

#ifndef NefInfo_H_
#define NefInfo_H_

#include "AfEventExposureData.h"
#include "IdentityRange.h"
#include "PfdData.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information of an NEF NF Instance
/// </summary>
class NefInfo {
public:
  NefInfo();
  virtual ~NefInfo();

  void validate();

  /////////////////////////////////////////////
  /// NefInfo members

  /// <summary>
  /// Identity of the NEF
  /// </summary>
  std::string getNefId() const;
  void setNefId(std::string const &value);
  bool nefIdIsSet() const;
  void unsetNefId();
  /// <summary>
  ///
  /// </summary>
  PfdData getPfdData() const;
  void setPfdData(PfdData const &value);
  bool pfdDataIsSet() const;
  void unsetPfdData();
  /// <summary>
  ///
  /// </summary>
  AfEventExposureData getAfEeData() const;
  void setAfEeData(AfEventExposureData const &value);
  bool afEeDataIsSet() const;
  void unsetAfEeData();
  /// <summary>
  ///
  /// </summary>
  std::vector<IdentityRange> &getGpsiRanges();
  void setGpsiRanges(std::vector<IdentityRange> const &value);
  bool gpsiRangesIsSet() const;
  void unsetGpsiRanges();
  /// <summary>
  ///
  /// </summary>
  std::vector<IdentityRange> &getExternalGroupIdentifiersRanges();
  void
  setExternalGroupIdentifiersRanges(std::vector<IdentityRange> const &value);
  bool externalGroupIdentifiersRangesIsSet() const;
  void unsetExternalGroupIdentifiersRanges();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getServedFqdnList();
  void setServedFqdnList(std::vector<std::string> const &value);
  bool servedFqdnListIsSet() const;
  void unsetServedFqdnList();

  friend void to_json(nlohmann::json &j, const NefInfo &o);
  friend void from_json(const nlohmann::json &j, NefInfo &o);

protected:
  std::string m_NefId;
  bool m_NefIdIsSet;
  PfdData m_PfdData;
  bool m_PfdDataIsSet;
  AfEventExposureData m_AfEeData;
  bool m_AfEeDataIsSet;
  std::vector<IdentityRange> m_GpsiRanges;
  bool m_GpsiRangesIsSet;
  std::vector<IdentityRange> m_ExternalGroupIdentifiersRanges;
  bool m_ExternalGroupIdentifiersRangesIsSet;
  std::vector<std::string> m_ServedFqdnList;
  bool m_ServedFqdnListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NefInfo_H_ */