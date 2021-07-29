/**
 * Unified Data Repository Service API file for policy data
 * The API version is defined in 3GPP TS 29.504 © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DnnRouteSelectionDescriptor.h
 *
 * Contains the route selector parameters (PDU session types, SSC modes and
 * ATSSS information) per DNN
 */

#ifndef DnnRouteSelectionDescriptor_H_
#define DnnRouteSelectionDescriptor_H_

#include "PduSessionType.h"
#include "SscMode.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Contains the route selector parameters (PDU session types, SSC modes and
/// ATSSS information) per DNN
/// </summary>
class DnnRouteSelectionDescriptor {
public:
  DnnRouteSelectionDescriptor();
  virtual ~DnnRouteSelectionDescriptor();

  void validate();

  /////////////////////////////////////////////
  /// DnnRouteSelectionDescriptor members

  /// <summary>
  /// String representing a Data Network as defined in clause 9A of 3GPP
  /// TS 23.003; it shall contain either a DNN Network Identifier, or a full DNN
  /// with both the Network Identifier and Operator Identifier, as specified in
  /// 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in
  /// which the labels are separated by dots (e.g.
  /// \&quot;Label1.Label2.Label3\&quot;).
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<SscMode> &getSscModes();
  void setSscModes(std::vector<SscMode> const &value);
  bool sscModesIsSet() const;
  void unsetSscModes();
  /// <summary>
  ///
  /// </summary>
  std::vector<PduSessionType> &getPduSessTypes();
  void setPduSessTypes(std::vector<PduSessionType> const &value);
  bool pduSessTypesIsSet() const;
  void unsetPduSessTypes();
  /// <summary>
  /// Indicates whether MA PDU session establishment is allowed for this DNN.
  /// When set to value true MA PDU session establishment is allowed for this
  /// DNN.
  /// </summary>
  bool isAtsssInfo() const;
  void setAtsssInfo(bool const value);
  bool atsssInfoIsSet() const;
  void unsetAtsssInfo();

  friend void to_json(nlohmann::json &j, const DnnRouteSelectionDescriptor &o);
  friend void from_json(const nlohmann::json &j,
                        DnnRouteSelectionDescriptor &o);

protected:
  std::string m_Dnn;

  std::vector<SscMode> m_SscModes;
  bool m_SscModesIsSet;
  std::vector<PduSessionType> m_PduSessTypes;
  bool m_PduSessTypesIsSet;
  bool m_AtsssInfo;
  bool m_AtsssInfoIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DnnRouteSelectionDescriptor_H_ */