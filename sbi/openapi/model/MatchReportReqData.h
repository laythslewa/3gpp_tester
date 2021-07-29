/**
 * N5g-ddnmf_Discovery API
 * N5g-ddnmf_Discovery Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * MatchReportReqData.h
 *
 * Represents the Match Report information
 */

#ifndef MatchReportReqData_H_
#define MatchReportReqData_H_

#include "DiscoveryType.h"
#include "PlmnId.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the Match Report information
/// </summary>
class MatchReportReqData {
public:
  MatchReportReqData();
  virtual ~MatchReportReqData();

  void validate();

  /////////////////////////////////////////////
  /// MatchReportReqData members

  /// <summary>
  ///
  /// </summary>
  DiscoveryType getDiscType() const;
  void setDiscType(DiscoveryType const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getProseAppCodes();
  void setProseAppCodes(std::vector<std::string> const &value);
  bool proseAppCodesIsSet() const;
  void unsetProseAppCodes();
  /// <summary>
  ///
  /// </summary>
  PlmnId getMoniteredPlmnId() const;
  void setMoniteredPlmnId(PlmnId const &value);
  bool moniteredPlmnIdIsSet() const;
  void unsetMoniteredPlmnId();

  friend void to_json(nlohmann::json &j, const MatchReportReqData &o);
  friend void from_json(const nlohmann::json &j, MatchReportReqData &o);

protected:
  DiscoveryType m_DiscType;

  std::vector<std::string> m_ProseAppCodes;
  bool m_ProseAppCodesIsSet;
  PlmnId m_MoniteredPlmnId;
  bool m_MoniteredPlmnIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MatchReportReqData_H_ */
