/**
 * Nudm_MT
 * UDM MT Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI,
 * TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocationInfoResult.h
 *
 * Represents the requested location information.
 */

#ifndef LocationInfoResult_H_
#define LocationInfoResult_H_

#include "Ecgi.h"
#include "GeographicArea.h"
#include "Ncgi.h"
#include "PlmnId.h"
#include "RatType.h"
#include "Tai.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the requested location information.
/// </summary>
class LocationInfoResult {
public:
  LocationInfoResult();
  virtual ~LocationInfoResult();

  void validate();

  /////////////////////////////////////////////
  /// LocationInfoResult members

  /// <summary>
  ///
  /// </summary>
  PlmnId getVPlmnId() const;
  void setVPlmnId(PlmnId const &value);
  bool vPlmnIdIsSet() const;
  void unsetVPlmnId();
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getAmfInstanceId() const;
  void setAmfInstanceId(std::string const &value);
  bool amfInstanceIdIsSet() const;
  void unsetAmfInstanceId();
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getSmsfInstanceId() const;
  void setSmsfInstanceId(std::string const &value);
  bool smsfInstanceIdIsSet() const;
  void unsetSmsfInstanceId();
  /// <summary>
  ///
  /// </summary>
  Ncgi getNcgi() const;
  void setNcgi(Ncgi const &value);
  bool ncgiIsSet() const;
  void unsetNcgi();
  /// <summary>
  ///
  /// </summary>
  Ecgi getEcgi() const;
  void setEcgi(Ecgi const &value);
  bool ecgiIsSet() const;
  void unsetEcgi();
  /// <summary>
  ///
  /// </summary>
  Tai getTai() const;
  void setTai(Tai const &value);
  bool taiIsSet() const;
  void unsetTai();
  /// <summary>
  ///
  /// </summary>
  bool isCurrentLoc() const;
  void setCurrentLoc(bool const value);
  bool currentLocIsSet() const;
  void unsetCurrentLoc();
  /// <summary>
  ///
  /// </summary>
  GeographicArea getGeoInfo() const;
  void setGeoInfo(GeographicArea const &value);
  bool geoInfoIsSet() const;
  void unsetGeoInfo();
  /// <summary>
  /// Indicates value of the age of the location estimate.
  /// </summary>
  int32_t getLocatoinAge() const;
  void setLocatoinAge(int32_t const value);
  bool locatoinAgeIsSet() const;
  void unsetLocatoinAge();
  /// <summary>
  ///
  /// </summary>
  RatType getRatType() const;
  void setRatType(RatType const &value);
  bool ratTypeIsSet() const;
  void unsetRatType();
  /// <summary>
  /// String with format \&quot;&lt;time-numoffset&gt;\&quot; optionally
  /// appended by \&quot;&lt;daylightSavingTime&gt;\&quot;, where -
  /// &lt;time-numoffset&gt; shall represent the time zone adjusted for daylight
  /// saving time and be encoded as time-numoffset as defined in clause 5.6 of
  /// IETF RFC 3339; - &lt;daylightSavingTime&gt; shall represent the adjustment
  /// that has been made and shall be encoded as \&quot;+1\&quot; or
  /// \&quot;+2\&quot; for a +1 or +2 hours adjustment. The example is for 8
  /// hours behind UTC, +1 hour adjustment for Daylight Saving Time.
  /// </summary>
  std::string getTimezone() const;
  void setTimezone(std::string const &value);
  bool timezoneIsSet() const;
  void unsetTimezone();
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

  friend void to_json(nlohmann::json &j, const LocationInfoResult &o);
  friend void from_json(const nlohmann::json &j, LocationInfoResult &o);

protected:
  PlmnId m_VPlmnId;
  bool m_VPlmnIdIsSet;
  std::string m_AmfInstanceId;
  bool m_AmfInstanceIdIsSet;
  std::string m_SmsfInstanceId;
  bool m_SmsfInstanceIdIsSet;
  Ncgi m_Ncgi;
  bool m_NcgiIsSet;
  Ecgi m_Ecgi;
  bool m_EcgiIsSet;
  Tai m_Tai;
  bool m_TaiIsSet;
  bool m_CurrentLoc;
  bool m_CurrentLocIsSet;
  GeographicArea m_GeoInfo;
  bool m_GeoInfoIsSet;
  int32_t m_LocatoinAge;
  bool m_LocatoinAgeIsSet;
  RatType m_RatType;
  bool m_RatTypeIsSet;
  std::string m_Timezone;
  bool m_TimezoneIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* LocationInfoResult_H_ */