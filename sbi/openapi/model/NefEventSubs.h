/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NefEventSubs.h
 *
 * Represents an event to be subscribed and the related event filter
 * information.
 */

#ifndef NefEventSubs_H_
#define NefEventSubs_H_

#include "NefEvent.h"
#include "NefEventFilter.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an event to be subscribed and the related event filter
/// information.
/// </summary>
class NefEventSubs {
public:
  NefEventSubs();
  virtual ~NefEventSubs();

  void validate();

  /////////////////////////////////////////////
  /// NefEventSubs members

  /// <summary>
  ///
  /// </summary>
  NefEvent getEvent() const;
  void setEvent(NefEvent const &value);
  /// <summary>
  ///
  /// </summary>
  NefEventFilter getEventFilter() const;
  void setEventFilter(NefEventFilter const &value);
  bool eventFilterIsSet() const;
  void unsetEventFilter();

  friend void to_json(nlohmann::json &j, const NefEventSubs &o);
  friend void from_json(const nlohmann::json &j, NefEventSubs &o);

protected:
  NefEvent m_Event;

  NefEventFilter m_EventFilter;
  bool m_EventFilterIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NefEventSubs_H_ */
