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
 * SmContextUpdatedData.h
 *
 * Data within Update SM Context Response
 */

#ifndef SmContextUpdatedData_H_
#define SmContextUpdatedData_H_

#include "Cause.h"
#include "EbiArpMapping.h"
#include "HoState.h"
#include "IndirectDataForwardingTunnelInfo.h"
#include "N2SmInfoType.h"
#include "RefToBinaryData.h"
#include "UpCnxState.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data within Update SM Context Response
/// </summary>
class SmContextUpdatedData {
public:
  SmContextUpdatedData();
  virtual ~SmContextUpdatedData();

  void validate();

  /////////////////////////////////////////////
  /// SmContextUpdatedData members

  /// <summary>
  ///
  /// </summary>
  UpCnxState getUpCnxState() const;
  void setUpCnxState(UpCnxState const &value);
  bool upCnxStateIsSet() const;
  void unsetUpCnxState();
  /// <summary>
  ///
  /// </summary>
  HoState getHoState() const;
  void setHoState(HoState const &value);
  bool hoStateIsSet() const;
  void unsetHoState();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t> &getReleaseEbiList();
  void setReleaseEbiList(std::vector<int32_t> const value);
  bool releaseEbiListIsSet() const;
  void unsetReleaseEbiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<EbiArpMapping> &getAllocatedEbiList();
  void setAllocatedEbiList(std::vector<EbiArpMapping> const &value);
  bool allocatedEbiListIsSet() const;
  void unsetAllocatedEbiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<EbiArpMapping> &getModifiedEbiList();
  void setModifiedEbiList(std::vector<EbiArpMapping> const &value);
  bool modifiedEbiListIsSet() const;
  void unsetModifiedEbiList();
  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getN1SmMsg() const;
  void setN1SmMsg(RefToBinaryData const &value);
  bool n1SmMsgIsSet() const;
  void unsetN1SmMsg();
  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getN2SmInfo() const;
  void setN2SmInfo(RefToBinaryData const &value);
  bool n2SmInfoIsSet() const;
  void unsetN2SmInfo();
  /// <summary>
  ///
  /// </summary>
  N2SmInfoType getN2SmInfoType() const;
  void setN2SmInfoType(N2SmInfoType const &value);
  bool n2SmInfoTypeIsSet() const;
  void unsetN2SmInfoType();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getEpsBearerSetup();
  void setEpsBearerSetup(std::vector<std::string> const &value);
  bool epsBearerSetupIsSet() const;
  void unsetEpsBearerSetup();
  /// <summary>
  ///
  /// </summary>
  bool isDataForwarding() const;
  void setDataForwarding(bool const value);
  bool dataForwardingIsSet() const;
  void unsetDataForwarding();
  /// <summary>
  ///
  /// </summary>
  std::vector<IndirectDataForwardingTunnelInfo> &getN3DlForwardingTnlList();
  void setN3DlForwardingTnlList(
      std::vector<IndirectDataForwardingTunnelInfo> const &value);
  bool n3DlForwardingTnlListIsSet() const;
  void unsetN3DlForwardingTnlList();
  /// <summary>
  ///
  /// </summary>
  std::vector<IndirectDataForwardingTunnelInfo> &getN3UlForwardingTnlList();
  void setN3UlForwardingTnlList(
      std::vector<IndirectDataForwardingTunnelInfo> const &value);
  bool n3UlForwardingTnlListIsSet() const;
  void unsetN3UlForwardingTnlList();
  /// <summary>
  ///
  /// </summary>
  Cause getCause() const;
  void setCause(Cause const &value);
  bool causeIsSet() const;
  void unsetCause();
  /// <summary>
  ///
  /// </summary>
  bool isMaAcceptedInd() const;
  void setMaAcceptedInd(bool const value);
  bool maAcceptedIndIsSet() const;
  void unsetMaAcceptedInd();
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
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  /// string with format \&quot;bytes\&quot; as defined in OpenAPI
  /// </summary>
  std::string getForwardingFTeid() const;
  void setForwardingFTeid(std::string const &value);
  bool forwardingFTeidIsSet() const;
  void unsetForwardingFTeid();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getForwardingBearerContexts();
  void setForwardingBearerContexts(std::vector<std::string> const &value);
  bool forwardingBearerContextsIsSet() const;
  void unsetForwardingBearerContexts();
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getSelectedSmfId() const;
  void setSelectedSmfId(std::string const &value);
  bool selectedSmfIdIsSet() const;
  void unsetSelectedSmfId();
  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a Universally Unique Identifier (UUID) version 4, as described
  /// in IETF RFC 4122.
  /// </summary>
  std::string getSelectedOldSmfId() const;
  void setSelectedOldSmfId(std::string const &value);
  bool selectedOldSmfIdIsSet() const;
  void unsetSelectedOldSmfId();

  friend void to_json(nlohmann::json &j, const SmContextUpdatedData &o);
  friend void from_json(const nlohmann::json &j, SmContextUpdatedData &o);

protected:
  UpCnxState m_UpCnxState;
  bool m_UpCnxStateIsSet;
  HoState m_HoState;
  bool m_HoStateIsSet;
  std::vector<int32_t> m_ReleaseEbiList;
  bool m_ReleaseEbiListIsSet;
  std::vector<EbiArpMapping> m_AllocatedEbiList;
  bool m_AllocatedEbiListIsSet;
  std::vector<EbiArpMapping> m_ModifiedEbiList;
  bool m_ModifiedEbiListIsSet;
  RefToBinaryData m_N1SmMsg;
  bool m_N1SmMsgIsSet;
  RefToBinaryData m_N2SmInfo;
  bool m_N2SmInfoIsSet;
  N2SmInfoType m_N2SmInfoType;
  bool m_N2SmInfoTypeIsSet;
  std::vector<std::string> m_EpsBearerSetup;
  bool m_EpsBearerSetupIsSet;
  bool m_DataForwarding;
  bool m_DataForwardingIsSet;
  std::vector<IndirectDataForwardingTunnelInfo> m_N3DlForwardingTnlList;
  bool m_N3DlForwardingTnlListIsSet;
  std::vector<IndirectDataForwardingTunnelInfo> m_N3UlForwardingTnlList;
  bool m_N3UlForwardingTnlListIsSet;
  Cause m_Cause;
  bool m_CauseIsSet;
  bool m_MaAcceptedInd;
  bool m_MaAcceptedIndIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::string m_ForwardingFTeid;
  bool m_ForwardingFTeidIsSet;
  std::vector<std::string> m_ForwardingBearerContexts;
  bool m_ForwardingBearerContextsIsSet;
  std::string m_SelectedSmfId;
  bool m_SelectedSmfIdIsSet;
  std::string m_SelectedOldSmfId;
  bool m_SelectedOldSmfIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SmContextUpdatedData_H_ */
