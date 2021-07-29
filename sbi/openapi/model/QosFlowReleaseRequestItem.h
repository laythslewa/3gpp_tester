/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * QosFlowReleaseRequestItem.h
 *
 * Individual QoS flow requested to be released
 */

#ifndef QosFlowReleaseRequestItem_H_
#define QosFlowReleaseRequestItem_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Individual QoS flow requested to be released
/// </summary>
class QosFlowReleaseRequestItem {
public:
  QosFlowReleaseRequestItem();
  virtual ~QosFlowReleaseRequestItem();

  void validate();

  /////////////////////////////////////////////
  /// QosFlowReleaseRequestItem members

  /// <summary>
  /// Unsigned integer identifying a QoS flow, within the range 0 to 63.
  /// </summary>
  int32_t getQfi() const;
  void setQfi(int32_t const value);
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getQosRules() const;
  void setQosRules(std::string const &value);
  bool qosRulesIsSet() const;
  void unsetQosRules();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getQosFlowDescription() const;
  void setQosFlowDescription(std::string const &value);
  bool qosFlowDescriptionIsSet() const;
  void unsetQosFlowDescription();

  friend void to_json(nlohmann::json &j, const QosFlowReleaseRequestItem &o);
  friend void from_json(const nlohmann::json &j, QosFlowReleaseRequestItem &o);

protected:
  int32_t m_Qfi;

  std::string m_QosRules;
  bool m_QosRulesIsSet;
  std::string m_QosFlowDescription;
  bool m_QosFlowDescriptionIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* QosFlowReleaseRequestItem_H_ */
