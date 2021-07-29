/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * N1N2MsgTxfrFailureNotification.h
 *
 * Data within a N1/N2 Message Transfer Failure Notification request
 */

#ifndef N1N2MsgTxfrFailureNotification_H_
#define N1N2MsgTxfrFailureNotification_H_

#include "N1N2MessageTransferCause.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data within a N1/N2 Message Transfer Failure Notification request
/// </summary>
class N1N2MsgTxfrFailureNotification {
public:
  N1N2MsgTxfrFailureNotification();
  virtual ~N1N2MsgTxfrFailureNotification();

  void validate();

  /////////////////////////////////////////////
  /// N1N2MsgTxfrFailureNotification members

  /// <summary>
  ///
  /// </summary>
  N1N2MessageTransferCause getCause() const;
  void setCause(N1N2MessageTransferCause const &value);
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getN1n2MsgDataUri() const;
  void setN1n2MsgDataUri(std::string const &value);

  friend void to_json(nlohmann::json &j,
                      const N1N2MsgTxfrFailureNotification &o);
  friend void from_json(const nlohmann::json &j,
                        N1N2MsgTxfrFailureNotification &o);

protected:
  N1N2MessageTransferCause m_Cause;

  std::string m_N1n2MsgDataUri;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* N1N2MsgTxfrFailureNotification_H_ */
