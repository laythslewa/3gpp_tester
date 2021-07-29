/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * PartitioningCriteria.h
 *
 * Possible values are - \&quot;TAC\&quot;: Type Allocation Code -
 * \&quot;SUBPLMN\&quot;: Subscriber PLMN ID - \&quot;GEOAREA\&quot;:
 * Geographical area, i.e. list(s) of TAI(s) - \&quot;SNSSAI\&quot;: S-NSSAI -
 * \&quot;DNN\&quot;: DNN
 */

#ifndef PartitioningCriteria_H_
#define PartitioningCriteria_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - \&quot;TAC\&quot;: Type Allocation Code -
/// \&quot;SUBPLMN\&quot;: Subscriber PLMN ID - \&quot;GEOAREA\&quot;:
/// Geographical area, i.e. list(s) of TAI(s) - \&quot;SNSSAI\&quot;: S-NSSAI -
/// \&quot;DNN\&quot;: DNN
/// </summary>
class PartitioningCriteria {
public:
  PartitioningCriteria();
  virtual ~PartitioningCriteria();

  void validate();

  /////////////////////////////////////////////
  /// PartitioningCriteria members

  friend void to_json(nlohmann::json &j, const PartitioningCriteria &o);
  friend void from_json(const nlohmann::json &j, PartitioningCriteria &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PartitioningCriteria_H_ */
