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
 * N2SmInformation.h
 *
 * Represents the session management SMF related N2 information data part
 */

#ifndef N2SmInformation_H_
#define N2SmInformation_H_

#include "N2InfoContent.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the session management SMF related N2 information data part
/// </summary>
class N2SmInformation {
public:
  N2SmInformation();
  virtual ~N2SmInformation();

  void validate();

  /////////////////////////////////////////////
  /// N2SmInformation members

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
  N2InfoContent getN2InfoContent() const;
  void setN2InfoContent(N2InfoContent const &value);
  bool n2InfoContentIsSet() const;
  void unsetN2InfoContent();
  /// <summary>
  ///
  /// </summary>
  Snssai getSNssai() const;
  void setSNssai(Snssai const &value);
  bool sNssaiIsSet() const;
  void unsetSNssai();
  /// <summary>
  ///
  /// </summary>
  Snssai getHomePlmnSnssai() const;
  void setHomePlmnSnssai(Snssai const &value);
  bool homePlmnSnssaiIsSet() const;
  void unsetHomePlmnSnssai();
  /// <summary>
  ///
  /// </summary>
  Snssai getIwkSnssai() const;
  void setIwkSnssai(Snssai const &value);
  bool iwkSnssaiIsSet() const;
  void unsetIwkSnssai();
  /// <summary>
  ///
  /// </summary>
  bool isSubjectToHo() const;
  void setSubjectToHo(bool const value);
  bool subjectToHoIsSet() const;
  void unsetSubjectToHo();

  friend void to_json(nlohmann::json &j, const N2SmInformation &o);
  friend void from_json(const nlohmann::json &j, N2SmInformation &o);

protected:
  int32_t m_PduSessionId;

  N2InfoContent m_N2InfoContent;
  bool m_N2InfoContentIsSet;
  Snssai m_SNssai;
  bool m_SNssaiIsSet;
  Snssai m_HomePlmnSnssai;
  bool m_HomePlmnSnssaiIsSet;
  Snssai m_IwkSnssai;
  bool m_IwkSnssaiIsSet;
  bool m_SubjectToHo;
  bool m_SubjectToHoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* N2SmInformation_H_ */
