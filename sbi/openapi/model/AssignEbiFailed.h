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
 * AssignEbiFailed.h
 *
 * Represents failed assignment of EBI(s)
 */

#ifndef AssignEbiFailed_H_
#define AssignEbiFailed_H_

#include "Arp.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents failed assignment of EBI(s)
/// </summary>
class AssignEbiFailed {
public:
  AssignEbiFailed();
  virtual ~AssignEbiFailed();

  void validate();

  /////////////////////////////////////////////
  /// AssignEbiFailed members

  /// <summary>
  /// Unsigned integer identifying a PDU session, within the range 0 to 255, as
  /// specified in clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU
  /// Session ID is allocated by the Core Network for UEs not supporting N1
  /// mode, reserved range 64 to 95 is used. PDU Session ID within the reserved
  /// range is only visible in the Core Network.
  /// </summary>
  int32_t getPduSessionId() const;
  void setPduSessionId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<Arp> &getFailedArpList();
  void setFailedArpList(std::vector<Arp> const &value);
  bool failedArpListIsSet() const;
  void unsetFailedArpList();

  friend void to_json(nlohmann::json &j, const AssignEbiFailed &o);
  friend void from_json(const nlohmann::json &j, AssignEbiFailed &o);

protected:
  int32_t m_PduSessionId;

  std::vector<Arp> m_FailedArpList;
  bool m_FailedArpListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AssignEbiFailed_H_ */
