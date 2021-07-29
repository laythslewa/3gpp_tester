/**
 * Namf_Location
 * AMF Location Service © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ProvidePosInfo.h
 *
 * Data within Provide Positioning Information Response
 */

#ifndef ProvidePosInfo_H_
#define ProvidePosInfo_H_

#include "AccuracyFulfilmentIndicator.h"
#include "CivicAddress.h"
#include "Ecgi.h"
#include "GeographicArea.h"
#include "GnssPositioningMethodAndUsage.h"
#include "LocalArea.h"
#include "LocationPrivacyVerResult.h"
#include "Ncgi.h"
#include "PositioningMethodAndUsage.h"
#include "VelocityEstimate.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data within Provide Positioning Information Response
/// </summary>
class ProvidePosInfo {
public:
  ProvidePosInfo();
  virtual ~ProvidePosInfo();

  void validate();

  /////////////////////////////////////////////
  /// ProvidePosInfo members

  /// <summary>
  ///
  /// </summary>
  GeographicArea getLocationEstimate() const;
  void setLocationEstimate(GeographicArea const &value);
  bool locationEstimateIsSet() const;
  void unsetLocationEstimate();
  /// <summary>
  ///
  /// </summary>
  LocalArea getLocalLocationEstimate() const;
  void setLocalLocationEstimate(LocalArea const &value);
  bool localLocationEstimateIsSet() const;
  void unsetLocalLocationEstimate();
  /// <summary>
  ///
  /// </summary>
  AccuracyFulfilmentIndicator getAccuracyFulfilmentIndicator() const;
  void setAccuracyFulfilmentIndicator(AccuracyFulfilmentIndicator const &value);
  bool accuracyFulfilmentIndicatorIsSet() const;
  void unsetAccuracyFulfilmentIndicator();
  /// <summary>
  /// Indicates value of the age of the location estimate.
  /// </summary>
  int32_t getAgeOfLocationEstimate() const;
  void setAgeOfLocationEstimate(int32_t const value);
  bool ageOfLocationEstimateIsSet() const;
  void unsetAgeOfLocationEstimate();
  /// <summary>
  ///
  /// </summary>
  VelocityEstimate getVelocityEstimate() const;
  void setVelocityEstimate(VelocityEstimate const &value);
  bool velocityEstimateIsSet() const;
  void unsetVelocityEstimate();
  /// <summary>
  ///
  /// </summary>
  std::vector<PositioningMethodAndUsage> &getPositioningDataList();
  void
  setPositioningDataList(std::vector<PositioningMethodAndUsage> const &value);
  bool positioningDataListIsSet() const;
  void unsetPositioningDataList();
  /// <summary>
  ///
  /// </summary>
  std::vector<GnssPositioningMethodAndUsage> &getGnssPositioningDataList();
  void setGnssPositioningDataList(
      std::vector<GnssPositioningMethodAndUsage> const &value);
  bool gnssPositioningDataListIsSet() const;
  void unsetGnssPositioningDataList();
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
  Ncgi getNcgi() const;
  void setNcgi(Ncgi const &value);
  bool ncgiIsSet() const;
  void unsetNcgi();
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getTargetServingNode() const;
  void setTargetServingNode(std::string const &value);
  bool targetServingNodeIsSet() const;
  void unsetTargetServingNode();
  /// <summary>
  /// string containing an FQDN or realm as defined in RFC 6733.
  /// </summary>
  std::string getTargetMmeName() const;
  void setTargetMmeName(std::string const &value);
  bool targetMmeNameIsSet() const;
  void unsetTargetMmeName();
  /// <summary>
  /// string containing an FQDN or realm as defined in RFC 6733.
  /// </summary>
  std::string getTargetMmeRealm() const;
  void setTargetMmeRealm(std::string const &value);
  bool targetMmeRealmIsSet() const;
  void unsetTargetMmeRealm();
  /// <summary>
  ///
  /// </summary>
  bool isUtranSrvccInd() const;
  void setUtranSrvccInd(bool const value);
  bool utranSrvccIndIsSet() const;
  void unsetUtranSrvccInd();
  /// <summary>
  ///
  /// </summary>
  CivicAddress getCivicAddress() const;
  void setCivicAddress(CivicAddress const &value);
  bool civicAddressIsSet() const;
  void unsetCivicAddress();
  /// <summary>
  /// Specifies the measured uncompensated atmospheric pressure.
  /// </summary>
  int32_t getBarometricPressure() const;
  void setBarometricPressure(int32_t const value);
  bool barometricPressureIsSet() const;
  void unsetBarometricPressure();
  /// <summary>
  /// Indicates value of altitude.
  /// </summary>
  double getAltitude() const;
  void setAltitude(double const value);
  bool altitudeIsSet() const;
  void unsetAltitude();
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
  /// LMF identification.
  /// </summary>
  std::string getServingLMFIdentification() const;
  void setServingLMFIdentification(std::string const &value);
  bool servingLMFIdentificationIsSet() const;
  void unsetServingLMFIdentification();
  /// <summary>
  ///
  /// </summary>
  LocationPrivacyVerResult getLocationPrivacyVerResult() const;
  void setLocationPrivacyVerResult(LocationPrivacyVerResult const &value);
  bool locationPrivacyVerResultIsSet() const;
  void unsetLocationPrivacyVerResult();

  friend void to_json(nlohmann::json &j, const ProvidePosInfo &o);
  friend void from_json(const nlohmann::json &j, ProvidePosInfo &o);

protected:
  GeographicArea m_LocationEstimate;
  bool m_LocationEstimateIsSet;
  LocalArea m_LocalLocationEstimate;
  bool m_LocalLocationEstimateIsSet;
  AccuracyFulfilmentIndicator m_AccuracyFulfilmentIndicator;
  bool m_AccuracyFulfilmentIndicatorIsSet;
  int32_t m_AgeOfLocationEstimate;
  bool m_AgeOfLocationEstimateIsSet;
  VelocityEstimate m_VelocityEstimate;
  bool m_VelocityEstimateIsSet;
  std::vector<PositioningMethodAndUsage> m_PositioningDataList;
  bool m_PositioningDataListIsSet;
  std::vector<GnssPositioningMethodAndUsage> m_GnssPositioningDataList;
  bool m_GnssPositioningDataListIsSet;
  Ecgi m_Ecgi;
  bool m_EcgiIsSet;
  Ncgi m_Ncgi;
  bool m_NcgiIsSet;
  std::string m_TargetServingNode;
  bool m_TargetServingNodeIsSet;
  std::string m_TargetMmeName;
  bool m_TargetMmeNameIsSet;
  std::string m_TargetMmeRealm;
  bool m_TargetMmeRealmIsSet;
  bool m_UtranSrvccInd;
  bool m_UtranSrvccIndIsSet;
  CivicAddress m_CivicAddress;
  bool m_CivicAddressIsSet;
  int32_t m_BarometricPressure;
  bool m_BarometricPressureIsSet;
  double m_Altitude;
  bool m_AltitudeIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::string m_ServingLMFIdentification;
  bool m_ServingLMFIdentificationIsSet;
  LocationPrivacyVerResult m_LocationPrivacyVerResult;
  bool m_LocationPrivacyVerResultIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ProvidePosInfo_H_ */