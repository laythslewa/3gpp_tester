/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Exception.h
 *
 * Represents the Exception information.
 */

#ifndef Exception_H_
#define Exception_H_

#include "ExceptionId.h"
#include "ExceptionTrend.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the Exception information.
/// </summary>
class Exception {
public:
  Exception();
  virtual ~Exception();

  void validate();

  /////////////////////////////////////////////
  /// Exception members

  /// <summary>
  ///
  /// </summary>
  ExceptionId getExcepId() const;
  void setExcepId(ExceptionId const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getExcepLevel() const;
  void setExcepLevel(int32_t const value);
  bool excepLevelIsSet() const;
  void unsetExcepLevel();
  /// <summary>
  ///
  /// </summary>
  ExceptionTrend getExcepTrend() const;
  void setExcepTrend(ExceptionTrend const &value);
  bool excepTrendIsSet() const;
  void unsetExcepTrend();

  friend void to_json(nlohmann::json &j, const Exception &o);
  friend void from_json(const nlohmann::json &j, Exception &o);

protected:
  ExceptionId m_ExcepId;

  int32_t m_ExcepLevel;
  bool m_ExcepLevelIsSet;
  ExceptionTrend m_ExcepTrend;
  bool m_ExcepTrendIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Exception_H_ */