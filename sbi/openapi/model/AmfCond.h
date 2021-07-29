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
 * AmfCond.h
 *
 * Subscription to a set of AMFs, based on AMF Set Id and/or AMF Region Id
 */

#ifndef AmfCond_H_
#define AmfCond_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Subscription to a set of AMFs, based on AMF Set Id and/or AMF Region Id
/// </summary>
class AmfCond {
public:
  AmfCond();
  virtual ~AmfCond();

  void validate();

  /////////////////////////////////////////////
  /// AmfCond members

  /// <summary>
  /// String identifying the AMF Set ID (10 bits) as specified in clause 2.10.1
  /// of 3GPP TS 23.003. It is encoded as a string of 3 hexadecimal characters
  /// where the first character is limited to values 0 to 3 (i.e. 10 bits)
  /// </summary>
  std::string getAmfSetId() const;
  void setAmfSetId(std::string const &value);
  bool amfSetIdIsSet() const;
  void unsetAmfSetId();
  /// <summary>
  /// String identifying the AMF Set ID (10 bits) as specified in clause 2.10.1
  /// of 3GPP TS 23.003. It is encoded as a string of 3 hexadecimal characters
  /// where the first character is limited to values 0 to 3 (i.e. 10 bits)
  /// </summary>
  std::string getAmfRegionId() const;
  void setAmfRegionId(std::string const &value);
  bool amfRegionIdIsSet() const;
  void unsetAmfRegionId();

  friend void to_json(nlohmann::json &j, const AmfCond &o);
  friend void from_json(const nlohmann::json &j, AmfCond &o);

protected:
  std::string m_AmfSetId;
  bool m_AmfSetIdIsSet;
  std::string m_AmfRegionId;
  bool m_AmfRegionIdIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AmfCond_H_ */
