/**
 * Npcf_PolicyAuthorization Service API
 * PCF Policy Authorization Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AppSessionContextUpdateDataPatch.h
 *
 * Identifies the modifications to an Individual Application Session Context
 * and/or the modifications to the sub-resource Events Subscription.
 */

#ifndef AppSessionContextUpdateDataPatch_H_
#define AppSessionContextUpdateDataPatch_H_

#include "AppSessionContextUpdateData.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Identifies the modifications to an Individual Application Session Context
/// and/or the modifications to the sub-resource Events Subscription.
/// </summary>
class AppSessionContextUpdateDataPatch {
public:
  AppSessionContextUpdateDataPatch();
  virtual ~AppSessionContextUpdateDataPatch();

  void validate();

  /////////////////////////////////////////////
  /// AppSessionContextUpdateDataPatch members

  /// <summary>
  ///
  /// </summary>
  AppSessionContextUpdateData getAscReqData() const;
  void setAscReqData(AppSessionContextUpdateData const &value);
  bool ascReqDataIsSet() const;
  void unsetAscReqData();

  friend void to_json(nlohmann::json &j,
                      const AppSessionContextUpdateDataPatch &o);
  friend void from_json(const nlohmann::json &j,
                        AppSessionContextUpdateDataPatch &o);

protected:
  AppSessionContextUpdateData m_AscReqData;
  bool m_AscReqDataIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AppSessionContextUpdateDataPatch_H_ */