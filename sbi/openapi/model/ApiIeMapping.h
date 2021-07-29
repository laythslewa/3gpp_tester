/**
 * N32 Handshake API
 * N32-c Handshake Service.  © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).  All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ApiIeMapping.h
 *
 * API URI to IE mapping on which the protection policy needs to be applied
 */

#ifndef ApiIeMapping_H_
#define ApiIeMapping_H_

#include "ApiSignature.h"
#include "HttpMethod.h"
#include "IeInfo.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// API URI to IE mapping on which the protection policy needs to be applied
/// </summary>
class ApiIeMapping {
public:
  ApiIeMapping();
  virtual ~ApiIeMapping();

  void validate();

  /////////////////////////////////////////////
  /// ApiIeMapping members

  /// <summary>
  ///
  /// </summary>
  ApiSignature getApiSignature() const;
  void setApiSignature(ApiSignature const &value);
  /// <summary>
  ///
  /// </summary>
  HttpMethod getApiMethod() const;
  void setApiMethod(HttpMethod const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<IeInfo> &getIeList();
  void setIeList(std::vector<IeInfo> const &value);

  friend void to_json(nlohmann::json &j, const ApiIeMapping &o);
  friend void from_json(const nlohmann::json &j, ApiIeMapping &o);

protected:
  ApiSignature m_ApiSignature;

  HttpMethod m_ApiMethod;

  std::vector<IeInfo> m_IeList;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ApiIeMapping_H_ */