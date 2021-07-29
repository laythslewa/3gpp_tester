/**
 * TS 29.122 Common Data Types
 * Data types applicable to several APIs. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SponsorInformation.h
 *
 * Represents a sponsor information.
 */

#ifndef SponsorInformation_H_
#define SponsorInformation_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a sponsor information.
/// </summary>
class SponsorInformation {
public:
  SponsorInformation();
  virtual ~SponsorInformation();

  void validate();

  /////////////////////////////////////////////
  /// SponsorInformation members

  /// <summary>
  /// It indicates Sponsor ID.
  /// </summary>
  std::string getSponsorId() const;
  void setSponsorId(std::string const &value);
  /// <summary>
  /// It indicates Application Service Provider ID.
  /// </summary>
  std::string getAspId() const;
  void setAspId(std::string const &value);

  friend void to_json(nlohmann::json &j, const SponsorInformation &o);
  friend void from_json(const nlohmann::json &j, SponsorInformation &o);

protected:
  std::string m_SponsorId;

  std::string m_AspId;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* SponsorInformation_H_ */
