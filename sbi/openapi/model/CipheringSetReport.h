/**
 * LMF Broadcast
 * LMF Broadcast Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
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
 * CipheringSetReport.h
 *
 * Represents a report of Ciphering Data Set storage.
 */

#ifndef CipheringSetReport_H_
#define CipheringSetReport_H_

#include "StorageOutcome.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents a report of Ciphering Data Set storage.
/// </summary>
class CipheringSetReport {
public:
  CipheringSetReport();
  virtual ~CipheringSetReport();

  void validate();

  /////////////////////////////////////////////
  /// CipheringSetReport members

  /// <summary>
  /// Ciphering Data Set Identifier.
  /// </summary>
  int32_t getCipheringSetID() const;
  void setCipheringSetID(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  StorageOutcome getStorageOutcome() const;
  void setStorageOutcome(StorageOutcome const &value);

  friend void to_json(nlohmann::json &j, const CipheringSetReport &o);
  friend void from_json(const nlohmann::json &j, CipheringSetReport &o);

protected:
  int32_t m_CipheringSetID;

  StorageOutcome m_StorageOutcome;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* CipheringSetReport_H_ */
