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
 * NFServiceVersion.h
 *
 * Contains the version details of an NF service
 */

#ifndef NFServiceVersion_H_
#define NFServiceVersion_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the version details of an NF service
/// </summary>
class NFServiceVersion {
public:
  NFServiceVersion();
  virtual ~NFServiceVersion();

  void validate();

  /////////////////////////////////////////////
  /// NFServiceVersion members

  /// <summary>
  ///
  /// </summary>
  std::string getApiVersionInUri() const;
  void setApiVersionInUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getApiFullVersion() const;
  void setApiFullVersion(std::string const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const &value);
  bool expiryIsSet() const;
  void unsetExpiry();

  friend void to_json(nlohmann::json &j, const NFServiceVersion &o);
  friend void from_json(const nlohmann::json &j, NFServiceVersion &o);

protected:
  std::string m_ApiVersionInUri;

  std::string m_ApiFullVersion;

  std::string m_Expiry;
  bool m_ExpiryIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NFServiceVersion_H_ */
