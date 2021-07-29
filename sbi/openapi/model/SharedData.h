/**
 * Nhss_imsSDM
 * Nhss Subscriber Data Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SharedData.h
 *
 *
 */

#ifndef SharedData_H_
#define SharedData_H_

#include "Ifcs.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class SharedData {
public:
  SharedData();
  virtual ~SharedData();

  void validate();

  /////////////////////////////////////////////
  /// SharedData members

  /// <summary>
  ///
  /// </summary>
  std::string getSharedDataId() const;
  void setSharedDataId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  Ifcs getSharedImsIfcData() const;
  void setSharedImsIfcData(Ifcs const &value);
  bool sharedImsIfcDataIsSet() const;
  void unsetSharedImsIfcData();

  friend void to_json(nlohmann::json &j, const SharedData &o);
  friend void from_json(const nlohmann::json &j, SharedData &o);

protected:
  std::string m_SharedDataId;

  Ifcs m_SharedImsIfcData;
  bool m_SharedImsIfcDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SharedData_H_ */