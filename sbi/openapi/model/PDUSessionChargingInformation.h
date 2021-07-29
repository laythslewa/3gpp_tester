/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PDUSessionChargingInformation.h
 *
 *
 */

#ifndef PDUSessionChargingInformation_H_
#define PDUSessionChargingInformation_H_

#include "PDUSessionInformation.h"
#include "PresenceInfo.h"
#include "RANSecondaryRATUsageReport.h"
#include "UserInformation.h"
#include "UserLocation.h"
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
class PDUSessionChargingInformation {
public:
  PDUSessionChargingInformation();
  virtual ~PDUSessionChargingInformation();

  void validate();

  /////////////////////////////////////////////
  /// PDUSessionChargingInformation members

  /// <summary>
  /// Integer where the allowed values correspond to the value range of an
  /// unsigned 32-bit integer.
  /// </summary>
  int32_t getChargingId() const;
  void setChargingId(int32_t const value);
  bool chargingIdIsSet() const;
  void unsetChargingId();
  /// <summary>
  ///
  /// </summary>
  UserInformation getUserInformation() const;
  void setUserInformation(UserInformation const &value);
  bool userInformationIsSet() const;
  void unsetUserInformation();
  /// <summary>
  ///
  /// </summary>
  UserLocation getUserLocationinfo() const;
  void setUserLocationinfo(UserLocation const &value);
  bool userLocationinfoIsSet() const;
  void unsetUserLocationinfo();
  /// <summary>
  ///
  /// </summary>
  UserLocation getMAPDUNon3GPPUserLocationInfo() const;
  void setMAPDUNon3GPPUserLocationInfo(UserLocation const &value);
  bool mAPDUNon3GPPUserLocationInfoIsSet() const;
  void unsetMAPDUNon3GPPUserLocationInfo();
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getUserLocationTime() const;
  void setUserLocationTime(std::string const &value);
  bool userLocationTimeIsSet() const;
  void unsetUserLocationTime();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, PresenceInfo> &getPresenceReportingAreaInformation();
  void setPresenceReportingAreaInformation(
      std::map<std::string, PresenceInfo> const &value);
  bool presenceReportingAreaInformationIsSet() const;
  void unsetPresenceReportingAreaInformation();
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
  std::string getUetimeZone() const;
  void setUetimeZone(std::string const &value);
  bool uetimeZoneIsSet() const;
  void unsetUetimeZone();
  /// <summary>
  ///
  /// </summary>
  PDUSessionInformation getPduSessionInformation() const;
  void setPduSessionInformation(PDUSessionInformation const &value);
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getUnitCountInactivityTimer() const;
  void setUnitCountInactivityTimer(int32_t const value);
  bool unitCountInactivityTimerIsSet() const;
  void unsetUnitCountInactivityTimer();
  /// <summary>
  ///
  /// </summary>
  RANSecondaryRATUsageReport getRANSecondaryRATUsageReport() const;
  void setRANSecondaryRATUsageReport(RANSecondaryRATUsageReport const &value);
  bool rANSecondaryRATUsageReportIsSet() const;
  void unsetRANSecondaryRATUsageReport();

  friend void to_json(nlohmann::json &j,
                      const PDUSessionChargingInformation &o);
  friend void from_json(const nlohmann::json &j,
                        PDUSessionChargingInformation &o);

protected:
  int32_t m_ChargingId;
  bool m_ChargingIdIsSet;
  UserInformation m_UserInformation;
  bool m_UserInformationIsSet;
  UserLocation m_UserLocationinfo;
  bool m_UserLocationinfoIsSet;
  UserLocation m_MAPDUNon3GPPUserLocationInfo;
  bool m_MAPDUNon3GPPUserLocationInfoIsSet;
  std::string m_UserLocationTime;
  bool m_UserLocationTimeIsSet;
  std::map<std::string, PresenceInfo> m_PresenceReportingAreaInformation;
  bool m_PresenceReportingAreaInformationIsSet;
  std::string m_UetimeZone;
  bool m_UetimeZoneIsSet;
  PDUSessionInformation m_PduSessionInformation;

  int32_t m_UnitCountInactivityTimer;
  bool m_UnitCountInactivityTimerIsSet;
  RANSecondaryRATUsageReport m_RANSecondaryRATUsageReport;
  bool m_RANSecondaryRATUsageReportIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PDUSessionChargingInformation_H_ */