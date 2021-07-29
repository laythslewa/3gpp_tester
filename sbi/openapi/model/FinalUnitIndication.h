/**
 * Nchf_ConvergedCharging
 * ConvergedCharging Service    © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 3.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FinalUnitIndication.h
 *
 *
 */

#ifndef FinalUnitIndication_H_
#define FinalUnitIndication_H_

#include "FinalUnitAction.h"
#include "RedirectServer.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class FinalUnitIndication {
public:
  FinalUnitIndication();
  virtual ~FinalUnitIndication();

  void validate();

  /////////////////////////////////////////////
  /// FinalUnitIndication members

  /// <summary>
  ///
  /// </summary>
  FinalUnitAction getFinalUnitAction() const;
  void setFinalUnitAction(FinalUnitAction const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getRestrictionFilterRule() const;
  void setRestrictionFilterRule(std::string const &value);
  bool restrictionFilterRuleIsSet() const;
  void unsetRestrictionFilterRule();
  /// <summary>
  ///
  /// </summary>
  std::string getFilterId() const;
  void setFilterId(std::string const &value);
  bool filterIdIsSet() const;
  void unsetFilterId();
  /// <summary>
  ///
  /// </summary>
  RedirectServer getRedirectServer() const;
  void setRedirectServer(RedirectServer const &value);
  bool redirectServerIsSet() const;
  void unsetRedirectServer();

  friend void to_json(nlohmann::json &j, const FinalUnitIndication &o);
  friend void from_json(const nlohmann::json &j, FinalUnitIndication &o);

protected:
  FinalUnitAction m_FinalUnitAction;

  std::string m_RestrictionFilterRule;
  bool m_RestrictionFilterRuleIsSet;
  std::string m_FilterId;
  bool m_FilterIdIsSet;
  RedirectServer m_RedirectServer;
  bool m_RedirectServerIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FinalUnitIndication_H_ */