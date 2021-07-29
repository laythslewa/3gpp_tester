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
 * PsUserState.h
 *
 *
 */

#ifndef PsUserState_H_
#define PsUserState_H_

#include "UserStatePs.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class PsUserState {
public:
  PsUserState();
  virtual ~PsUserState();

  void validate();

  /////////////////////////////////////////////
  /// PsUserState members

  /// <summary>
  ///
  /// </summary>
  UserStatePs getSgsnUserState() const;
  void setSgsnUserState(UserStatePs const &value);
  bool sgsnUserStateIsSet() const;
  void unsetSgsnUserState();
  /// <summary>
  ///
  /// </summary>
  UserStatePs getMmeUserState() const;
  void setMmeUserState(UserStatePs const &value);
  bool mmeUserStateIsSet() const;
  void unsetMmeUserState();
  /// <summary>
  ///
  /// </summary>
  UserStatePs getAmfUserState() const;
  void setAmfUserState(UserStatePs const &value);
  bool amfUserStateIsSet() const;
  void unsetAmfUserState();

  friend void to_json(nlohmann::json &j, const PsUserState &o);
  friend void from_json(const nlohmann::json &j, PsUserState &o);

protected:
  UserStatePs m_SgsnUserState;
  bool m_SgsnUserStateIsSet;
  UserStatePs m_MmeUserState;
  bool m_MmeUserStateIsSet;
  UserStatePs m_AmfUserState;
  bool m_AmfUserStateIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PsUserState_H_ */