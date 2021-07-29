/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.3.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PartitioningCriteriaRm.h
 *
 *
 */

#ifndef PartitioningCriteriaRm_H_
#define PartitioningCriteriaRm_H_

#include "NullValue.h"
#include "PartitioningCriteria.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PartitioningCriteriaRm {
public:
  PartitioningCriteriaRm();
  virtual ~PartitioningCriteriaRm();

  void validate();

  /////////////////////////////////////////////
  /// PartitioningCriteriaRm members

  friend void to_json(nlohmann::json &j, const PartitioningCriteriaRm &o);
  friend void from_json(const nlohmann::json &j, PartitioningCriteriaRm &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PartitioningCriteriaRm_H_ */
