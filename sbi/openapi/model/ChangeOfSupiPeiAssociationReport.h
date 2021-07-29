/**
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ChangeOfSupiPeiAssociationReport.h
 *
 *
 */

#ifndef ChangeOfSupiPeiAssociationReport_H_
#define ChangeOfSupiPeiAssociationReport_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ChangeOfSupiPeiAssociationReport {
public:
  ChangeOfSupiPeiAssociationReport();
  virtual ~ChangeOfSupiPeiAssociationReport();

  void validate();

  /////////////////////////////////////////////
  /// ChangeOfSupiPeiAssociationReport members

  /// <summary>
  /// String representing a Permanent Equipment Identifier that may contain - an
  /// IMEI or IMEISV, as specified in clause 6.2 of 3GPP TS 23.003; a MAC
  /// address for a 5G-RG or FN-RG via wireline access, with an indication that
  /// this address cannot be trusted for regulatory purpose if this address
  /// cannot be used as an Equipment Identifier of the FN-RG, as specified in
  /// clause 4.7.7 of 3GPP TS23.316. Examples are imei-012345678901234 or
  /// imeisv-0123456789012345.
  /// </summary>
  std::string getNewPei() const;
  void setNewPei(std::string const &value);

  friend void to_json(nlohmann::json &j,
                      const ChangeOfSupiPeiAssociationReport &o);
  friend void from_json(const nlohmann::json &j,
                        ChangeOfSupiPeiAssociationReport &o);

protected:
  std::string m_NewPei;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ChangeOfSupiPeiAssociationReport_H_ */
