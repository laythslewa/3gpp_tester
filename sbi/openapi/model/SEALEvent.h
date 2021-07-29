/**
 * SS_Events
 * API for SEAL Events management. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SEALEvent.h
 *
 * Possible values are - LM_LOCATION_INFO_CHANGE: Events related to the location
 * information of VAL Users or VAL UEs from the Location Management Server. -
 * GM_GROUP_INFO_CHANGE: Events related to the modification of VAL group
 * membership and configuration information from the Group Management Server. -
 * CM_USER_PROFILE_CHANGE: Events related to update of user profile information
 * from the Configuration Management Server. - GM_GROUP_CREATE: Events related
 * to creation of new VAL groups from the Group Mananagement Server.
 */

#ifndef SEALEvent_H_
#define SEALEvent_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Possible values are - LM_LOCATION_INFO_CHANGE: Events related to the
/// location information of VAL Users or VAL UEs from the Location Management
/// Server. - GM_GROUP_INFO_CHANGE: Events related to the modification of VAL
/// group membership and configuration information from the Group Management
/// Server. - CM_USER_PROFILE_CHANGE: Events related to update of user profile
/// information from the Configuration Management Server. - GM_GROUP_CREATE:
/// Events related to creation of new VAL groups from the Group Mananagement
/// Server.
/// </summary>
class SEALEvent {
public:
  SEALEvent();
  virtual ~SEALEvent();

  void validate();

  /////////////////////////////////////////////
  /// SEALEvent members

  friend void to_json(nlohmann::json &j, const SEALEvent &o);
  friend void from_json(const nlohmann::json &j, SEALEvent &o);

protected:
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SEALEvent_H_ */