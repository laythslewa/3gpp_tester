/**
 * Nsmf_NIDD
 * SMF NIDD Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeliverReqData.h
 *
 * Representation of the payload of a Deliver Request.
 */

#ifndef DeliverReqData_H_
#define DeliverReqData_H_

#include "RefToBinaryData.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Representation of the payload of a Deliver Request.
/// </summary>
class DeliverReqData {
public:
  DeliverReqData();
  virtual ~DeliverReqData();

  void validate();

  /////////////////////////////////////////////
  /// DeliverReqData members

  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getMtData() const;
  void setMtData(RefToBinaryData const &value);

  friend void to_json(nlohmann::json &j, const DeliverReqData &o);
  friend void from_json(const nlohmann::json &j, DeliverReqData &o);

protected:
  RefToBinaryData m_MtData;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeliverReqData_H_ */
