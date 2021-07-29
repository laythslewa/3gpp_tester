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
 * EventSubscription.h
 *
 * Represents the subscription to a single SEAL event.
 */

#ifndef EventSubscription_H_
#define EventSubscription_H_

#include "IdentityFilter.h"
#include "SEALEvent.h"
#include "VALGroupFilter.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents the subscription to a single SEAL event.
/// </summary>
class EventSubscription {
public:
  EventSubscription();
  virtual ~EventSubscription();

  void validate();

  /////////////////////////////////////////////
  /// EventSubscription members

  /// <summary>
  ///
  /// </summary>
  SEALEvent getEventId() const;
  void setEventId(SEALEvent const &value);
  /// <summary>
  /// Each element of the array represents the VAL group identifier(s) of a VAL
  /// service that the subscriber wants to know in the interested event.
  /// </summary>
  std::vector<VALGroupFilter> &getValGroups();
  void setValGroups(std::vector<VALGroupFilter> const &value);
  bool valGroupsIsSet() const;
  void unsetValGroups();
  /// <summary>
  /// Each element of the array represents the VAL User / UE IDs of a VAL
  /// service that the event subscriber wants to know in the interested event.
  /// </summary>
  std::vector<IdentityFilter> &getIdentities();
  void setIdentities(std::vector<IdentityFilter> const &value);
  bool identitiesIsSet() const;
  void unsetIdentities();

  friend void to_json(nlohmann::json &j, const EventSubscription &o);
  friend void from_json(const nlohmann::json &j, EventSubscription &o);

protected:
  SEALEvent m_EventId;

  std::vector<VALGroupFilter> m_ValGroups;
  bool m_ValGroupsIsSet;
  std::vector<IdentityFilter> m_Identities;
  bool m_IdentitiesIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventSubscription_H_ */
