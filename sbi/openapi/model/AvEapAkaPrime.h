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
 * AvEapAkaPrime.h
 *
 *
 */

#ifndef AvEapAkaPrime_H_
#define AvEapAkaPrime_H_

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
class AvEapAkaPrime {
public:
  AvEapAkaPrime();
  virtual ~AvEapAkaPrime();

  void validate();

  /////////////////////////////////////////////
  /// AvEapAkaPrime members

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
  std::string getXres() const;
  void setXres(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getAutn() const;
  void setAutn(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getCkPrime() const;
  void setCkPrime(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getIkPrime() const;
  void setIkPrime(std::string const &value);

  friend void to_json(nlohmann::json &j, const AvEapAkaPrime &o);
  friend void from_json(const nlohmann::json &j, AvEapAkaPrime &o);

protected:
  AvType m_AvType;

  std::string m_Rand;

  std::string m_Xres;

  std::string m_Autn;

  std::string m_CkPrime;

  std::string m_IkPrime;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* AvEapAkaPrime_H_ */
