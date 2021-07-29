/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NrppaInformation.h
 *
 * Represents a NRPPa related N2 information data part
 */

#ifndef NrppaInformation_H_
#define NrppaInformation_H_

#include "N2InfoContent.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a NRPPa related N2 information data part
/// </summary>
class NrppaInformation {
public:
  NrppaInformation();
  virtual ~NrppaInformation();

  void validate();

  /////////////////////////////////////////////
  /// NrppaInformation members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getNfId() const;
  void setNfId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  N2InfoContent getNrppaPdu() const;
  void setNrppaPdu(N2InfoContent const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getServiceInstanceId() const;
  void setServiceInstanceId(std::string const &value);
  bool serviceInstanceIdIsSet() const;
  void unsetServiceInstanceId();

  friend void to_json(nlohmann::json &j, const NrppaInformation &o);
  friend void from_json(const nlohmann::json &j, NrppaInformation &o);

protected:
  std::string m_NfId;

  N2InfoContent m_NrppaPdu;

  std::string m_ServiceInstanceId;
  bool m_ServiceInstanceIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NrppaInformation_H_ */
