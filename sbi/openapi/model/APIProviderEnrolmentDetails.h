/**
 * CAPIF_API_Provider_Management_API
 * API for API provider domain functions management. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * APIProviderEnrolmentDetails.h
 *
 * Represents an API provider domain&#39;s enrolment details.
 */

#ifndef APIProviderEnrolmentDetails_H_
#define APIProviderEnrolmentDetails_H_

#include "APIProviderFunctionDetails.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an API provider domain&#39;s enrolment details.
/// </summary>
class APIProviderEnrolmentDetails {
public:
  APIProviderEnrolmentDetails();
  virtual ~APIProviderEnrolmentDetails();

  void validate();

  /////////////////////////////////////////////
  /// APIProviderEnrolmentDetails members

  /// <summary>
  /// API provider domain ID assigned by the CAPIF core function to the API
  /// management function while registering the API provider domain. Shall not
  /// be present in the HTTP POST request from the API Management function to
  /// the CAPIF core function, to on-board itself. Shall be present in all other
  /// HTTP requests and responses.
  /// </summary>
  std::string getApiProvDomId() const;
  void setApiProvDomId(std::string const &value);
  bool apiProvDomIdIsSet() const;
  void unsetApiProvDomId();
  /// <summary>
  /// Security information necessary for the CAPIF core function to validate the
  /// registration of the API provider domain. Shall be present in HTTP POST
  /// request from API management function to CAPIF core function for API
  /// provider domain registration.
  /// </summary>
  std::string getRegSec() const;
  void setRegSec(std::string const &value);
  /// <summary>
  /// A list of individual API provider domain functions details. When included
  /// by the API management function in the HTTP request message, it lists the
  /// API provider domain functions that the API management function intends to
  /// register/update in registration or update registration procedure. When
  /// included by the CAPIF core function in the HTTP response message, it lists
  /// the API domain functions details that are registered or updated
  /// successfully.
  /// </summary>
  std::vector<APIProviderFunctionDetails> &getApiProvFuncs();
  void setApiProvFuncs(std::vector<APIProviderFunctionDetails> const &value);
  bool apiProvFuncsIsSet() const;
  void unsetApiProvFuncs();
  /// <summary>
  /// Generic information related to the API provider domain such as details of
  /// the API provider applications.
  /// </summary>
  std::string getApiProvDomInfo() const;
  void setApiProvDomInfo(std::string const &value);
  bool apiProvDomInfoIsSet() const;
  void unsetApiProvDomInfo();
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
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();
  /// <summary>
  /// Registration or update specific failure information of failed API provider
  /// domain function registrations.Shall be present in the HTTP response body
  /// if atleast one of the API provider domain function registration or update
  /// registration fails.
  /// </summary>
  std::string getFailReason() const;
  void setFailReason(std::string const &value);
  bool failReasonIsSet() const;
  void unsetFailReason();

  friend void to_json(nlohmann::json &j, const APIProviderEnrolmentDetails &o);
  friend void from_json(const nlohmann::json &j,
                        APIProviderEnrolmentDetails &o);

protected:
  std::string m_ApiProvDomId;
  bool m_ApiProvDomIdIsSet;
  std::string m_RegSec;

  std::vector<APIProviderFunctionDetails> m_ApiProvFuncs;
  bool m_ApiProvFuncsIsSet;
  std::string m_ApiProvDomInfo;
  bool m_ApiProvDomInfoIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
  std::string m_FailReason;
  bool m_FailReasonIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* APIProviderEnrolmentDetails_H_ */
