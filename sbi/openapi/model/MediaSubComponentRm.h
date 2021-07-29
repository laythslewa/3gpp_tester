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
 * MediaSubComponentRm.h
 *
 * This data type is defined in the same way as the MediaSubComponent data type,
 * but with the OpenAPI nullable property set to true. Removable attributes
 * marBwDl and marBwUl are defined with the corresponding removable data type.
 */

#ifndef MediaSubComponentRm_H_
#define MediaSubComponentRm_H_

#include "AfSigProtocol.h"
#include "EthFlowDescription.h"
#include "FlowStatus.h"
#include "FlowUsage.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// This data type is defined in the same way as the MediaSubComponent data
/// type, but with the OpenAPI nullable property set to true. Removable
/// attributes marBwDl and marBwUl are defined with the corresponding removable
/// data type.
/// </summary>
class MediaSubComponentRm {
public:
  MediaSubComponentRm();
  virtual ~MediaSubComponentRm();

  void validate();

  /////////////////////////////////////////////
  /// MediaSubComponentRm members

  /// <summary>
  ///
  /// </summary>
  AfSigProtocol getAfSigProtocol() const;
  void setAfSigProtocol(AfSigProtocol const &value);
  bool afSigProtocolIsSet() const;
  void unsetAfSigProtocol();
  /// <summary>
  ///
  /// </summary>
  std::vector<EthFlowDescription> &getEthfDescs();
  void setEthfDescs(std::vector<EthFlowDescription> const &value);
  bool ethfDescsIsSet() const;
  void unsetEthfDescs();
  /// <summary>
  ///
  /// </summary>
  int32_t getFNum() const;
  void setFNum(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getFDescs();
  void setFDescs(std::vector<std::string> const &value);
  bool fDescsIsSet() const;
  void unsetFDescs();
  /// <summary>
  ///
  /// </summary>
  FlowStatus getFStatus() const;
  void setFStatus(FlowStatus const &value);
  bool fStatusIsSet() const;
  void unsetFStatus();
  /// <summary>
  /// This data type is defined in the same way as the \&quot;BitRate\&quot;
  /// data type, but with the OpenAPI \&quot;nullable&#x3D; true\&quot;
  /// property.
  /// </summary>
  std::string getMarBwDl() const;
  void setMarBwDl(std::string const &value);
  bool marBwDlIsSet() const;
  void unsetMarBwDl();
  /// <summary>
  /// This data type is defined in the same way as the \&quot;BitRate\&quot;
  /// data type, but with the OpenAPI \&quot;nullable&#x3D; true\&quot;
  /// property.
  /// </summary>
  std::string getMarBwUl() const;
  void setMarBwUl(std::string const &value);
  bool marBwUlIsSet() const;
  void unsetMarBwUl();
  /// <summary>
  /// this data type is defined in the same way as the TosTrafficClass data
  /// type, but with the OpenAPI nullable property set to true
  /// </summary>
  std::string getTosTrCl() const;
  void setTosTrCl(std::string const &value);
  bool tosTrClIsSet() const;
  void unsetTosTrCl();
  /// <summary>
  ///
  /// </summary>
  FlowUsage getFlowUsage() const;
  void setFlowUsage(FlowUsage const &value);
  bool flowUsageIsSet() const;
  void unsetFlowUsage();

  friend void to_json(nlohmann::json &j, const MediaSubComponentRm &o);
  friend void from_json(const nlohmann::json &j, MediaSubComponentRm &o);

protected:
  AfSigProtocol m_AfSigProtocol;
  bool m_AfSigProtocolIsSet;
  std::vector<EthFlowDescription> m_EthfDescs;
  bool m_EthfDescsIsSet;
  int32_t m_FNum;

  std::vector<std::string> m_FDescs;
  bool m_FDescsIsSet;
  FlowStatus m_FStatus;
  bool m_FStatusIsSet;
  std::string m_MarBwDl;
  bool m_MarBwDlIsSet;
  std::string m_MarBwUl;
  bool m_MarBwUlIsSet;
  std::string m_TosTrCl;
  bool m_TosTrClIsSet;
  FlowUsage m_FlowUsage;
  bool m_FlowUsageIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MediaSubComponentRm_H_ */
