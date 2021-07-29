/**
 * Nhss_imsUECM
 * Nhss UE Context Management Service for IMS. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ScscfRestorationInfoResponse.h
 *
 * S-CSCF restoration information response
 */

#ifndef ScscfRestorationInfoResponse_H_
#define ScscfRestorationInfoResponse_H_

#include "ScscfRestorationInfo.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// S-CSCF restoration information response
/// </summary>
class ScscfRestorationInfoResponse {
public:
  ScscfRestorationInfoResponse();
  virtual ~ScscfRestorationInfoResponse();

  void validate();

  /////////////////////////////////////////////
  /// ScscfRestorationInfoResponse members

  /// <summary>
  ///
  /// </summary>
  std::vector<ScscfRestorationInfo> &getScscfRestorationInfoResponse();
  void setScscfRestorationInfoResponse(
      std::vector<ScscfRestorationInfo> const &value);
  bool scscfRestorationInfoResponseIsSet() const;
  void unsetScscfRestorationInfoResponse();

  friend void to_json(nlohmann::json &j, const ScscfRestorationInfoResponse &o);
  friend void from_json(const nlohmann::json &j,
                        ScscfRestorationInfoResponse &o);

protected:
  std::vector<ScscfRestorationInfo> m_ScscfRestorationInfoResponse;
  bool m_ScscfRestorationInfoResponseIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ScscfRestorationInfoResponse_H_ */