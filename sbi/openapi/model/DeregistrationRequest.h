/**
 * Nhss_UECM
 * HSS UE Context Management © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * DeregistrationRequest.h
 *
 * It represents the request body of the deregistration request sent by UDM to
 * HSS and contains the IMSI of the UE, the deregistration reason, etc.
 */

#ifndef DeregistrationRequest_H_
#define DeregistrationRequest_H_

#include "DeregistrationReason.h"
#include "Guami.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// It represents the request body of the deregistration request sent by UDM to
/// HSS and contains the IMSI of the UE, the deregistration reason, etc.
/// </summary>
class DeregistrationRequest {
public:
  DeregistrationRequest();
  virtual ~DeregistrationRequest();

  void validate();

  /////////////////////////////////////////////
  /// DeregistrationRequest members

  /// <summary>
  ///
  /// </summary>
  std::string getImsi() const;
  void setImsi(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  DeregistrationReason getDeregReason() const;
  void setDeregReason(DeregistrationReason const &value);
  /// <summary>
  ///
  /// </summary>
  Guami getGuami() const;
  void setGuami(Guami const &value);
  bool guamiIsSet() const;
  void unsetGuami();

  friend void to_json(nlohmann::json &j, const DeregistrationRequest &o);
  friend void from_json(const nlohmann::json &j, DeregistrationRequest &o);

protected:
  std::string m_Imsi;

  DeregistrationReason m_DeregReason;

  Guami m_Guami;
  bool m_GuamiIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* DeregistrationRequest_H_ */