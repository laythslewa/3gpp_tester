/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NiddDownlinkDataDeliveryFailure.h
 *
 * Represents information related to a failure delivery result.
 */

#ifndef NiddDownlinkDataDeliveryFailure_H_
#define NiddDownlinkDataDeliveryFailure_H_

#include "ProblemDetails.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents information related to a failure delivery result.
/// </summary>
class NiddDownlinkDataDeliveryFailure {
public:
  NiddDownlinkDataDeliveryFailure();
  virtual ~NiddDownlinkDataDeliveryFailure();

  void validate();

  /////////////////////////////////////////////
  /// NiddDownlinkDataDeliveryFailure members

  /// <summary>
  ///
  /// </summary>
  ProblemDetails getProblemDetail() const;
  void setProblemDetail(ProblemDetails const &value);
  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getRequestedRetransmissionTime() const;
  void setRequestedRetransmissionTime(std::string const &value);
  bool requestedRetransmissionTimeIsSet() const;
  void unsetRequestedRetransmissionTime();

  friend void to_json(nlohmann::json &j,
                      const NiddDownlinkDataDeliveryFailure &o);
  friend void from_json(const nlohmann::json &j,
                        NiddDownlinkDataDeliveryFailure &o);

protected:
  ProblemDetails m_ProblemDetail;

  std::string m_RequestedRetransmissionTime;
  bool m_RequestedRetransmissionTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NiddDownlinkDataDeliveryFailure_H_ */