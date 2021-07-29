/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EcRestriction.h
 *
 *
 */

#ifndef EcRestriction_H_
#define EcRestriction_H_

#include "PlmnEcInfo.h"
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
class EcRestriction {
public:
  EcRestriction();
  virtual ~EcRestriction();

  void validate();

  /////////////////////////////////////////////
  /// EcRestriction members

  /// <summary>
  ///
  /// </summary>
  std::string getAfInstanceId() const;
  void setAfInstanceId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getReferenceId() const;
  void setReferenceId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnEcInfo> &getPlmnEcInfos();
  void setPlmnEcInfos(std::vector<PlmnEcInfo> const &value);
  bool plmnEcInfosIsSet() const;
  void unsetPlmnEcInfos();
  /// <summary>
  /// String uniquely identifying MTC provider information.
  /// </summary>
  std::string getMtcProviderInformation() const;
  void setMtcProviderInformation(std::string const &value);
  bool mtcProviderInformationIsSet() const;
  void unsetMtcProviderInformation();

  friend void to_json(nlohmann::json &j, const EcRestriction &o);
  friend void from_json(const nlohmann::json &j, EcRestriction &o);

protected:
  std::string m_AfInstanceId;

  int32_t m_ReferenceId;

  std::vector<PlmnEcInfo> m_PlmnEcInfos;
  bool m_PlmnEcInfosIsSet;
  std::string m_MtcProviderInformation;
  bool m_MtcProviderInformationIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EcRestriction_H_ */
