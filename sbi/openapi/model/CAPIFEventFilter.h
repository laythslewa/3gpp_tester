/**
 * CAPIF_Events_API
 * API for event subscription management. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CAPIFEventFilter.h
 *
 * Represents a CAPIF event filter.
 */

#ifndef CAPIFEventFilter_H_
#define CAPIFEventFilter_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a CAPIF event filter.
/// </summary>
class CAPIFEventFilter {
public:
  CAPIFEventFilter();
  virtual ~CAPIFEventFilter();

  void validate();

  /////////////////////////////////////////////
  /// CAPIFEventFilter members

  /// <summary>
  /// Identifier of the service API
  /// </summary>
  std::vector<std::string> &getApiIds();
  void setApiIds(std::vector<std::string> const &value);
  bool apiIdsIsSet() const;
  void unsetApiIds();
  /// <summary>
  /// Identity of the API invoker
  /// </summary>
  std::vector<std::string> &getApiInvokerIds();
  void setApiInvokerIds(std::vector<std::string> const &value);
  bool apiInvokerIdsIsSet() const;
  void unsetApiInvokerIds();
  /// <summary>
  /// Identifier of the API exposing function
  /// </summary>
  std::vector<std::string> &getAefIds();
  void setAefIds(std::vector<std::string> const &value);
  bool aefIdsIsSet() const;
  void unsetAefIds();

  friend void to_json(nlohmann::json &j, const CAPIFEventFilter &o);
  friend void from_json(const nlohmann::json &j, CAPIFEventFilter &o);

protected:
  std::vector<std::string> m_ApiIds;
  bool m_ApiIdsIsSet;
  std::vector<std::string> m_ApiInvokerIds;
  bool m_ApiInvokerIdsIsSet;
  std::vector<std::string> m_AefIds;
  bool m_AefIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CAPIFEventFilter_H_ */