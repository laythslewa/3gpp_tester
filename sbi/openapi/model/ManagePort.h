/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ManagePort.h
 *
 * Represents the configuration of a RDS dynamic port management.
 */

#ifndef ManagePort_H_
#define ManagePort_H_

#include "ManageEntity.h"
#include "SerializationFormat.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the configuration of a RDS dynamic port management.
/// </summary>
class ManagePort {
public:
  ManagePort();
  virtual ~ManagePort();

  void validate();

  /////////////////////////////////////////////
  /// ManagePort members

  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const &value);
  bool selfIsSet() const;
  void unsetSelf();
  /// <summary>
  /// Identifies the application.
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  ManageEntity getManageEntity() const;
  void setManageEntity(ManageEntity const &value);
  bool manageEntityIsSet() const;
  void unsetManageEntity();
  /// <summary>
  /// Indicate whether to skip UE inquiry.
  /// </summary>
  bool isSkipUeInquiry() const;
  void setSkipUeInquiry(bool const value);
  bool skipUeInquiryIsSet() const;
  void unsetSkipUeInquiry();
  /// <summary>
  /// Indicates the serialization format(s) that are supported by the SCS/AS on
  /// the associated RDS port.
  /// </summary>
  std::vector<SerializationFormat> &getSupportedFormats();
  void setSupportedFormats(std::vector<SerializationFormat> const &value);
  bool supportedFormatsIsSet() const;
  void unsetSupportedFormats();
  /// <summary>
  ///
  /// </summary>
  SerializationFormat getConfiguredFormat() const;
  void setConfiguredFormat(SerializationFormat const &value);
  bool configuredFormatIsSet() const;
  void unsetConfiguredFormat();

  friend void to_json(nlohmann::json &j, const ManagePort &o);
  friend void from_json(const nlohmann::json &j, ManagePort &o);

protected:
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_AppId;

  ManageEntity m_ManageEntity;
  bool m_ManageEntityIsSet;
  bool m_SkipUeInquiry;
  bool m_SkipUeInquiryIsSet;
  std::vector<SerializationFormat> m_SupportedFormats;
  bool m_SupportedFormatsIsSet;
  SerializationFormat m_ConfiguredFormat;
  bool m_ConfiguredFormatIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ManagePort_H_ */