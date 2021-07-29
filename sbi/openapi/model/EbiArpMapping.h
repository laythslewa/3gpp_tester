/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EbiArpMapping.h
 *
 * EBI to ARP mapping
 */

#ifndef EbiArpMapping_H_
#define EbiArpMapping_H_

#include "Arp.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// EBI to ARP mapping
/// </summary>
class EbiArpMapping {
public:
  EbiArpMapping();
  virtual ~EbiArpMapping();

  void validate();

  /////////////////////////////////////////////
  /// EbiArpMapping members

  /// <summary>
  /// EPS Bearer Identifier
  /// </summary>
  int32_t getEpsBearerId() const;
  void setEpsBearerId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  Arp getArp() const;
  void setArp(Arp const &value);

  friend void to_json(nlohmann::json &j, const EbiArpMapping &o);
  friend void from_json(const nlohmann::json &j, EbiArpMapping &o);

protected:
  int32_t m_EpsBearerId;

  Arp m_Arp;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EbiArpMapping_H_ */
