/**
 * CAPIF_Routing_Info_API
 * API for Routing information. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CustomOperation.h
 *
 * Represents the description of a custom operation.
 */

#ifndef CustomOperation_H_
#define CustomOperation_H_

#include "CommunicationType.h"
#include "Operation.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the description of a custom operation.
/// </summary>
class CustomOperation {
public:
  CustomOperation();
  virtual ~CustomOperation();

  void validate();

  /////////////////////////////////////////////
  /// CustomOperation members

  /// <summary>
  ///
  /// </summary>
  CommunicationType getCommType() const;
  void setCommType(CommunicationType const &value);
  /// <summary>
  /// it is set as {custOpName} part of the URI structure for a custom operation
  /// without resource association as defined in subclause 4.4 of 3GPP
  /// TS 29.501.
  /// </summary>
  std::string getCustOpName() const;
  void setCustOpName(std::string const &value);
  /// <summary>
  /// Supported HTTP methods for the API resource. Only applicable when the
  /// protocol in AefProfile indicates HTTP.
  /// </summary>
  std::vector<Operation> &getOperations();
  void setOperations(std::vector<Operation> const &value);
  bool operationsIsSet() const;
  void unsetOperations();
  /// <summary>
  /// Text description of the custom operation
  /// </summary>
  std::string getDescription() const;
  void setDescription(std::string const &value);
  bool descriptionIsSet() const;
  void unsetDescription();

  friend void to_json(nlohmann::json &j, const CustomOperation &o);
  friend void from_json(const nlohmann::json &j, CustomOperation &o);

protected:
  CommunicationType m_CommType;

  std::string m_CustOpName;

  std::vector<Operation> m_Operations;
  bool m_OperationsIsSet;
  std::string m_Description;
  bool m_DescriptionIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CustomOperation_H_ */
