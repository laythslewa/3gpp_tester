/**
 * CAPIF_Security_API
 * API for CAPIF security management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SecurityNotification.h
 *
 * Represents revoked authorization notification details.
 */

#ifndef SecurityNotification_H_
#define SecurityNotification_H_

#include "Cause.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents revoked authorization notification details.
/// </summary>
class SecurityNotification {
public:
  SecurityNotification();
  virtual ~SecurityNotification();

  void validate();

  /////////////////////////////////////////////
  /// SecurityNotification members

  /// <summary>
  /// String identifying the API invoker assigned by the CAPIF core function.
  /// </summary>
  std::string getApiInvokerId() const;
  void setApiInvokerId(std::string const &value);
  /// <summary>
  /// String identifying the AEF.
  /// </summary>
  std::string getAefId() const;
  void setAefId(std::string const &value);
  bool aefIdIsSet() const;
  void unsetAefId();
  /// <summary>
  /// Identifier of the service API
  /// </summary>
  std::vector<std::string> &getApiIds();
  void setApiIds(std::vector<std::string> const &value);
  /// <summary>
  ///
  /// </summary>
  Cause getCause() const;
  void setCause(Cause const &value);

  friend void to_json(nlohmann::json &j, const SecurityNotification &o);
  friend void from_json(const nlohmann::json &j, SecurityNotification &o);

protected:
  std::string m_ApiInvokerId;

  std::string m_AefId;
  bool m_AefIdIsSet;
  std::vector<std::string> m_ApiIds;

  Cause m_Cause;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SecurityNotification_H_ */
