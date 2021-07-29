/**
 * SEPP Telescopic FQDN Mapping API
 * SEPP Telescopic FQDN Mapping Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TelescopicMapping.h
 *
 * Contains the Telescopic mapping data
 */

#ifndef TelescopicMapping_H_
#define TelescopicMapping_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the Telescopic mapping data
/// </summary>
class TelescopicMapping {
public:
  TelescopicMapping();
  virtual ~TelescopicMapping();

  void validate();

  /////////////////////////////////////////////
  /// TelescopicMapping members

  /// <summary>
  ///
  /// </summary>
  std::string getTelescopicLabel() const;
  void setTelescopicLabel(std::string const &value);
  bool telescopicLabelIsSet() const;
  void unsetTelescopicLabel();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getSeppDomain() const;
  void setSeppDomain(std::string const &value);
  bool seppDomainIsSet() const;
  void unsetSeppDomain();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getForeignFqdn() const;
  void setForeignFqdn(std::string const &value);
  bool foreignFqdnIsSet() const;
  void unsetForeignFqdn();

  friend void to_json(nlohmann::json &j, const TelescopicMapping &o);
  friend void from_json(const nlohmann::json &j, TelescopicMapping &o);

protected:
  std::string m_TelescopicLabel;
  bool m_TelescopicLabelIsSet;
  std::string m_SeppDomain;
  bool m_SeppDomainIsSet;
  std::string m_ForeignFqdn;
  bool m_ForeignFqdnIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TelescopicMapping_H_ */
