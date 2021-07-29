/**
 * AEF_Security_API
 * API for AEF security management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CheckAuthenticationRsp.h
 *
 * Represents authentication check response data.
 */

#ifndef CheckAuthenticationRsp_H_
#define CheckAuthenticationRsp_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents authentication check response data.
/// </summary>
class CheckAuthenticationRsp {
public:
  CheckAuthenticationRsp();
  virtual ~CheckAuthenticationRsp();

  void validate();

  /////////////////////////////////////////////
  /// CheckAuthenticationRsp members

  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const &value);

  friend void to_json(nlohmann::json &j, const CheckAuthenticationRsp &o);
  friend void from_json(const nlohmann::json &j, CheckAuthenticationRsp &o);

protected:
  std::string m_SupportedFeatures;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CheckAuthenticationRsp_H_ */
