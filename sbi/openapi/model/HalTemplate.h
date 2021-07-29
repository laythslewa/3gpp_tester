/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HalTemplate.h
 *
 *
 */

#ifndef HalTemplate_H_
#define HalTemplate_H_

#include "HttpMethod.h"
#include "Property.h"
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
class HalTemplate {
public:
  HalTemplate();
  virtual ~HalTemplate();

  void validate();

  /////////////////////////////////////////////
  /// HalTemplate members

  /// <summary>
  /// A human-readable string that can be used to identify this template
  /// </summary>
  std::string getTitle() const;
  void setTitle(std::string const &value);
  bool titleIsSet() const;
  void unsetTitle();
  /// <summary>
  ///
  /// </summary>
  HttpMethod getMethod() const;
  void setMethod(HttpMethod const &value);
  /// <summary>
  /// The media type that should be used for the corresponding request. If the
  /// attribute is missing, or contains an unrecognized value, the client should
  /// act as if the contentType is set to \&quot;application/json\&quot;.
  /// </summary>
  std::string getContentType() const;
  void setContentType(std::string const &value);
  bool contentTypeIsSet() const;
  void unsetContentType();
  /// <summary>
  /// The properties that should be included in the body of the corresponding
  /// request. If the contentType attribute is set to
  /// \&quot;application/json\&quot;, then this attribute describes the
  /// attributes of the JSON object of the body.
  /// </summary>
  std::vector<Property> &getProperties();
  void setProperties(std::vector<Property> const &value);
  bool propertiesIsSet() const;
  void unsetProperties();

  friend void to_json(nlohmann::json &j, const HalTemplate &o);
  friend void from_json(const nlohmann::json &j, HalTemplate &o);

protected:
  std::string m_Title;
  bool m_TitleIsSet;
  HttpMethod m_Method;

  std::string m_ContentType;
  bool m_ContentTypeIsSet;
  std::vector<Property> m_Properties;
  bool m_PropertiesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* HalTemplate_H_ */