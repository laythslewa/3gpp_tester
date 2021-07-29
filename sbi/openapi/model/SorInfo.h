/**
 * Nausf_SoRProtection Service
 * AUSF SoR Protection Service. © 2021, 3GPP Organizational Partners (ARIB,
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
 * SorInfo.h
 *
 * Contains the Steering Information.
 */

#ifndef SorInfo_H_
#define SorInfo_H_

#include "SteeringContainer.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the Steering Information.
/// </summary>
class SorInfo {
public:
  SorInfo();
  virtual ~SorInfo();

  void validate();

  /////////////////////////////////////////////
  /// SorInfo members

  /// <summary>
  ///
  /// </summary>
  SteeringContainer getSteeringContainer() const;
  void setSteeringContainer(SteeringContainer const &value);
  bool steeringContainerIsSet() const;
  void unsetSteeringContainer();
  /// <summary>
  /// Contains indication whether the acknowledgement from UE is needed.
  /// </summary>
  bool isAckInd() const;
  void setAckInd(bool const value);
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getSorHeader() const;
  void setSorHeader(std::string const &value);
  bool sorHeaderIsSet() const;
  void unsetSorHeader();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getSorTransparentInfo() const;
  void setSorTransparentInfo(std::string const &value);
  bool sorTransparentInfoIsSet() const;
  void unsetSorTransparentInfo();
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

  friend void to_json(nlohmann::json &j, const SorInfo &o);
  friend void from_json(const nlohmann::json &j, SorInfo &o);

protected:
  SteeringContainer m_SteeringContainer;
  bool m_SteeringContainerIsSet;
  bool m_AckInd;

  std::string m_SorHeader;
  bool m_SorHeaderIsSet;
  std::string m_SorTransparentInfo;
  bool m_SorTransparentInfoIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SorInfo_H_ */