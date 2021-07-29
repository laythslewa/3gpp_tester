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
 * MtcProvider.h
 *
 * MTC provider information.
 */

#ifndef MtcProvider_H_
#define MtcProvider_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// MTC provider information.
/// </summary>
class MtcProvider {
public:
  MtcProvider();
  virtual ~MtcProvider();

  void validate();

  /////////////////////////////////////////////
  /// MtcProvider members

  /// <summary>
  /// String uniquely identifying MTC provider information.
  /// </summary>
  std::string getMtcProviderInformation() const;
  void setMtcProviderInformation(std::string const &value);
  bool mtcProviderInformationIsSet() const;
  void unsetMtcProviderInformation();
  /// <summary>
  ///
  /// </summary>
  std::string getAfId() const;
  void setAfId(std::string const &value);
  bool afIdIsSet() const;
  void unsetAfId();

  friend void to_json(nlohmann::json &j, const MtcProvider &o);
  friend void from_json(const nlohmann::json &j, MtcProvider &o);

protected:
  std::string m_MtcProviderInformation;
  bool m_MtcProviderInformationIsSet;
  std::string m_AfId;
  bool m_AfIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MtcProvider_H_ */
