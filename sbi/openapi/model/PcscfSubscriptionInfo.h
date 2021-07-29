/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PcscfSubscriptionInfo.h
 *
 *
 */

#ifndef PcscfSubscriptionInfo_H_
#define PcscfSubscriptionInfo_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PcscfSubscriptionInfo {
public:
  PcscfSubscriptionInfo();
  virtual ~PcscfSubscriptionInfo();

  void validate();

  /////////////////////////////////////////////
  /// PcscfSubscriptionInfo members

  /// <summary>
  ///
  /// </summary>
  std::string getCallIdSipHeader() const;
  void setCallIdSipHeader(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getFromSipHeader() const;
  void setFromSipHeader(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getToSipHeader() const;
  void setToSipHeader(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getContact() const;
  void setContact(std::string const &value);

  friend void to_json(nlohmann::json &j, const PcscfSubscriptionInfo &o);
  friend void from_json(const nlohmann::json &j, PcscfSubscriptionInfo &o);

protected:
  std::string m_CallIdSipHeader;

  std::string m_FromSipHeader;

  std::string m_ToSipHeader;

  std::string m_Contact;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PcscfSubscriptionInfo_H_ */