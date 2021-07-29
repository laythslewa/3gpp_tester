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
 * SmsManagementSubscriptionData.h
 *
 *
 */

#ifndef SmsManagementSubscriptionData_H_
#define SmsManagementSubscriptionData_H_

#include "TraceData.h"
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
class SmsManagementSubscriptionData {
public:
  SmsManagementSubscriptionData();
  virtual ~SmsManagementSubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// SmsManagementSubscriptionData members

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
  ///
  /// </summary>
  bool isMtSmsSubscribed() const;
  void setMtSmsSubscribed(bool const value);
  bool mtSmsSubscribedIsSet() const;
  void unsetMtSmsSubscribed();
  /// <summary>
  ///
  /// </summary>
  bool isMtSmsBarringAll() const;
  void setMtSmsBarringAll(bool const value);
  bool mtSmsBarringAllIsSet() const;
  void unsetMtSmsBarringAll();
  /// <summary>
  ///
  /// </summary>
  bool isMtSmsBarringRoaming() const;
  void setMtSmsBarringRoaming(bool const value);
  bool mtSmsBarringRoamingIsSet() const;
  void unsetMtSmsBarringRoaming();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsSubscribed() const;
  void setMoSmsSubscribed(bool const value);
  bool moSmsSubscribedIsSet() const;
  void unsetMoSmsSubscribed();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsBarringAll() const;
  void setMoSmsBarringAll(bool const value);
  bool moSmsBarringAllIsSet() const;
  void unsetMoSmsBarringAll();
  /// <summary>
  ///
  /// </summary>
  bool isMoSmsBarringRoaming() const;
  void setMoSmsBarringRoaming(bool const value);
  bool moSmsBarringRoamingIsSet() const;
  void unsetMoSmsBarringRoaming();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getSharedSmsMngDataIds();
  void setSharedSmsMngDataIds(std::vector<std::string> const &value);
  bool sharedSmsMngDataIdsIsSet() const;
  void unsetSharedSmsMngDataIds();
  /// <summary>
  ///
  /// </summary>
  TraceData getTraceData() const;
  void setTraceData(TraceData const &value);
  bool traceDataIsSet() const;
  void unsetTraceData();

  friend void to_json(nlohmann::json &j,
                      const SmsManagementSubscriptionData &o);
  friend void from_json(const nlohmann::json &j,
                        SmsManagementSubscriptionData &o);

protected:
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  bool m_MtSmsSubscribed;
  bool m_MtSmsSubscribedIsSet;
  bool m_MtSmsBarringAll;
  bool m_MtSmsBarringAllIsSet;
  bool m_MtSmsBarringRoaming;
  bool m_MtSmsBarringRoamingIsSet;
  bool m_MoSmsSubscribed;
  bool m_MoSmsSubscribedIsSet;
  bool m_MoSmsBarringAll;
  bool m_MoSmsBarringAllIsSet;
  bool m_MoSmsBarringRoaming;
  bool m_MoSmsBarringRoamingIsSet;
  std::vector<std::string> m_SharedSmsMngDataIds;
  bool m_SharedSmsMngDataIdsIsSet;
  TraceData m_TraceData;
  bool m_TraceDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmsManagementSubscriptionData_H_ */
