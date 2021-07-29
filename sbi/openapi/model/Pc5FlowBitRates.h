/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Pc5FlowBitRates.h
 *
 *
 */

#ifndef Pc5FlowBitRates_H_
#define Pc5FlowBitRates_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Pc5FlowBitRates {
public:
  Pc5FlowBitRates();
  virtual ~Pc5FlowBitRates();

  void validate();

  /////////////////////////////////////////////
  /// Pc5FlowBitRates members

  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getGuaFbr() const;
  void setGuaFbr(std::string const &value);
  bool guaFbrIsSet() const;
  void unsetGuaFbr();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getMaxFbr() const;
  void setMaxFbr(std::string const &value);
  bool maxFbrIsSet() const;
  void unsetMaxFbr();

  friend void to_json(nlohmann::json &j, const Pc5FlowBitRates &o);
  friend void from_json(const nlohmann::json &j, Pc5FlowBitRates &o);

protected:
  std::string m_GuaFbr;
  bool m_GuaFbrIsSet;
  std::string m_MaxFbr;
  bool m_MaxFbrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Pc5FlowBitRates_H_ */