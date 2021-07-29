/**
 * M1_ProvisioningSessions
 * 5GMS AF M1 Provisioning Sessions API © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ProvisioningSession.h
 *
 * A representation of a Provisioning Session.
 */

#ifndef ProvisioningSession_H_
#define ProvisioningSession_H_

#include "ProvisioningSessionType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A representation of a Provisioning Session.
/// </summary>
class ProvisioningSession {
public:
  ProvisioningSession();
  virtual ~ProvisioningSession();

  void validate();

  /////////////////////////////////////////////
  /// ProvisioningSession members

  /// <summary>
  /// String chosen by the 5GMS AF to serve as an identifier in a resource URI.
  /// </summary>
  std::string getProvisioningSessionId() const;
  void setProvisioningSessionId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  ProvisioningSessionType getProvisioningSessionType() const;
  void setProvisioningSessionType(ProvisioningSessionType const &value);
  /// <summary>
  /// Contains an identity of an application service provider.
  /// </summary>
  std::string getAspId() const;
  void setAspId(std::string const &value);
  bool aspIdIsSet() const;
  void unsetAspId();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getServerCertificateIds();
  void setServerCertificateIds(std::vector<std::string> const &value);
  bool serverCertificateIdsIsSet() const;
  void unsetServerCertificateIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getContentPreparationTemplateIds();
  void setContentPreparationTemplateIds(std::vector<std::string> const &value);
  bool contentPreparationTemplateIdsIsSet() const;
  void unsetContentPreparationTemplateIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getMetricsReportingConfigurationIds();
  void
  setMetricsReportingConfigurationIds(std::vector<std::string> const &value);
  bool metricsReportingConfigurationIdsIsSet() const;
  void unsetMetricsReportingConfigurationIds();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getPolicyTemplateIds();
  void setPolicyTemplateIds(std::vector<std::string> const &value);
  bool policyTemplateIdsIsSet() const;
  void unsetPolicyTemplateIds();

  friend void to_json(nlohmann::json &j, const ProvisioningSession &o);
  friend void from_json(const nlohmann::json &j, ProvisioningSession &o);

protected:
  std::string m_ProvisioningSessionId;

  ProvisioningSessionType m_ProvisioningSessionType;

  std::string m_AspId;
  bool m_AspIdIsSet;
  std::vector<std::string> m_ServerCertificateIds;
  bool m_ServerCertificateIdsIsSet;
  std::vector<std::string> m_ContentPreparationTemplateIds;
  bool m_ContentPreparationTemplateIdsIsSet;
  std::vector<std::string> m_MetricsReportingConfigurationIds;
  bool m_MetricsReportingConfigurationIdsIsSet;
  std::vector<std::string> m_PolicyTemplateIds;
  bool m_PolicyTemplateIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ProvisioningSession_H_ */