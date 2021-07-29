/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DccfInfo.h
 *
 * Information of a DCCF NF Instance
 */

#ifndef DccfInfo_H_
#define DccfInfo_H_

#include "NFType.h"
#include "Tai.h"
#include "TaiRange.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Information of a DCCF NF Instance
/// </summary>
class DccfInfo {
public:
  DccfInfo();
  virtual ~DccfInfo();

  void validate();

  /////////////////////////////////////////////
  /// DccfInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<NFType> &getServingNfTypeList();
  void setServingNfTypeList(std::vector<NFType> const &value);
  bool servingNfTypeListIsSet() const;
  void unsetServingNfTypeList();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> &getServingNfSetIdList();
  void setServingNfSetIdList(std::vector<std::string> const &value);
  bool servingNfSetIdListIsSet() const;
  void unsetServingNfSetIdList();
  /// <summary>
  ///
  /// </summary>
  std::vector<Tai> &getTaiList();
  void setTaiList(std::vector<Tai> const &value);
  bool taiListIsSet() const;
  void unsetTaiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<TaiRange> &getTaiRangeList();
  void setTaiRangeList(std::vector<TaiRange> const &value);
  bool taiRangeListIsSet() const;
  void unsetTaiRangeList();

  friend void to_json(nlohmann::json &j, const DccfInfo &o);
  friend void from_json(const nlohmann::json &j, DccfInfo &o);

protected:
  std::vector<NFType> m_ServingNfTypeList;
  bool m_ServingNfTypeListIsSet;
  std::vector<std::string> m_ServingNfSetIdList;
  bool m_ServingNfSetIdListIsSet;
  std::vector<Tai> m_TaiList;
  bool m_TaiListIsSet;
  std::vector<TaiRange> m_TaiRangeList;
  bool m_TaiRangeListIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DccfInfo_H_ */
