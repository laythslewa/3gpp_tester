/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Trigger.h
 *
 *
 */

#ifndef Trigger_H_
#define Trigger_H_

#include "TriggerCategory.h"
#include "TriggerType.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Trigger {
public:
  Trigger();
  virtual ~Trigger();

  void validate();

  /////////////////////////////////////////////
  /// Trigger members

  /// <summary>
  ///
  /// </summary>
  TriggerType getTriggerType() const;
  void setTriggerType(TriggerType const &value);
  /// <summary>
  ///
  /// </summary>
  TriggerCategory getTriggerCategory() const;
  void setTriggerCategory(TriggerCategory const &value);
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getTimeLimit() const;
  void setTimeLimit(int32_t const value);
  bool timeLimitIsSet() const;
  void unsetTimeLimit();
  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 32-bit integer.
  /// </summary>
  int32_t getVolumeLimit() const;
  void setVolumeLimit(int32_t const value);
  bool volumeLimitIsSet() const;
  void unsetVolumeLimit();
  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 64-bit integer.
  /// </summary>
  int32_t getVolumeLimit64() const;
  void setVolumeLimit64(int32_t const value);
  bool volumeLimit64IsSet() const;
  void unsetVolumeLimit64();
  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 32-bit integer.
  /// </summary>
  int32_t getEventLimit() const;
  void setEventLimit(int32_t const value);
  bool eventLimitIsSet() const;
  void unsetEventLimit();
  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 32-bit integer.
  /// </summary>
  int32_t getMaxNumberOfccc() const;
  void setMaxNumberOfccc(int32_t const value);
  bool maxNumberOfcccIsSet() const;
  void unsetMaxNumberOfccc();

  friend void to_json(nlohmann::json &j, const Trigger &o);
  friend void from_json(const nlohmann::json &j, Trigger &o);

protected:
  TriggerType m_TriggerType;

  TriggerCategory m_TriggerCategory;

  int32_t m_TimeLimit;
  bool m_TimeLimitIsSet;
  int32_t m_VolumeLimit;
  bool m_VolumeLimitIsSet;
  int32_t m_VolumeLimit64;
  bool m_VolumeLimit64IsSet;
  int32_t m_EventLimit;
  bool m_EventLimitIsSet;
  int32_t m_MaxNumberOfccc;
  bool m_MaxNumberOfcccIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Trigger_H_ */
