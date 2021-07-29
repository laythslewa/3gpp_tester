/**
 * VAE_DynamicGroup
 * VAE_Dynamic_Group Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DynamicGroupNotification.h
 *
 * Represents a notification on the dynamic group information (i.e. group member
 * joins or leaves).
 */

#ifndef DynamicGroupNotification_H_
#define DynamicGroupNotification_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a notification on the dynamic group information (i.e. group
/// member joins or leaves).
/// </summary>
class DynamicGroupNotification {
public:
  DynamicGroupNotification();
  virtual ~DynamicGroupNotification();

  void validate();

  /////////////////////////////////////////////
  /// DynamicGroupNotification members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getResourceUri() const;
  void setResourceUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getJoinedUeIds();
  void setJoinedUeIds(std::vector<std::string> const &value);
  bool joinedUeIdsIsSet() const;
  void unsetJoinedUeIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getLeftUeIds();
  void setLeftUeIds(std::vector<std::string> const &value);
  bool leftUeIdsIsSet() const;
  void unsetLeftUeIds();

  friend void to_json(nlohmann::json &j, const DynamicGroupNotification &o);
  friend void from_json(const nlohmann::json &j, DynamicGroupNotification &o);

protected:
  std::string m_ResourceUri;

  std::vector<std::string> m_JoinedUeIds;
  bool m_JoinedUeIdsIsSet;
  std::vector<std::string> m_LeftUeIds;
  bool m_LeftUeIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DynamicGroupNotification_H_ */