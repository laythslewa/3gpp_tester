/**
 * 3gpp-nidd
 * API for non IP data delivery. © 2021, 3GPP Organizational Partners (ARIB,
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
 * ManageEntity.h
 *
 * Possible values are - UE: Representing the UE. - AS: Representing the
 * Application Server.
 */

#ifndef ManageEntity_H_
#define ManageEntity_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - UE: Representing the UE. - AS: Representing the
/// Application Server.
/// </summary>
class ManageEntity {
public:
  ManageEntity();
  virtual ~ManageEntity();

  void validate();

  /////////////////////////////////////////////
  /// ManageEntity members

  friend void to_json(nlohmann::json &j, const ManageEntity &o);
  friend void from_json(const nlohmann::json &j, ManageEntity &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ManageEntity_H_ */
