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
 * PublicIdentities.h
 *
 *
 */

#ifndef PublicIdentities_H_
#define PublicIdentities_H_

#include "PublicIdentity.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PublicIdentities {
public:
  PublicIdentities();
  virtual ~PublicIdentities();

  void validate();

  /////////////////////////////////////////////
  /// PublicIdentities members

  /// <summary>
  ///
  /// </summary>
  std::vector<PublicIdentity> &getPublicIdentities();
  void setPublicIdentities(std::vector<PublicIdentity> const &value);

  friend void to_json(nlohmann::json &j, const PublicIdentities &o);
  friend void from_json(const nlohmann::json &j, PublicIdentities &o);

protected:
  std::vector<PublicIdentity> m_PublicIdentities;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PublicIdentities_H_ */