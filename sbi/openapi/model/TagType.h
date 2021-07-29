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
 * TagType.h
 *
 * Defines the Tag Type
 */

#ifndef TagType_H_
#define TagType_H_

#include "KeyType.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Defines the Tag Type
/// </summary>
class TagType {
public:
  TagType();
  virtual ~TagType();

  void validate();

  /////////////////////////////////////////////
  /// TagType members

  /// <summary>
  ///
  /// </summary>
  std::string getTagName() const;
  void setTagName(std::string const &value);
  /// <summary>
  ///
  /// </summary>
  KeyType getKeyType() const;
  void setKeyType(KeyType const &value);
  /// <summary>
  ///
  /// </summary>
  bool isSort() const;
  void setSort(bool const value);
  bool sortIsSet() const;
  void unsetSort();
  /// <summary>
  ///
  /// </summary>
  bool isPresence() const;
  void setPresence(bool const value);
  bool presenceIsSet() const;
  void unsetPresence();

  friend void to_json(nlohmann::json &j, const TagType &o);
  friend void from_json(const nlohmann::json &j, TagType &o);

protected:
  std::string m_TagName;

  KeyType m_KeyType;

  bool m_Sort;
  bool m_SortIsSet;
  bool m_Presence;
  bool m_PresenceIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* TagType_H_ */
