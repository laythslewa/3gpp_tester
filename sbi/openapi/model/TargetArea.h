/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TargetArea.h
 *
 * TA list or TAI range list or any TA
 */

#ifndef TargetArea_H_
#define TargetArea_H_

#include "Tai.h"
#include "TaiRange.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// TA list or TAI range list or any TA
/// </summary>
class TargetArea {
public:
  TargetArea();
  virtual ~TargetArea();

  void validate();

  /////////////////////////////////////////////
  /// TargetArea members

  /// <summary>
  ///
  /// </summary>
  std::vector<Tai> &getTaList();
  void setTaList(std::vector<Tai> const &value);
  bool taListIsSet() const;
  void unsetTaList();
  /// <summary>
  ///
  /// </summary>
  std::vector<TaiRange> &getTaiRangeList();
  void setTaiRangeList(std::vector<TaiRange> const &value);
  bool taiRangeListIsSet() const;
  void unsetTaiRangeList();
  /// <summary>
  ///
  /// </summary>
  bool isAnyTa() const;
  void setAnyTa(bool const value);
  bool anyTaIsSet() const;
  void unsetAnyTa();

  friend void to_json(nlohmann::json &j, const TargetArea &o);
  friend void from_json(const nlohmann::json &j, TargetArea &o);

protected:
  std::vector<Tai> m_TaList;
  bool m_TaListIsSet;
  std::vector<TaiRange> m_TaiRangeList;
  bool m_TaiRangeListIsSet;
  bool m_AnyTa;
  bool m_AnyTaIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TargetArea_H_ */