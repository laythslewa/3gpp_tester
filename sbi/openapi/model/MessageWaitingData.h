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
 * MessageWaitingData.h
 *
 * Message Waiting Data list.
 */

#ifndef MessageWaitingData_H_
#define MessageWaitingData_H_

#include "SmscData.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Message Waiting Data list.
/// </summary>
class MessageWaitingData {
public:
  MessageWaitingData();
  virtual ~MessageWaitingData();

  void validate();

  /////////////////////////////////////////////
  /// MessageWaitingData members

  /// <summary>
  ///
  /// </summary>
  std::vector<SmscData> &getMwdList();
  void setMwdList(std::vector<SmscData> const &value);
  bool mwdListIsSet() const;
  void unsetMwdList();

  friend void to_json(nlohmann::json &j, const MessageWaitingData &o);
  friend void from_json(const nlohmann::json &j, MessageWaitingData &o);

protected:
  std::vector<SmscData> m_MwdList;
  bool m_MwdListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MessageWaitingData_H_ */