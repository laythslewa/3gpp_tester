/**
 * M1_ContentProtocolsDiscovery
 * 5GMS AF M1 Content Protocols Discovery API © 2021, 3GPP Organizational
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
 * ContentProtocolDescriptor.h
 *
 *
 */

#ifndef ContentProtocolDescriptor_H_
#define ContentProtocolDescriptor_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ContentProtocolDescriptor {
public:
  ContentProtocolDescriptor();
  virtual ~ContentProtocolDescriptor();

  void validate();

  /////////////////////////////////////////////
  /// ContentProtocolDescriptor members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getTermIdentifier() const;
  void setTermIdentifier(std::string const &value);
  /// <summary>
  /// Uniform Resource Locator, comforming with the URI Generic Syntax specified
  /// in IETF RFC 3986.
  /// </summary>
  std::string getDescriptionLocator() const;
  void setDescriptionLocator(std::string const &value);
  bool descriptionLocatorIsSet() const;
  void unsetDescriptionLocator();

  friend void to_json(nlohmann::json &j, const ContentProtocolDescriptor &o);
  friend void from_json(const nlohmann::json &j, ContentProtocolDescriptor &o);

protected:
  std::string m_TermIdentifier;

  std::string m_DescriptionLocator;
  bool m_DescriptionLocatorIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ContentProtocolDescriptor_H_ */