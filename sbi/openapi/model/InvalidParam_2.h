/**
 * 3gpp-am-policyauthorization
 * API for AM policy authorization. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * InvalidParam_2.h
 *
 *
 */

#ifndef InvalidParam_2_H_
#define InvalidParam_2_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class InvalidParam_2 {
public:
  InvalidParam_2();
  virtual ~InvalidParam_2();

  void validate();

  /////////////////////////////////////////////
  /// InvalidParam_2 members

  /// <summary>
  /// If the invalid parameter is an attribute in a JSON body, this IE shall
  /// contain the attribute&#39;s name and shall be encoded as a JSON Pointer.
  /// If the invalid parameter is an HTTP header, this IE shall be formatted as
  /// the concatenation of the string \&quot;header \&quot; plus the name of
  /// such header. If the invalid parameter is a query parameter, this IE shall
  /// be formatted as the concatenation of the string \&quot;query \&quot; plus
  /// the name of such query parameter. If the invalid parameter is a variable
  /// part in the path of a resource URI, this IE shall contain the name of the
  /// variable, including the symbols \&quot;{\&quot; and \&quot;}\&quot; used
  /// in OpenAPI specification as the notation to represent variable path
  /// segments.
  /// </summary>
  std::string getParam() const;
  void setParam(std::string const &value);
  /// <summary>
  /// A human-readable reason, e.g. \&quot;must be a positive integer\&quot;. In
  /// cases involving failed operations in a PATCH request, the reason string
  /// should identify the operation that failed using the operation&#39;s array
  /// index to assist in correlation of the invalid parameter with the failed
  /// operation, e.g.\&quot; Replacement value invalid for attribute (failed
  /// operation index&#x3D; 4)\&quot;
  /// </summary>
  std::string getReason() const;
  void setReason(std::string const &value);
  bool reasonIsSet() const;
  void unsetReason();

  friend void to_json(nlohmann::json &j, const InvalidParam_2 &o);
  friend void from_json(const nlohmann::json &j, InvalidParam_2 &o);

protected:
  std::string m_Param;

  std::string m_Reason;
  bool m_ReasonIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* InvalidParam_2_H_ */