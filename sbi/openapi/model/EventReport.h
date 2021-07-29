/**
 * TS 29.122 Common Data Types
 * Data types applicable to several APIs. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EventReport.h
 *
 * Represents an event report.
 */

#ifndef EventReport_H_
#define EventReport_H_

#include "AccumulatedUsage.h"
#include "Event.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an event report.
/// </summary>
class EventReport {
public:
  EventReport();
  virtual ~EventReport();

  void validate();

  /////////////////////////////////////////////
  /// EventReport members

  /// <summary>
  ///
  /// </summary>
  Event getEvent() const;
  void setEvent(Event const &value);
  /// <summary>
  ///
  /// </summary>
  AccumulatedUsage getAccumulatedUsage() const;
  void setAccumulatedUsage(AccumulatedUsage const &value);
  bool accumulatedUsageIsSet() const;
  void unsetAccumulatedUsage();
  /// <summary>
  /// Identifies the IP flows that were sent during event subscription
  /// </summary>
  std::vector<int32_t> &getFlowIds();
  void setFlowIds(std::vector<int32_t> const value);
  bool flowIdsIsSet() const;
  void unsetFlowIds();

  friend void to_json(nlohmann::json &j, const EventReport &o);
  friend void from_json(const nlohmann::json &j, EventReport &o);

protected:
  Event m_Event;

  AccumulatedUsage m_AccumulatedUsage;
  bool m_AccumulatedUsageIsSet;
  std::vector<int32_t> m_FlowIds;
  bool m_FlowIdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* EventReport_H_ */