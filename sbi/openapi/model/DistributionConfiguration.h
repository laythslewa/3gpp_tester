/**
 * M1_ContentHostingProvisioning
 * 5GMS AF M1 Content Hosting Provisioning API © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DistributionConfiguration.h
 *
 *
 */

#ifndef DistributionConfiguration_H_
#define DistributionConfiguration_H_

#include "CachingConfiguration.h"
#include "DistributionConfiguration_GeoFencing.h"
#include "DistributionConfiguration_UrlSignature.h"
#include "PathRewriteRule.h"
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
class DistributionConfiguration {
public:
  DistributionConfiguration();
  virtual ~DistributionConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// DistributionConfiguration members

  /// <summary>
  /// String chosen by the 5GMS AF to serve as an identifier in a resource URI.
  /// </summary>
  std::string getContentPreparationTemplateId() const;
  void setContentPreparationTemplateId(std::string const &value);
  bool contentPreparationTemplateIdIsSet() const;
  void unsetContentPreparationTemplateId();
  /// <summary>
  ///
  /// </summary>
  std::string getCanonicalDomainName() const;
  void setCanonicalDomainName(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getDomainNameAlias() const;
  void setDomainNameAlias(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<PathRewriteRule> &getPathRewriteRules();
  void setPathRewriteRules(std::vector<PathRewriteRule> const &value);
  bool pathRewriteRulesIsSet() const;
  void unsetPathRewriteRules();
  /// <summary>
  ///
  /// </summary>
  std::vector<CachingConfiguration> &getCachingConfigurations();
  void setCachingConfigurations(std::vector<CachingConfiguration> const &value);
  bool cachingConfigurationsIsSet() const;
  void unsetCachingConfigurations();
  /// <summary>
  ///
  /// </summary>
  DistributionConfiguration_GeoFencing getGeoFencing() const;
  void setGeoFencing(DistributionConfiguration_GeoFencing const &value);
  bool geoFencingIsSet() const;
  void unsetGeoFencing();
  /// <summary>
  ///
  /// </summary>
  DistributionConfiguration_UrlSignature getUrlSignature() const;
  void setUrlSignature(DistributionConfiguration_UrlSignature const &value);
  bool urlSignatureIsSet() const;
  void unsetUrlSignature();
  /// <summary>
  /// String chosen by the 5GMS AF to serve as an identifier in a resource URI.
  /// </summary>
  std::string getCertificateId() const;
  void setCertificateId(std::string const &value);
  bool certificateIdIsSet() const;
  void unsetCertificateId();

  friend void to_json(nlohmann::json &j, const DistributionConfiguration &o);
  friend void from_json(const nlohmann::json &j, DistributionConfiguration &o);

protected:
  std::string m_ContentPreparationTemplateId;
  bool m_ContentPreparationTemplateIdIsSet;
  std::string m_CanonicalDomainName;

  std::string m_DomainNameAlias;

  std::vector<PathRewriteRule> m_PathRewriteRules;
  bool m_PathRewriteRulesIsSet;
  std::vector<CachingConfiguration> m_CachingConfigurations;
  bool m_CachingConfigurationsIsSet;
  DistributionConfiguration_GeoFencing m_GeoFencing;
  bool m_GeoFencingIsSet;
  DistributionConfiguration_UrlSignature m_UrlSignature;
  bool m_UrlSignatureIsSet;
  std::string m_CertificateId;
  bool m_CertificateIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DistributionConfiguration_H_ */