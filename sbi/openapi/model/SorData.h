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
 * SorData.h
 *
 * Used to store the status of the latest SOR data update.
 */

#ifndef SorData_H_
#define SorData_H_

#include "UeUpdateStatus.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Used to store the status of the latest SOR data update.
/// </summary>
class SorData {
public:
  SorData();
  virtual ~SorData();

  void validate();

  /////////////////////////////////////////////
  /// SorData members

  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getProvisioningTime() const;
  void setProvisioningTime(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  UeUpdateStatus getUeUpdateStatus() const;
  void setUeUpdateStatus(UeUpdateStatus const &value);
  /// <summary>
  /// MAC value for protecting SOR procedure (SoR-MAC-IAUSF and SoR-XMAC-IUE).
  /// </summary>
  std::string getSorXmacIue() const;
  void setSorXmacIue(std::string const &value);
  bool sorXmacIueIsSet() const;
  void unsetSorXmacIue();
  /// <summary>
  /// MAC value for protecting SOR procedure (SoR-MAC-IAUSF and SoR-XMAC-IUE).
  /// </summary>
  std::string getSorMacIue() const;
  void setSorMacIue(std::string const &value);
  bool sorMacIueIsSet() const;
  void unsetSorMacIue();

  friend void to_json(nlohmann::json &j, const SorData &o);
  friend void from_json(const nlohmann::json &j, SorData &o);

protected:
  std::string m_ProvisioningTime;

  UeUpdateStatus m_UeUpdateStatus;

  std::string m_SorXmacIue;
  bool m_SorXmacIueIsSet;
  std::string m_SorMacIue;
  bool m_SorMacIueIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SorData_H_ */
