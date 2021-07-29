/**
 * CAPIF_Publish_Service_API
 * API for publishing service APIs. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ShareableInformation.h
 *
 * Indicates whether the service API and/or the service API category can be
 * shared to the list of CAPIF provider domains.
 */

#ifndef ShareableInformation_H_
#define ShareableInformation_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates whether the service API and/or the service API category can be
/// shared to the list of CAPIF provider domains.
/// </summary>
class ShareableInformation {
public:
  ShareableInformation();
  virtual ~ShareableInformation();

  void validate();

  /////////////////////////////////////////////
  /// ShareableInformation members

  /// <summary>
  /// Set to \&quot;true\&quot; indicates that the service API and/or the
  /// service API category can be shared to the list of CAPIF provider domain
  /// information. Otherwise set to \&quot;false\&quot;.
  /// </summary>
  bool isIsShareable() const;
  void setIsShareable(bool const value);
  /// <summary>
  /// List of CAPIF provider domains to which the service API information to be
  /// shared.
  /// </summary>
  std::vector<std::string> &getCapifProvDoms();
  void setCapifProvDoms(std::vector<std::string> const &value);
  bool capifProvDomsIsSet() const;
  void unsetCapifProvDoms();

  friend void to_json(nlohmann::json &j, const ShareableInformation &o);
  friend void from_json(const nlohmann::json &j, ShareableInformation &o);

protected:
  bool m_IsShareable;

  std::vector<std::string> m_CapifProvDoms;
  bool m_CapifProvDomsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ShareableInformation_H_ */
