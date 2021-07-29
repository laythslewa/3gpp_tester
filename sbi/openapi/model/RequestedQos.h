/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RequestedQos.h
 *
 * Contains the QoS information requested by the UE.
 */

#ifndef RequestedQos_H_
#define RequestedQos_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the QoS information requested by the UE.
/// </summary>
class RequestedQos {
public:
  RequestedQos();
  virtual ~RequestedQos();

  void validate();

  /////////////////////////////////////////////
  /// RequestedQos members

  /// <summary>
  /// Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of
  /// 3GPP TS 23.501, within the range 0 to 255
  /// </summary>
  int32_t getR5qi() const;
  void setR5qi(int32_t const value);
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getGbrUl() const;
  void setGbrUl(std::string const &value);
  bool gbrUlIsSet() const;
  void unsetGbrUl();
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getGbrDl() const;
  void setGbrDl(std::string const &value);
  bool gbrDlIsSet() const;
  void unsetGbrDl();

  friend void to_json(nlohmann::json &j, const RequestedQos &o);
  friend void from_json(const nlohmann::json &j, RequestedQos &o);

protected:
  int32_t m_r_5qi;

  std::string m_GbrUl;
  bool m_GbrUlIsSet;
  std::string m_GbrDl;
  bool m_GbrDlIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RequestedQos_H_ */
