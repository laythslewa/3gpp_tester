/**
 * 3gpp-ecr-control
 * API for enhanced converage restriction control. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ECRControl.h
 *
 * Represents the parameters to request Enhanced Coverage Restriction control.
 */

#ifndef ECRControl_H_
#define ECRControl_H_

#include "PlmnEcRestrictionDataWb.h"
#include "PlmnId.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the parameters to request Enhanced Coverage Restriction control.
/// </summary>
class ECRControl {
public:
  ECRControl();
  virtual ~ECRControl();

  void validate();

  /////////////////////////////////////////////
  /// ECRControl members

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
  /// <summary>
  /// Identifies the MTC Service Provider and/or MTC Application.
  /// </summary>
  std::string getMtcProviderId() const;
  void setMtcProviderId(std::string const &value);
  bool mtcProviderIdIsSet() const;
  void unsetMtcProviderId();
  /// <summary>
  /// Identifier of the SCS/AS.
  /// </summary>
  std::string getScsAsId() const;
  void setScsAsId(std::string const &value);
  bool scsAsIdIsSet() const;
  void unsetScsAsId();
  /// <summary>
  /// string containing a local identifier followed by \&quot;@\&quot; and a
  /// domain identifier. Both the local identifier and the domain identifier
  /// shall be encoded as strings that do not contain any \&quot;@\&quot;
  /// characters. See Clause 4.6.2 of 3GPP TS 23.682 for more information.
  /// </summary>
  std::string getExternalId() const;
  void setExternalId(std::string const &value);
  bool externalIdIsSet() const;
  void unsetExternalId();
  /// <summary>
  /// string formatted according to subclause 3.3 of 3GPP TS 23.003 that
  /// describes an MSISDN.
  /// </summary>
  std::string getMsisdn() const;
  void setMsisdn(std::string const &value);
  bool msisdnIsSet() const;
  void unsetMsisdn();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnEcRestrictionDataWb> &getEcrDataWbs();
  void setEcrDataWbs(std::vector<PlmnEcRestrictionDataWb> const &value);
  bool ecrDataWbsIsSet() const;
  void unsetEcrDataWbs();
  /// <summary>
  /// Indicates a complete list (and possibly empty) of serving PLMNs where
  /// Enhanced Coverage shall be restricted. This attribute shall not be present
  /// for the query custom operation.
  /// </summary>
  std::vector<PlmnId> &getRestrictedPlmnIds();
  void setRestrictedPlmnIds(std::vector<PlmnId> const &value);
  bool restrictedPlmnIdsIsSet() const;
  void unsetRestrictedPlmnIds();
  /// <summary>
  /// Indicates a complete list (and possibly empty) of serving PLMNs where
  /// Enhanced Coverage shall be allowed. This attribute shall not be present
  /// for the query custom operation.
  /// </summary>
  std::vector<PlmnId> &getAllowedPlmnIds();
  void setAllowedPlmnIds(std::vector<PlmnId> const &value);
  bool allowedPlmnIdsIsSet() const;
  void unsetAllowedPlmnIds();

  friend void to_json(nlohmann::json &j, const ECRControl &o);
  friend void from_json(const nlohmann::json &j, ECRControl &o);

protected:
  std::string m_SupportedFeatures;

  std::string m_MtcProviderId;
  bool m_MtcProviderIdIsSet;
  std::string m_ScsAsId;
  bool m_ScsAsIdIsSet;
  std::string m_ExternalId;
  bool m_ExternalIdIsSet;
  std::string m_Msisdn;
  bool m_MsisdnIsSet;
  std::vector<PlmnEcRestrictionDataWb> m_EcrDataWbs;
  bool m_EcrDataWbsIsSet;
  std::vector<PlmnId> m_RestrictedPlmnIds;
  bool m_RestrictedPlmnIdsIsSet;
  std::vector<PlmnId> m_AllowedPlmnIds;
  bool m_AllowedPlmnIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ECRControl_H_ */