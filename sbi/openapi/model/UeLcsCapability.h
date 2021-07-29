/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UeLcsCapability.h
 *
 * Indicates the LCS capability supported by the UE..
 */

#ifndef UeLcsCapability_H_
#define UeLcsCapability_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Indicates the LCS capability supported by the UE..
/// </summary>
class UeLcsCapability {
public:
  UeLcsCapability();
  virtual ~UeLcsCapability();

  void validate();

  /////////////////////////////////////////////
  /// UeLcsCapability members

  /// <summary>
  ///
  /// </summary>
  bool isLppSupport() const;
  void setLppSupport(bool const value);
  bool lppSupportIsSet() const;
  void unsetLppSupport();
  /// <summary>
  ///
  /// </summary>
  bool isCiotOptimisation() const;
  void setCiotOptimisation(bool const value);
  bool ciotOptimisationIsSet() const;
  void unsetCiotOptimisation();

  friend void to_json(nlohmann::json &j, const UeLcsCapability &o);
  friend void from_json(const nlohmann::json &j, UeLcsCapability &o);

protected:
  bool m_LppSupport;
  bool m_LppSupportIsSet;
  bool m_CiotOptimisation;
  bool m_CiotOptimisationIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeLcsCapability_H_ */