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
 * RecordMeta.h
 *
 * Meta data of a Record
 */

#ifndef RecordMeta_H_
#define RecordMeta_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Meta data of a Record
/// </summary>
class RecordMeta {
public:
  RecordMeta();
  virtual ~RecordMeta();

  void validate();

  /////////////////////////////////////////////
  /// RecordMeta members

  /// <summary>
  /// string with format \&quot;date-time\&quot; as defined in OpenAPI.
  /// </summary>
  std::string getTtl() const;
  void setTtl(std::string const &value);
  bool ttlIsSet() const;
  void unsetTtl();
  /// <summary>
  /// String providing an URI formatted according to RFC 3986
  /// </summary>
  std::string getCallbackReference() const;
  void setCallbackReference(std::string const &value);
  bool callbackReferenceIsSet() const;
  void unsetCallbackReference();
  /// <summary>
  /// A dictionary of {\&quot;tagName\&quot;: [ \&quot;tagValue\&quot;, ...] }.
  /// A tag name can be used to retrieve a Record. The tagValue are unique.
  /// </summary>
  std::map<std::string, std::vector<std::string>> &getTags();
  void setTags(std::map<std::string, std::vector<std::string>> const &value);
  bool tagsIsSet() const;
  void unsetTags();

  friend void to_json(nlohmann::json &j, const RecordMeta &o);
  friend void from_json(const nlohmann::json &j, RecordMeta &o);

protected:
  std::string m_Ttl;
  bool m_TtlIsSet;
  std::string m_CallbackReference;
  bool m_CallbackReferenceIsSet;
  std::map<std::string, std::vector<std::string>> m_Tags;
  bool m_TagsIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* RecordMeta_H_ */