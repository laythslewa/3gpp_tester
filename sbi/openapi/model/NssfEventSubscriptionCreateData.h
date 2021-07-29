/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
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
 * NssfEventSubscriptionCreateData.h
 *
 * This contains the information for event subscription
 */

#ifndef NssfEventSubscriptionCreateData_H_
#define NssfEventSubscriptionCreateData_H_

#include "NssfEventType.h"
#include "Tai.h"
#include "TaiRange.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This contains the information for event subscription
/// </summary>
class NssfEventSubscriptionCreateData {
public:
  NssfEventSubscriptionCreateData();
  virtual ~NssfEventSubscriptionCreateData();

  void validate();

  /////////////////////////////////////////////
  /// NssfEventSubscriptionCreateData members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getNfNssaiAvailabilityUri() const;
  void setNfNssaiAvailabilityUri(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<Tai> &getTaiList();
  void setTaiList(std::vector<Tai> const &value);
  /// <summary>
  ///
  /// </summary>
  NssfEventType getEvent() const;
  void setEvent(NssfEventType const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const &value);
  bool expiryIsSet() const;
  void unsetExpiry();
  /// <summary>
  ///
  /// </summary>
  std::string getAmfSetId() const;
  void setAmfSetId(std::string const &value);
  bool amfSetIdIsSet() const;
  void unsetAmfSetId();
  /// <summary>
  ///
  /// </summary>
  std::vector<TaiRange> &getTaiRangeList();
  void setTaiRangeList(std::vector<TaiRange> const &value);
  bool taiRangeListIsSet() const;
  void unsetTaiRangeList();
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

  friend void to_json(nlohmann::json &j,
                      const NssfEventSubscriptionCreateData &o);
  friend void from_json(const nlohmann::json &j,
                        NssfEventSubscriptionCreateData &o);

protected:
  std::string m_NfNssaiAvailabilityUri;

  std::vector<Tai> m_TaiList;

  NssfEventType m_Event;

  std::string m_Expiry;
  bool m_ExpiryIsSet;
  std::string m_AmfSetId;
  bool m_AmfSetIdIsSet;
  std::vector<TaiRange> m_TaiRangeList;
  bool m_TaiRangeListIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NssfEventSubscriptionCreateData_H_ */
