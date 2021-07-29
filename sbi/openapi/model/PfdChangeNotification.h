/**
 * Nnef_PFDmanagement Service API
 * Packet Flow Description Management Service. © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PfdChangeNotification.h
 *
 * Represents information related to a notification of PFD change.
 */

#ifndef PfdChangeNotification_H_
#define PfdChangeNotification_H_

#include "PfdContent.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents information related to a notification of PFD change.
/// </summary>
class PfdChangeNotification {
public:
  PfdChangeNotification();
  virtual ~PfdChangeNotification();

  void validate();

  /////////////////////////////////////////////
  /// PfdChangeNotification members

  /// <summary>
  /// String providing an application identifier.
  /// </summary>
  std::string getApplicationId() const;
  void setApplicationId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  bool isRemovalFlag() const;
  void setRemovalFlag(bool const value);
  bool removalFlagIsSet() const;
  void unsetRemovalFlag();
  /// <summary>
  ///
  /// </summary>
  bool isPartialFlag() const;
  void setPartialFlag(bool const value);
  bool partialFlagIsSet() const;
  void unsetPartialFlag();
  /// <summary>
  ///
  /// </summary>
  std::vector<PfdContent> &getPfds();
  void setPfds(std::vector<PfdContent> const &value);
  bool pfdsIsSet() const;
  void unsetPfds();

  friend void to_json(nlohmann::json &j, const PfdChangeNotification &o);
  friend void from_json(const nlohmann::json &j, PfdChangeNotification &o);

protected:
  std::string m_ApplicationId;

  bool m_RemovalFlag;
  bool m_RemovalFlagIsSet;
  bool m_PartialFlag;
  bool m_PartialFlagIsSet;
  std::vector<PfdContent> m_Pfds;
  bool m_PfdsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* PfdChangeNotification_H_ */