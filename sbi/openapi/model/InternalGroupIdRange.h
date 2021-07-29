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
 * InternalGroupIdRange.h
 *
 * A range of Group IDs (internal group identities), either based on a numeric
 * range, or based on regular-expression matching
 */

#ifndef InternalGroupIdRange_H_
#define InternalGroupIdRange_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A range of Group IDs (internal group identities), either based on a numeric
/// range, or based on regular-expression matching
/// </summary>
class InternalGroupIdRange {
public:
  InternalGroupIdRange();
  virtual ~InternalGroupIdRange();

  void validate();

  /////////////////////////////////////////////
  /// InternalGroupIdRange members

  /// <summary>
  /// String identifying a group of devices network internal globally unique ID
  /// which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP
  /// TS 23.003.
  /// </summary>
  std::string getStart() const;
  void setStart(std::string const &value);
  bool startIsSet() const;
  void unsetStart();
  /// <summary>
  /// String identifying a group of devices network internal globally unique ID
  /// which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP
  /// TS 23.003.
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

  friend void to_json(nlohmann::json &j, const InternalGroupIdRange &o);
  friend void from_json(const nlohmann::json &j, InternalGroupIdRange &o);

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

#endif /* InternalGroupIdRange_H_ */