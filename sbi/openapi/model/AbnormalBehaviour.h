/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AbnormalBehaviour.h
 *
 * Represents the abnormal behaviour information.
 */

#ifndef AbnormalBehaviour_H_
#define AbnormalBehaviour_H_

#include "AdditionalMeasurement.h"
#include "Exception.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the abnormal behaviour information.
/// </summary>
class AbnormalBehaviour {
public:
  AbnormalBehaviour();
  virtual ~AbnormalBehaviour();

  void validate();

  /////////////////////////////////////////////
  /// AbnormalBehaviour members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getSupis();
  void setSupis(std::vector<std::string> const &value);
  bool supisIsSet() const;
  void unsetSupis();
  /// <summary>
  ///
  /// </summary>
  Exception getExcep() const;
  void setExcep(Exception const &value);
  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const &value);
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  Snssai getSnssai() const;
  void setSnssai(Snssai const &value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  /// Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP
  /// TS 23.502), expressed in percent.
  /// </summary>
  int32_t getRatio() const;
  void setRatio(int32_t const value);
  bool ratioIsSet() const;
  void unsetRatio();
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  bool confidenceIsSet() const;
  void unsetConfidence();
  /// <summary>
  ///
  /// </summary>
  AdditionalMeasurement getAddtMeasInfo() const;
  void setAddtMeasInfo(AdditionalMeasurement const &value);
  bool addtMeasInfoIsSet() const;
  void unsetAddtMeasInfo();

  friend void to_json(nlohmann::json &j, const AbnormalBehaviour &o);
  friend void from_json(const nlohmann::json &j, AbnormalBehaviour &o);

protected:
  std::vector<std::string> m_Supis;
  bool m_SupisIsSet;
  Exception m_Excep;

  std::string m_Dnn;
  bool m_DnnIsSet;
  Snssai m_Snssai;
  bool m_SnssaiIsSet;
  int32_t m_Ratio;
  bool m_RatioIsSet;
  int32_t m_Confidence;
  bool m_ConfidenceIsSet;
  AdditionalMeasurement m_AddtMeasInfo;
  bool m_AddtMeasInfoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AbnormalBehaviour_H_ */