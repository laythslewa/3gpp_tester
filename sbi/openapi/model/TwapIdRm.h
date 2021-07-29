/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TwapIdRm.h
 *
 * This data type is defined in the same way as the \&quot;TwapId\&quot; data
 * type, but with the OpenAPI \&quot;nullable&#x3D; true\&quot; property.
 */

#ifndef TwapIdRm_H_
#define TwapIdRm_H_

#include "NullValue.h"
#include "TwapId.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This data type is defined in the same way as the \&quot;TwapId\&quot; data
/// type, but with the OpenAPI \&quot;nullable&#x3D; true\&quot; property.
/// </summary>
class TwapIdRm {
public:
  TwapIdRm();
  virtual ~TwapIdRm();

  void validate();

  /////////////////////////////////////////////
  /// TwapIdRm members

  /// <summary>
  /// This IE shall contain the SSID of the access point to which the UE is
  /// attached, that is received over NGAP, see IEEE Std 802.11-2012.
  /// </summary>
  std::string getSsId() const;
  void setSsId(std::string const &value);
  /// <summary>
  /// When present, it shall contain the BSSID of the access point to which the
  /// UE is attached, for trusted WLAN access, see IEEE Std 802.11-2012.
  /// </summary>
  std::string getBssId() const;
  void setBssId(std::string const &value);
  bool bssIdIsSet() const;
  void unsetBssId();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getCivicAddress() const;
  void setCivicAddress(std::string const &value);
  bool civicAddressIsSet() const;
  void unsetCivicAddress();

  friend void to_json(nlohmann::json &j, const TwapIdRm &o);
  friend void from_json(const nlohmann::json &j, TwapIdRm &o);

protected:
  std::string m_SsId;

  std::string m_BssId;
  bool m_BssIdIsSet;
  std::string m_CivicAddress;
  bool m_CivicAddressIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TwapIdRm_H_ */