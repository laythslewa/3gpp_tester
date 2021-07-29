/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * NfInstanceIdCond.h
 *
 * Subscription to a given NF Instance Id
 */

#ifndef NfInstanceIdCond_H_
#define NfInstanceIdCond_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Subscription to a given NF Instance Id
/// </summary>
class NfInstanceIdCond {
public:
  NfInstanceIdCond();
  virtual ~NfInstanceIdCond();

  void validate();

  /////////////////////////////////////////////
  /// NfInstanceIdCond members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getNfInstanceId() const;
  void setNfInstanceId(std::string const &value);

  friend void to_json(nlohmann::json &j, const NfInstanceIdCond &o);
  friend void from_json(const nlohmann::json &j, NfInstanceIdCond &o);

protected:
  std::string m_NfInstanceId;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NfInstanceIdCond_H_ */