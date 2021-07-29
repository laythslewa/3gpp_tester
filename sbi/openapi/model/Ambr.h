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
 * Ambr.h
 *
 *
 */

#ifndef Ambr_H_
#define Ambr_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Ambr {
public:
  Ambr();
  virtual ~Ambr();

  void validate();

  /////////////////////////////////////////////
  /// Ambr members

  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getUplink() const;
  void setUplink(std::string const &value);
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getDownlink() const;
  void setDownlink(std::string const &value);

  friend void to_json(nlohmann::json &j, const Ambr &o);
  friend void from_json(const nlohmann::json &j, Ambr &o);

protected:
  std::string m_Uplink;

  std::string m_Downlink;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Ambr_H_ */
