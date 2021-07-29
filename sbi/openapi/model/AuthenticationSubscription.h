/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthenticationSubscription.h
 *
 * A UE&#39;s authentication data.
 */

#ifndef AuthenticationSubscription_H_
#define AuthenticationSubscription_H_

#include "AuthMethod.h"
#include "SequenceNumber.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// A UE&#39;s authentication data.
/// </summary>
class AuthenticationSubscription {
public:
  AuthenticationSubscription();
  virtual ~AuthenticationSubscription();

  void validate();

  /////////////////////////////////////////////
  /// AuthenticationSubscription members

  /// <summary>
  ///
  /// </summary>
  AuthMethod getAuthenticationMethod() const;
  void setAuthenticationMethod(AuthMethod const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getEncPermanentKey() const;
  void setEncPermanentKey(std::string const &value);
  bool encPermanentKeyIsSet() const;
  void unsetEncPermanentKey();
  /// <summary>
  ///
  /// </summary>
  std::string getProtectionParameterId() const;
  void setProtectionParameterId(std::string const &value);
  bool protectionParameterIdIsSet() const;
  void unsetProtectionParameterId();
  /// <summary>
  ///
  /// </summary>
  SequenceNumber getSequenceNumber() const;
  void setSequenceNumber(SequenceNumber const &value);
  bool sequenceNumberIsSet() const;
  void unsetSequenceNumber();
  /// <summary>
  ///
  /// </summary>
  std::string getAuthenticationManagementField() const;
  void setAuthenticationManagementField(std::string const &value);
  bool authenticationManagementFieldIsSet() const;
  void unsetAuthenticationManagementField();
  /// <summary>
  ///
  /// </summary>
  std::string getAlgorithmId() const;
  void setAlgorithmId(std::string const &value);
  bool algorithmIdIsSet() const;
  void unsetAlgorithmId();
  /// <summary>
  ///
  /// </summary>
  std::string getEncOpcKey() const;
  void setEncOpcKey(std::string const &value);
  bool encOpcKeyIsSet() const;
  void unsetEncOpcKey();
  /// <summary>
  ///
  /// </summary>
  std::string getEncTopcKey() const;
  void setEncTopcKey(std::string const &value);
  bool encTopcKeyIsSet() const;
  void unsetEncTopcKey();
  /// <summary>
  ///
  /// </summary>
  bool isVectorGenerationInHss() const;
  void setVectorGenerationInHss(bool const value);
  bool vectorGenerationInHssIsSet() const;
  void unsetVectorGenerationInHss();
  /// <summary>
  /// Identifier of a group of NFs.
  /// </summary>
  std::string getHssGroupId() const;
  void setHssGroupId(std::string const &value);
  bool hssGroupIdIsSet() const;
  void unsetHssGroupId();
  /// <summary>
  ///
  /// </summary>
  AuthMethod getN5gcAuthMethod() const;
  void setN5gcAuthMethod(AuthMethod const &value);
  bool n5gcAuthMethodIsSet() const;
  void unsetN5gcAuthMethod();
  /// <summary>
  ///
  /// </summary>
  bool isRgAuthenticationInd() const;
  void setRgAuthenticationInd(bool const value);
  bool rgAuthenticationIndIsSet() const;
  void unsetRgAuthenticationInd();
  /// <summary>
  /// String identifying a Supi that shall contain either an IMSI, a network
  /// specific identifier, a Global Cable Identifier (GCI) or a Global Line
  /// Identifier (GLI) as specified in clause 2.2A of 3GPP TS 23.003. It shall
  /// be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;,
  /// where &lt;imsi&gt; shall be formatted according to clause 2.2 of 3GPP
  /// TS 23.003 that describes an IMSI.  - for a network specific identifier
  /// \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted according to
  /// clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI
  /// \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted
  /// according to clause 28.15.2 of 3GPP TS 23.003.  - for a GLI
  /// \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted
  /// according to clause 28.16.2 of 3GPP TS 23.003.To enable that the value is
  /// used as part of an URI, the string shall only contain characters allowed
  /// according to the \&quot;lower-with-hyphen\&quot; naming convention defined
  /// in 3GPP TS 29.501.
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const &value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  bool isAkmaAllowed() const;
  void setAkmaAllowed(bool const value);
  bool akmaAllowedIsSet() const;
  void unsetAkmaAllowed();

  friend void to_json(nlohmann::json &j, const AuthenticationSubscription &o);
  friend void from_json(const nlohmann::json &j, AuthenticationSubscription &o);

protected:
  AuthMethod m_AuthenticationMethod;

  std::string m_EncPermanentKey;
  bool m_EncPermanentKeyIsSet;
  std::string m_ProtectionParameterId;
  bool m_ProtectionParameterIdIsSet;
  SequenceNumber m_SequenceNumber;
  bool m_SequenceNumberIsSet;
  std::string m_AuthenticationManagementField;
  bool m_AuthenticationManagementFieldIsSet;
  std::string m_AlgorithmId;
  bool m_AlgorithmIdIsSet;
  std::string m_EncOpcKey;
  bool m_EncOpcKeyIsSet;
  std::string m_EncTopcKey;
  bool m_EncTopcKeyIsSet;
  bool m_VectorGenerationInHss;
  bool m_VectorGenerationInHssIsSet;
  std::string m_HssGroupId;
  bool m_HssGroupIdIsSet;
  AuthMethod m_N5gcAuthMethod;
  bool m_N5gcAuthMethodIsSet;
  bool m_RgAuthenticationInd;
  bool m_RgAuthenticationIndIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  bool m_AkmaAllowed;
  bool m_AkmaAllowedIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AuthenticationSubscription_H_ */
