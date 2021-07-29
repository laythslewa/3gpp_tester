/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SipForkingIndication.h
 *
 * Indicates whether several SIP dialogues are related to an \&quot;Individual
 * Application Session Context\&quot; resource.
 */

#ifndef SipForkingIndication_H_
#define SipForkingIndication_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates whether several SIP dialogues are related to an \&quot;Individual
/// Application Session Context\&quot; resource.
/// </summary>
class SipForkingIndication {
public:
  SipForkingIndication();
  virtual ~SipForkingIndication();

  void validate();

  /////////////////////////////////////////////
  /// SipForkingIndication members

  friend void to_json(nlohmann::json &j, const SipForkingIndication &o);
  friend void from_json(const nlohmann::json &j, SipForkingIndication &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SipForkingIndication_H_ */