/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ImeiSvInformation.h
 *
 *
 */

#ifndef ImeiSvInformation_H_
#define ImeiSvInformation_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ImeiSvInformation {
public:
  ImeiSvInformation();
  virtual ~ImeiSvInformation();

  void validate();

  /////////////////////////////////////////////
  /// ImeiSvInformation members

  /// <summary>
  ///
  /// </summary>
  std::string getImei() const;
  void setImei(std::string const &value);
  bool imeiIsSet() const;
  void unsetImei();
  /// <summary>
  ///
  /// </summary>
  std::string getImeiSv() const;
  void setImeiSv(std::string const &value);
  bool imeiSvIsSet() const;
  void unsetImeiSv();

  friend void to_json(nlohmann::json &j, const ImeiSvInformation &o);
  friend void from_json(const nlohmann::json &j, ImeiSvInformation &o);

protected:
  std::string m_Imei;
  bool m_ImeiIsSet;
  std::string m_ImeiSv;
  bool m_ImeiSvIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ImeiSvInformation_H_ */