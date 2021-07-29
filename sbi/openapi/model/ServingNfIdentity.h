/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServingNfIdentity.h
 *
 * Contains the serving Network Function identity.
 */

#ifndef ServingNfIdentity_H_
#define ServingNfIdentity_H_

#include "AnGwAddress.h"
#include "Guami.h"
#include "SgsnAddress.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the serving Network Function identity.
/// </summary>
class ServingNfIdentity {
public:
  ServingNfIdentity();
  virtual ~ServingNfIdentity();

  void validate();

  /////////////////////////////////////////////
  /// ServingNfIdentity members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getServNfInstId() const;
  void setServNfInstId(std::string const &value);
  bool servNfInstIdIsSet() const;
  void unsetServNfInstId();
  /// <summary>
  ///
  /// </summary>
  Guami getGuami() const;
  void setGuami(Guami const &value);
  bool guamiIsSet() const;
  void unsetGuami();
  /// <summary>
  ///
  /// </summary>
  AnGwAddress getAnGwAddr() const;
  void setAnGwAddr(AnGwAddress const &value);
  bool anGwAddrIsSet() const;
  void unsetAnGwAddr();
  /// <summary>
  ///
  /// </summary>
  SgsnAddress getSgsnAddr() const;
  void setSgsnAddr(SgsnAddress const &value);
  bool sgsnAddrIsSet() const;
  void unsetSgsnAddr();

  friend void to_json(nlohmann::json &j, const ServingNfIdentity &o);
  friend void from_json(const nlohmann::json &j, ServingNfIdentity &o);

protected:
  std::string m_ServNfInstId;
  bool m_ServNfInstIdIsSet;
  Guami m_Guami;
  bool m_GuamiIsSet;
  AnGwAddress m_AnGwAddr;
  bool m_AnGwAddrIsSet;
  SgsnAddress m_SgsnAddr;
  bool m_SgsnAddrIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServingNfIdentity_H_ */