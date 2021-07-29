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
 * ReferenceLocationInformation.h
 *
 *
 */

#ifndef ReferenceLocationInformation_H_
#define ReferenceLocationInformation_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ReferenceLocationInformation {
public:
  ReferenceLocationInformation();
  virtual ~ReferenceLocationInformation();

  void validate();

  /////////////////////////////////////////////
  /// ReferenceLocationInformation members

  /// <summary>
  ///
  /// </summary>
  std::string getAccessType() const;
  void setAccessType(std::string const &value);
  bool accessTypeIsSet() const;
  void unsetAccessType();
  /// <summary>
  ///
  /// </summary>
  std::string getAccessInfo() const;
  void setAccessInfo(std::string const &value);
  bool accessInfoIsSet() const;
  void unsetAccessInfo();
  /// <summary>
  ///
  /// </summary>
  std::string getAccessValue() const;
  void setAccessValue(std::string const &value);
  bool accessValueIsSet() const;
  void unsetAccessValue();

  friend void to_json(nlohmann::json &j, const ReferenceLocationInformation &o);
  friend void from_json(const nlohmann::json &j,
                        ReferenceLocationInformation &o);

protected:
  std::string m_AccessType;
  bool m_AccessTypeIsSet;
  std::string m_AccessInfo;
  bool m_AccessInfoIsSet;
  std::string m_AccessValue;
  bool m_AccessValueIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ReferenceLocationInformation_H_ */