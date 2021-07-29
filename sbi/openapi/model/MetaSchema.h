/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * MetaSchema.h
 *
 * Defines the Meta Schema
 */

#ifndef MetaSchema_H_
#define MetaSchema_H_

#include "TagType.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Defines the Meta Schema
/// </summary>
class MetaSchema {
public:
  MetaSchema();
  virtual ~MetaSchema();

  void validate();

  /////////////////////////////////////////////
  /// MetaSchema members

  /// <summary>
  /// Represents the Identifier of a Meta schema.
  /// </summary>
  std::string getSchemaId() const;
  void setSchemaId(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  std::vector<TagType> &getMetaTags();
  void setMetaTags(std::vector<TagType> const &value);

  friend void to_json(nlohmann::json &j, const MetaSchema &o);
  friend void from_json(const nlohmann::json &j, MetaSchema &o);

protected:
  std::string m_SchemaId;

  std::vector<TagType> m_MetaTags;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* MetaSchema_H_ */