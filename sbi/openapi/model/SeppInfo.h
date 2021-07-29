/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SeppInfo.h
 *
 * Information of a SEPP Instance
 */

#ifndef SeppInfo_H_
#define SeppInfo_H_

#include "PlmnId.h"
#include <map>
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information of a SEPP Instance
/// </summary>
class SeppInfo {
public:
  SeppInfo();
  virtual ~SeppInfo();

  void validate();

  /////////////////////////////////////////////
  /// SeppInfo members

  /// <summary>
  /// Port numbers for HTTP and HTTPS. The key of the map shall be
  /// \&quot;http\&quot; or \&quot;https\&quot;
  /// </summary>
  std::map<std::string, int32_t> &getSeppPorts();
  void setSeppPorts(std::map<std::string, int32_t> const value);
  bool seppPortsIsSet() const;
  void unsetSeppPorts();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnId> &getRemotePlmnList();
  void setRemotePlmnList(std::vector<PlmnId> const &value);
  bool remotePlmnListIsSet() const;
  void unsetRemotePlmnList();

  friend void to_json(nlohmann::json &j, const SeppInfo &o);
  friend void from_json(const nlohmann::json &j, SeppInfo &o);

protected:
  std::map<std::string, int32_t> m_SeppPorts;
  bool m_SeppPortsIsSet;
  std::vector<PlmnId> m_RemotePlmnList;
  bool m_RemotePlmnListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SeppInfo_H_ */
