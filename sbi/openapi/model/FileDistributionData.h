/**
 * VAE_FileDistribution
 * API for VAE File Distribution Service © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0-alpha.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FileDistributionData.h
 *
 * Represents an individual File Distribution resource for a V2X group ID.
 */

#ifndef FileDistributionData_H_
#define FileDistributionData_H_

#include "FileList.h"
#include "GeographicArea.h"
#include "LocalMbmsInfo.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Represents an individual File Distribution resource for a V2X group ID.
/// </summary>
class FileDistributionData {
public:
  FileDistributionData();
  virtual ~FileDistributionData();

  void validate();

  /////////////////////////////////////////////
  /// FileDistributionData members

  /// <summary>
  /// Represents the group ID for which a V2X message is addressed.
  /// </summary>
  std::string getGroupId() const;
  void setGroupId(std::string const &value);
  bool groupIdIsSet() const;
  void unsetGroupId();
  /// <summary>
  ///
  /// </summary>
  std::vector<FileList> &getFileLists();
  void setFileLists(std::vector<FileList> const &value);
  /// <summary>
  ///
  /// </summary>
  std::string getServiceClass() const;
  void setServiceClass(std::string const &value);
  bool serviceClassIsSet() const;
  void unsetServiceClass();
  /// <summary>
  ///
  /// </summary>
  GeographicArea getGeoArea() const;
  void setGeoArea(GeographicArea const &value);
  /// <summary>
  /// String representing a bit rate that shall be formatted as follows.
  /// </summary>
  std::string getMaxBitrate() const;
  void setMaxBitrate(std::string const &value);
  /// <summary>
  /// Unsigned Integer, i.e. only value 0 and integers above 0 are permissible.
  /// </summary>
  int32_t getMaxDelay() const;
  void setMaxDelay(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  LocalMbmsInfo getLocalMbmsInfo() const;
  void setLocalMbmsInfo(LocalMbmsInfo const &value);
  bool localMbmsInfoIsSet() const;
  void unsetLocalMbmsInfo();
  /// <summary>
  ///
  /// </summary>
  bool isLocalMbmsActInd() const;
  void setLocalMbmsActInd(bool const value);
  bool localMbmsActIndIsSet() const;
  void unsetLocalMbmsActInd();
  /// <summary>
  /// A string used to indicate the features supported by an API that is used as
  /// defined in clause 6.6 in 3GPP TS 29.500. The string shall contain a
  /// bitmask indicating supported features in hexadecimal representation Each
  /// character in the string shall take a value of \&quot;0\&quot; to
  /// \&quot;9\&quot;, \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to
  /// \&quot;F\&quot; and shall represent the support of 4 features as described
  /// in table 5.2.2-3. The most significant character representing the
  /// highest-numbered features shall appear first in the string, and the
  /// character representing features 1 to 4 shall appear last in the string.
  /// The list of features and their numbering (starting with 1) are defined
  /// separately for each API. If the string contains a lower number of
  /// characters than there are defined features for an API, all features that
  /// would be represented by characters that are not present in the string are
  /// not supported
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const &value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();

  friend void to_json(nlohmann::json &j, const FileDistributionData &o);
  friend void from_json(const nlohmann::json &j, FileDistributionData &o);

protected:
  std::string m_GroupId;
  bool m_GroupIdIsSet;
  std::vector<FileList> m_FileLists;

  std::string m_ServiceClass;
  bool m_ServiceClassIsSet;
  GeographicArea m_GeoArea;

  std::string m_MaxBitrate;

  int32_t m_MaxDelay;

  LocalMbmsInfo m_LocalMbmsInfo;
  bool m_LocalMbmsInfoIsSet;
  bool m_LocalMbmsActInd;
  bool m_LocalMbmsActIndIsSet;
  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* FileDistributionData_H_ */
