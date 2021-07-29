/**
 * 3gpp-time-sync-exposure
 * API for time synchronization exposure. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DistributionMethod.h
 *
 * Contains the time synchronization distribution methods.
 */

#ifndef DistributionMethod_H_
#define DistributionMethod_H_

#include "1588Method.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the time synchronization distribution methods.
/// </summary>
class DistributionMethod {
public:
  DistributionMethod();
  virtual ~DistributionMethod();

  void validate();

  /////////////////////////////////////////////
  /// DistributionMethod members

  /// <summary>
  ///
  /// </summary>
  1588Method getR1588Mes() const;
  void setR1588Mes(1588Method const &value);
  bool r1588MesIsSet() const;
  void unsetr_1588Mes();
  /// <summary>
  /// Indicates that the IEEE Std 802.1AS [46] method is supported if it is
  /// included and set to true.
  /// </summary>
  bool isR1asMe() const;
  void setR1asMe(bool const value);
  bool r1asMeIsSet() const;
  void unsetr_1asMe();
  /// <summary>
  /// Indicates that Access Stratum-based 5G clock sync is supported if it is
  /// included and set to true.
  /// </summary>
  bool isR5gClockMe() const;
  void setR5gClockMe(bool const value);
  bool r5gClockMeIsSet() const;
  void unsetr_5gClockMe();

  friend void to_json(nlohmann::json &j, const DistributionMethod &o);
  friend void from_json(const nlohmann::json &j, DistributionMethod &o);

protected:
  1588Method m_r_1588Mes;
  bool m_r_1588MesIsSet;
  bool m_r_1asMe;
  bool m_r_1asMeIsSet;
  bool m_r_5gClockMe;
  bool m_r_5gClockMeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DistributionMethod_H_ */
