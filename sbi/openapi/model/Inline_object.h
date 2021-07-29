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
 * Inline_object.h
 *
 *
 */

#ifndef Inline_object_H_
#define Inline_object_H_

#include "DicEntryCreateData.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Inline_object {
public:
  Inline_object();
  virtual ~Inline_object();

  void validate();

  /////////////////////////////////////////////
  /// Inline_object members

  /// <summary>
  ///
  /// </summary>
  DicEntryCreateData getJsonData() const;
  void setJsonData(DicEntryCreateData const &value);
  bool jsonDataIsSet() const;
  void unsetJsonData();
  /// <summary>
  ///
  /// </summary>
  std::string getBinaryDataUeRadioCapability5GS() const;
  void setBinaryDataUeRadioCapability5GS(std::string const &value);
  bool binaryDataUeRadioCapability5GSIsSet() const;
  void unsetBinaryDataUeRadioCapability5GS();
  /// <summary>
  ///
  /// </summary>
  std::string getBinaryDataUeRadioCapabilityEPS() const;
  void setBinaryDataUeRadioCapabilityEPS(std::string const &value);
  bool binaryDataUeRadioCapabilityEPSIsSet() const;
  void unsetBinaryDataUeRadioCapabilityEPS();

  friend void to_json(nlohmann::json &j, const Inline_object &o);
  friend void from_json(const nlohmann::json &j, Inline_object &o);

protected:
  DicEntryCreateData m_JsonData;
  bool m_JsonDataIsSet;
  std::string m_BinaryDataUeRadioCapability5GS;
  bool m_BinaryDataUeRadioCapability5GSIsSet;
  std::string m_BinaryDataUeRadioCapabilityEPS;
  bool m_BinaryDataUeRadioCapabilityEPSIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Inline_object_H_ */
