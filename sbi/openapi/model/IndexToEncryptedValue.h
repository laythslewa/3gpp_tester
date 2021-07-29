/**
 * JOSE Protected Message Forwarding API
 * N32-f Message Forwarding Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndexToEncryptedValue.h
 *
 * Index to the encrypted value
 */

#ifndef IndexToEncryptedValue_H_
#define IndexToEncryptedValue_H_

#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Index to the encrypted value
/// </summary>
class IndexToEncryptedValue {
public:
  IndexToEncryptedValue();
  virtual ~IndexToEncryptedValue();

  void validate();

  /////////////////////////////////////////////
  /// IndexToEncryptedValue members

  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getEncBlockIndex() const;
  void setEncBlockIndex(int32_t const value);

  friend void to_json(nlohmann::json &j, const IndexToEncryptedValue &o);
  friend void from_json(const nlohmann::json &j, IndexToEncryptedValue &o);

protected:
  int32_t m_EncBlockIndex;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* IndexToEncryptedValue_H_ */
