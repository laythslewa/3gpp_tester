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
 * RegistrationLocationInfo.h
 *
 *
 */

#ifndef RegistrationLocationInfo_H_
#define RegistrationLocationInfo_H_

#include "AccessType.h"
#include "PlmnId.h"
#include "VgmlcAddress.h"
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
class RegistrationLocationInfo {
public:
  RegistrationLocationInfo();
  virtual ~RegistrationLocationInfo();

  void validate();

  /////////////////////////////////////////////
  /// RegistrationLocationInfo members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getAmfInstanceId() const;
  void setAmfInstanceId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  PlmnId getPlmnId() const;
  void setPlmnId(PlmnId const &value);
  bool plmnIdIsSet() const;
  void unsetPlmnId();
  /// <summary>
  ///
  /// </summary>
  VgmlcAddress getVgmlcAddress() const;
  void setVgmlcAddress(VgmlcAddress const &value);
  bool vgmlcAddressIsSet() const;
  void unsetVgmlcAddress();
  /// <summary>
  ///
  /// </summary>
  std::vector<AccessType> &getAccessTypeList();
  void setAccessTypeList(std::vector<AccessType> const &value);

  friend void to_json(nlohmann::json &j, const RegistrationLocationInfo &o);
  friend void from_json(const nlohmann::json &j, RegistrationLocationInfo &o);

protected:
  std::string m_AmfInstanceId;

  PlmnId m_PlmnId;
  bool m_PlmnIdIsSet;
  VgmlcAddress m_VgmlcAddress;
  bool m_VgmlcAddressIsSet;
  std::vector<AccessType> m_AccessTypeList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RegistrationLocationInfo_H_ */