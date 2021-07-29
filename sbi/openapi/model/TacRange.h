/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TacRange.h
 *
 * Range of TACs (Tracking Area Codes)
 */

#ifndef TacRange_H_
#define TacRange_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Range of TACs (Tracking Area Codes)
/// </summary>
class TacRange {
public:
  TacRange();
  virtual ~TacRange();

  void validate();

  /////////////////////////////////////////////
  /// TacRange members

  /// <summary>
  ///
  /// </summary>
  std::string getStart() const;
  void setStart(std::string const &value);
  bool startIsSet() const;
  void unsetStart();
  /// <summary>
  ///
  /// </summary>
  std::string getEnd() const;
  void setEnd(std::string const &value);
  bool endIsSet() const;
  void unsetEnd();
  /// <summary>
  ///
  /// </summary>
  std::string getPattern() const;
  void setPattern(std::string const &value);
  bool patternIsSet() const;
  void unsetPattern();

  friend void to_json(nlohmann::json &j, const TacRange &o);
  friend void from_json(const nlohmann::json &j, TacRange &o);

protected:
  std::string m_Start;
  bool m_StartIsSet;
  std::string m_End;
  bool m_EndIsSet;
  std::string m_Pattern;
  bool m_PatternIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TacRange_H_ */