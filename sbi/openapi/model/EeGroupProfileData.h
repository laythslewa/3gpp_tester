/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EeGroupProfileData.h
 *
 *
 */

#ifndef EeGroupProfileData_H_
#define EeGroupProfileData_H_

#include "EventType.h"
#include "MtcProvider.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class EeGroupProfileData {
public:
  EeGroupProfileData();
  virtual ~EeGroupProfileData();

  void validate();

  /////////////////////////////////////////////
  /// EeGroupProfileData members

  /// <summary>
  ///
  /// </summary>
  std::vector<EventType> &getRestrictedEventTypes();
  void setRestrictedEventTypes(std::vector<EventType> const &value);
  bool restrictedEventTypesIsSet() const;
  void unsetRestrictedEventTypes();
  /// <summary>
  /// A map (list of key-value pairs where EventType serves as key) of MTC
  /// provider lists. In addition to defined EventTypes, the key value
  /// \&quot;ALL\&quot; may be used to identify a map entry which contains a
  /// list of MtcProviders that are allowed monitoring all Event Types.
  /// </summary>
  std::map<std::string, std::vector<MtcProvider>> &getAllowedMtcProvider();
  void setAllowedMtcProvider(
      std::map<std::string, std::vector<MtcProvider>> const &value);
  bool allowedMtcProviderIsSet() const;
  void unsetAllowedMtcProvider();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json &j, const EeGroupProfileData &o);
  friend void from_json(const nlohmann::json &j, EeGroupProfileData &o);

protected:
  std::vector<EventType> m_RestrictedEventTypes;
  bool m_RestrictedEventTypesIsSet;
  std::map<std::string, std::vector<MtcProvider>> m_AllowedMtcProvider;
  bool m_AllowedMtcProviderIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EeGroupProfileData_H_ */
