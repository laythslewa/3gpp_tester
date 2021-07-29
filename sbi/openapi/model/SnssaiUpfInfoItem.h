/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * SnssaiUpfInfoItem.h
 *
 * Set of parameters supported by UPF for a given S-NSSAI
 */

#ifndef SnssaiUpfInfoItem_H_
#define SnssaiUpfInfoItem_H_

#include "DnnUpfInfoItem.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Set of parameters supported by UPF for a given S-NSSAI
/// </summary>
class SnssaiUpfInfoItem {
public:
  SnssaiUpfInfoItem();
  virtual ~SnssaiUpfInfoItem();

  void validate();

  /////////////////////////////////////////////
  /// SnssaiUpfInfoItem members

  /// <summary>
  ///
  /// </summary>
  Snssai getSNssai() const;
  void setSNssai(Snssai const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<DnnUpfInfoItem> &getDnnUpfInfoList();
  void setDnnUpfInfoList(std::vector<DnnUpfInfoItem> const &value);
  /// <summary>
  ///
  /// </summary>
  bool isRedundantTransport() const;
  void setRedundantTransport(bool const value);
  bool redundantTransportIsSet() const;
  void unsetRedundantTransport();

  friend void to_json(nlohmann::json &j, const SnssaiUpfInfoItem &o);
  friend void from_json(const nlohmann::json &j, SnssaiUpfInfoItem &o);

protected:
  Snssai m_SNssai;

  std::vector<DnnUpfInfoItem> m_DnnUpfInfoList;

  bool m_RedundantTransport;
  bool m_RedundantTransportIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SnssaiUpfInfoItem_H_ */