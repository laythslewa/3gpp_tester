/**
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DatalinkReportingConfiguration.h
 *
 *
 */

#ifndef DatalinkReportingConfiguration_H_
#define DatalinkReportingConfiguration_H_

#include "DddTrafficDescriptor.h"
#include "DlDataDeliveryStatus.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class DatalinkReportingConfiguration {
public:
  DatalinkReportingConfiguration();
  virtual ~DatalinkReportingConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// DatalinkReportingConfiguration members

  /// <summary>
  ///
  /// </summary>
  std::vector<DddTrafficDescriptor> &getDddTrafficDes();
  void setDddTrafficDes(std::vector<DddTrafficDescriptor> const &value);
  bool dddTrafficDesIsSet() const;
  void unsetDddTrafficDes();
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
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  Snssai getSlice() const;
  void setSlice(Snssai const &value);
  bool sliceIsSet() const;
  void unsetSlice();
  /// <summary>
  ///
  /// </summary>
  std::vector<DlDataDeliveryStatus> &getDddStatusList();
  void setDddStatusList(std::vector<DlDataDeliveryStatus> const &value);
  bool dddStatusListIsSet() const;
  void unsetDddStatusList();

  friend void to_json(nlohmann::json &j,
                      const DatalinkReportingConfiguration &o);
  friend void from_json(const nlohmann::json &j,
                        DatalinkReportingConfiguration &o);

protected:
  std::vector<DddTrafficDescriptor> m_DddTrafficDes;
  bool m_DddTrafficDesIsSet;
  std::string m_Dnn;
  bool m_DnnIsSet;
  Snssai m_Slice;
  bool m_SliceIsSet;
  std::vector<DlDataDeliveryStatus> m_DddStatusList;
  bool m_DddStatusListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DatalinkReportingConfiguration_H_ */