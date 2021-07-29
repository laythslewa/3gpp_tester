/**
 * Nnwdaf_EventsSubscription
 * Nnwdaf_EventsSubscription Service API. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NetworkAreaInfo_2.h
 *
 * Describes a network area information in which the NF service consumer
 * requests the number of UEs.
 */

#ifndef NetworkAreaInfo_2_H_
#define NetworkAreaInfo_2_H_

#include "Ecgi.h"
#include "GlobalRanNodeId.h"
#include "Ncgi.h"
#include "Tai.h"
#include <nlohmann/json.hpp>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Describes a network area information in which the NF service consumer
/// requests the number of UEs.
/// </summary>
class NetworkAreaInfo_2 {
public:
  NetworkAreaInfo_2();
  virtual ~NetworkAreaInfo_2();

  void validate();

  /////////////////////////////////////////////
  /// NetworkAreaInfo_2 members

  /// <summary>
  /// Contains a list of E-UTRA cell identities.
  /// </summary>
  std::vector<Ecgi> &getEcgis();
  void setEcgis(std::vector<Ecgi> const &value);
  bool ecgisIsSet() const;
  void unsetEcgis();
  /// <summary>
  /// Contains a list of NR cell identities.
  /// </summary>
  std::vector<Ncgi> &getNcgis();
  void setNcgis(std::vector<Ncgi> const &value);
  bool ncgisIsSet() const;
  void unsetNcgis();
  /// <summary>
  /// Contains a list of NG RAN nodes.
  /// </summary>
  std::vector<GlobalRanNodeId> &getGRanNodeIds();
  void setGRanNodeIds(std::vector<GlobalRanNodeId> const &value);
  bool gRanNodeIdsIsSet() const;
  void unsetGRanNodeIds();
  /// <summary>
  /// Contains a list of tracking area identities.
  /// </summary>
  std::vector<Tai> &getTais();
  void setTais(std::vector<Tai> const &value);
  bool taisIsSet() const;
  void unsetTais();

  friend void to_json(nlohmann::json &j, const NetworkAreaInfo_2 &o);
  friend void from_json(const nlohmann::json &j, NetworkAreaInfo_2 &o);

protected:
  std::vector<Ecgi> m_Ecgis;
  bool m_EcgisIsSet;
  std::vector<Ncgi> m_Ncgis;
  bool m_NcgisIsSet;
  std::vector<GlobalRanNodeId> m_GRanNodeIds;
  bool m_GRanNodeIdsIsSet;
  std::vector<Tai> m_Tais;
  bool m_TaisIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* NetworkAreaInfo_2_H_ */