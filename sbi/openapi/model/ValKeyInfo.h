/**
 * SS_KeyInfoRetrieval
 * API for SEAL Key Information Retrieval. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ValKeyInfo.h
 *
 * Represents key management information associated with VAL server, VAL user or
 * VAL UE.
 */

#ifndef ValKeyInfo_H_
#define ValKeyInfo_H_

#include "ValTargetUe.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents key management information associated with VAL server, VAL user
/// or VAL UE.
/// </summary>
class ValKeyInfo {
public:
  ValKeyInfo();
  virtual ~ValKeyInfo();

  void validate();

  /////////////////////////////////////////////
  /// ValKeyInfo members

  /// <summary>
  /// string providing an URI formatted according to IETF RFC 3986.
  /// </summary>
  std::string getUserUri() const;
  void setUserUri(std::string const &value);
  /// <summary>
  /// String identifying the key management server.
  /// </summary>
  std::string getSkmsId() const;
  void setSkmsId(std::string const &value);
  bool skmsIdIsSet() const;
  void unsetSkmsId();
  /// <summary>
  /// Unique identifier of a VAL Service.
  /// </summary>
  std::string getValService() const;
  void setValService(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  ValTargetUe getValTgtUe() const;
  void setValTgtUe(ValTargetUe const &value);
  bool valTgtUeIsSet() const;
  void unsetValTgtUe();
  /// <summary>
  /// Key management information specific to VAL service, VAL User or VAL UE.
  /// </summary>
  std::string getKeyInfo() const;
  void setKeyInfo(std::string const &value);

  friend void to_json(nlohmann::json &j, const ValKeyInfo &o);
  friend void from_json(const nlohmann::json &j, ValKeyInfo &o);

protected:
  std::string m_UserUri;

  std::string m_SkmsId;
  bool m_SkmsIdIsSet;
  std::string m_ValService;

  ValTargetUe m_ValTgtUe;
  bool m_ValTgtUeIsSet;
  std::string m_KeyInfo;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ValKeyInfo_H_ */