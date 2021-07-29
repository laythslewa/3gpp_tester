/**
 * Naf_EventExposure
 * AF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceExperienceInfoPerApp.h
 *
 * Contains service experience information associated with an application.
 */

#ifndef ServiceExperienceInfoPerApp_H_
#define ServiceExperienceInfoPerApp_H_

#include "ServiceExperienceInfoPerFlow.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains service experience information associated with an application.
/// </summary>
class ServiceExperienceInfoPerApp {
public:
  ServiceExperienceInfoPerApp();
  virtual ~ServiceExperienceInfoPerApp();

  void validate();

  /////////////////////////////////////////////
  /// ServiceExperienceInfoPerApp members

  /// <summary>
  /// String providing an application identifier.
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const &value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  ///
  /// </summary>
  std::vector<ServiceExperienceInfoPerFlow> &getSvcExpPerFlows();
  void
  setSvcExpPerFlows(std::vector<ServiceExperienceInfoPerFlow> const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getGpsis();
  void setGpsis(std::vector<std::string> const &value);
  bool gpsisIsSet() const;
  void unsetGpsis();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getSupis();
  void setSupis(std::vector<std::string> const &value);
  bool supisIsSet() const;
  void unsetSupis();

  friend void to_json(nlohmann::json &j, const ServiceExperienceInfoPerApp &o);
  friend void from_json(const nlohmann::json &j,
                        ServiceExperienceInfoPerApp &o);

protected:
  std::string m_AppId;
  bool m_AppIdIsSet;
  std::vector<ServiceExperienceInfoPerFlow> m_SvcExpPerFlows;

  std::vector<std::string> m_Gpsis;
  bool m_GpsisIsSet;
  std::vector<std::string> m_Supis;
  bool m_SupisIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceExperienceInfoPerApp_H_ */