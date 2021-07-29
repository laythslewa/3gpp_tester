/**
 * Nucmf_UECapabilityManagement
 * Nucmf_UECapabilityManagement Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RefToBinaryData.h
 *
 *
 */

#ifndef RefToBinaryData_H_
#define RefToBinaryData_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class RefToBinaryData {
public:
  RefToBinaryData();
  virtual ~RefToBinaryData();

  void validate();

  /////////////////////////////////////////////
  /// RefToBinaryData members

  /// <summary>
  /// This IE shall contain the value of the Content-ID header of the referenced
  /// binary body part.
  /// </summary>
  std::string getContentId() const;
  void setContentId(std::string const &value);

  friend void to_json(nlohmann::json &j, const RefToBinaryData &o);
  friend void from_json(const nlohmann::json &j, RefToBinaryData &o);

protected:
  std::string m_ContentId;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RefToBinaryData_H_ */
