/**
 * 3gpp-service-parameter
 * API for AF service paramter © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceParameterDataPatch.h
 *
 * Represents the parameters to request the modification of a service parameter
 * subscription resource.
 */

#ifndef ServiceParameterDataPatch_H_
#define ServiceParameterDataPatch_H_

#include "UrspRuleRequest.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the parameters to request the modification of a service parameter
/// subscription resource.
/// </summary>
class ServiceParameterDataPatch {
public:
  ServiceParameterDataPatch();
  virtual ~ServiceParameterDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// ServiceParameterDataPatch members

  /// <summary>
  /// Represents the same as the ParameterOverPc5 data type but with the
  /// nullable:true property.
  /// </summary>
  std::string getParamOverPc5() const;
  void setParamOverPc5(std::string const &value);
  bool paramOverPc5IsSet() const;
  void unsetParamOverPc5();
  /// <summary>
  /// Represents the same as the ParameterOverUu data type but with the
  /// nullable:true property.
  /// </summary>
  std::string getParamOverUu() const;
  void setParamOverUu(std::string const &value);
  bool paramOverUuIsSet() const;
  void unsetParamOverUu();
  /// <summary>
  /// This data type is defined in the same way as the ParamForProSeDd data
  /// type, but with the OpenAPI nullable property set to true.
  /// </summary>
  std::string getParamForProSeDd() const;
  void setParamForProSeDd(std::string const &value);
  bool paramForProSeDdIsSet() const;
  void unsetParamForProSeDd();
  /// <summary>
  /// This data type is defined in the same way as the ParamForProSeDc data
  /// type, but with the OpenAPI nullable property set to true.
  /// </summary>
  std::string getParamForProSeDc() const;
  void setParamForProSeDc(std::string const &value);
  bool paramForProSeDcIsSet() const;
  void unsetParamForProSeDc();
  /// <summary>
  /// This data type is defined in the same way as the ParamForProSeU2N data
  /// type, but with the OpenAPI nullable property set to true.
  /// </summary>
  std::string getParamForProSeU2N() const;
  void setParamForProSeU2N(std::string const &value);
  bool paramForProSeU2NIsSet() const;
  void unsetParamForProSeU2N();
  /// <summary>
  /// This data type is defined in the same way as the ParamForProSeUsageRep
  /// data type, but with the OpenAPI nullable property set to true.
  /// </summary>
  std::string getParamForProSeUsageRep() const;
  void setParamForProSeUsageRep(std::string const &value);
  bool paramForProSeUsageRepIsSet() const;
  void unsetParamForProSeUsageRep();
  /// <summary>
  /// This data type is defined in the same way as the ParamForProSeServPathSel
  /// data type, but with the OpenAPI nullable property set to true.
  /// </summary>
  std::string getParamForProSeServPathSel() const;
  void setParamForProSeServPathSel(std::string const &value);
  bool paramForProSeServPathSelIsSet() const;
  void unsetParamForProSeServPathSel();
  /// <summary>
  /// Contains the service parameter used to influence the URSP.
  /// </summary>
  std::vector<UrspRuleRequest> &getUrspInfluence();
  void setUrspInfluence(std::vector<UrspRuleRequest> const &value);
  bool urspInfluenceIsSet() const;
  void unsetUrspInfluence();

  friend void to_json(nlohmann::json &j, const ServiceParameterDataPatch &o);
  friend void from_json(const nlohmann::json &j, ServiceParameterDataPatch &o);

protected:
  std::string m_ParamOverPc5;
  bool m_ParamOverPc5IsSet;
  std::string m_ParamOverUu;
  bool m_ParamOverUuIsSet;
  std::string m_ParamForProSeDd;
  bool m_ParamForProSeDdIsSet;
  std::string m_ParamForProSeDc;
  bool m_ParamForProSeDcIsSet;
  std::string m_ParamForProSeU2N;
  bool m_ParamForProSeU2NIsSet;
  std::string m_ParamForProSeUsageRep;
  bool m_ParamForProSeUsageRepIsSet;
  std::string m_ParamForProSeServPathSel;
  bool m_ParamForProSeServPathSelIsSet;
  std::vector<UrspRuleRequest> m_UrspInfluence;
  bool m_UrspInfluenceIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceParameterDataPatch_H_ */
