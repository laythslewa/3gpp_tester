/**
 * NhssUEAU
 * HSS UE Authentication Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Av5GHeAka.h
 *
 *
 */

#ifndef Av5GHeAka_H_
#define Av5GHeAka_H_

#include "AvType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class Av5GHeAka {
public:
  Av5GHeAka();
  virtual ~Av5GHeAka();

  void validate();

  /////////////////////////////////////////////
  /// Av5GHeAka members

  /// <summary>
  ///
  /// </summary>
  AvType getAvType() const;
  void setAvType(AvType const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getRand() const;
  void setRand(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getXresStar() const;
  void setXresStar(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getAutn() const;
  void setAutn(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getKausf() const;
  void setKausf(std::string const &value);

  friend void to_json(nlohmann::json &j, const Av5GHeAka &o);
  friend void from_json(const nlohmann::json &j, Av5GHeAka &o);

protected:
  AvType m_AvType;

  std::string m_Rand;

  std::string m_XresStar;

  std::string m_Autn;

  std::string m_Kausf;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* Av5GHeAka_H_ */
