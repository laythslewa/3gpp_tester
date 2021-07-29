/**
 * 3gpp-racs-parameter-provisioning
 * API for provisioning UE radio capability parameters. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RacsProvisioningData.h
 *
 * Represents a UE&#39;s radio capability data.
 */

#ifndef RacsProvisioningData_H_
#define RacsProvisioningData_H_

#include "RacsConfiguration.h"
#include "RacsFailureReport.h"
#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a UE&#39;s radio capability data.
/// </summary>
class RacsProvisioningData {
public:
  RacsProvisioningData();
  virtual ~RacsProvisioningData();

  void validate();

  /////////////////////////////////////////////
  /// RacsProvisioningData members

  /// <summary>
  /// string formatted according to IETF RFC 3986 identifying a referenced
  /// resource.
  /// </summary>
  std::string getSelf() const;
  void setSelf(std::string const &value);
  bool selfIsSet() const;
  void unsetSelf();
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
  /// <summary>
  /// Identifies the configuration related to manufacturer specific UE radio
  /// capability. Each element uniquely identifies an RACS configuration for an
  /// RACS ID and is identified in the map via the RACS ID as key. The response
  /// shall include successfully provisioned RACS data.
  /// </summary>
  std::map<std::string, RacsConfiguration> &getRacsConfigs();
  void setRacsConfigs(std::map<std::string, RacsConfiguration> const &value);
  /// <summary>
  /// Supplied by the SCEF. Contains the RACS IDs for which the RACS data are
  /// not provisioned successfully. Any string value can be used as a key of the
  /// map.
  /// </summary>
  std::map<std::string, RacsFailureReport> &getRacsReports();
  void setRacsReports(std::map<std::string, RacsFailureReport> const &value);
  bool racsReportsIsSet() const;
  void unsetRacsReports();

  friend void to_json(nlohmann::json &j, const RacsProvisioningData &o);
  friend void from_json(const nlohmann::json &j, RacsProvisioningData &o);

protected:
  std::string m_Self;
  bool m_SelfIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::map<std::string, RacsConfiguration> m_RacsConfigs;

  std::map<std::string, RacsFailureReport> m_RacsReports;
  bool m_RacsReportsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RacsProvisioningData_H_ */