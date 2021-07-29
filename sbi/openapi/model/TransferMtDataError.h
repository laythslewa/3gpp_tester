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
 * TransferMtDataError.h
 *
 * Transfer MT Data Error Response
 */

#ifndef TransferMtDataError_H_
#define TransferMtDataError_H_

#include "AccessTokenErr.h"
#include "AccessTokenReq.h"
#include "InvalidParam.h"
#include "ProblemDetails.h"
#include "TransferMtDataAddInfo.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Transfer MT Data Error Response
/// </summary>
class TransferMtDataError {
public:
  TransferMtDataError();
  virtual ~TransferMtDataError();

  void validate();

  /////////////////////////////////////////////
  /// TransferMtDataError members

  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getType() const;
  void setType(std::string const &value);
  bool typeIsSet() const;
  void unsetType();
  /// <summary>
  /// A short, human-readable summary of the problem type.
  /// </summary>
  std::string getTitle() const;
  void setTitle(std::string const &value);
  bool titleIsSet() const;
  void unsetTitle();
  /// <summary>
  /// The HTTP status code for this occurrence of the problem.
  /// </summary>
  int32_t getStatus() const;
  void setStatus(int32_t const value);
  bool statusIsSet() const;
  void unsetStatus();
  /// <summary>
  /// A human-readable explanation specific to this occurrence of the problem.
  /// </summary>
  std::string getDetail() const;
  void setDetail(std::string const &value);
  bool detailIsSet() const;
  void unsetDetail();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getInstance() const;
  void setInstance(std::string const &value);
  bool instanceIsSet() const;
  void unsetInstance();
  /// <summary>
  /// A machine-readable application error cause specific to this occurrence of
  /// the problem. This IE should be present and provide application-related
  /// error information, if available.
  /// </summary>
  std::string getCause() const;
  void setCause(std::string const &value);
  bool causeIsSet() const;
  void unsetCause();
  /// <summary>
  /// Description of invalid parameters, for a request rejected due to invalid
  /// parameters.
  /// </summary>
  std::vector<InvalidParam> &getInvalidParams();
  void setInvalidParams(std::vector<InvalidParam> const &value);
  bool invalidParamsIsSet() const;
  void unsetInvalidParams();
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
  ///
  /// </summary>
  AccessTokenErr getAccessTokenError() const;
  void setAccessTokenError(AccessTokenErr const &value);
  bool accessTokenErrorIsSet() const;
  void unsetAccessTokenError();
  /// <summary>
  ///
  /// </summary>
  AccessTokenReq getAccessTokenRequest() const;
  void setAccessTokenRequest(AccessTokenReq const &value);
  bool accessTokenRequestIsSet() const;
  void unsetAccessTokenRequest();
  /// <summary>
  /// It contain the Identity (i.e. FQDN) of the NRF that rejected the access
  /// token request.
  /// </summary>
  std::string getNrfId() const;
  void setNrfId(std::string const &value);
  bool nrfIdIsSet() const;
  void unsetNrfId();
  /// <summary>
  /// indicating a time in seconds.
  /// </summary>
  int32_t getMaxWaitingTime() const;
  void setMaxWaitingTime(int32_t const value);
  bool maxWaitingTimeIsSet() const;
  void unsetMaxWaitingTime();

  friend void to_json(nlohmann::json &j, const TransferMtDataError &o);
  friend void from_json(const nlohmann::json &j, TransferMtDataError &o);

protected:
  std::string m_Type;
  bool m_TypeIsSet;
  std::string m_Title;
  bool m_TitleIsSet;
  int32_t m_Status;
  bool m_StatusIsSet;
  std::string m_Detail;
  bool m_DetailIsSet;
  std::string m_Instance;
  bool m_InstanceIsSet;
  std::string m_Cause;
  bool m_CauseIsSet;
  std::vector<InvalidParam> m_InvalidParams;
  bool m_InvalidParamsIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  AccessTokenErr m_AccessTokenError;
  bool m_AccessTokenErrorIsSet;
  AccessTokenReq m_AccessTokenRequest;
  bool m_AccessTokenRequestIsSet;
  std::string m_NrfId;
  bool m_NrfIdIsSet;
  int32_t m_MaxWaitingTime;
  bool m_MaxWaitingTimeIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TransferMtDataError_H_ */
