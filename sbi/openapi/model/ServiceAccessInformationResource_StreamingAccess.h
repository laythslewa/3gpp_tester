/**
 * M5_ServiceAccessInformation
 * 5GMS AF M5 Service Access Information API © 2021, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceAccessInformationResource_StreamingAccess.h
 *
 *
 */

#ifndef ServiceAccessInformationResource_StreamingAccess_H_
#define ServiceAccessInformationResource_StreamingAccess_H_

#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class ServiceAccessInformationResource_StreamingAccess {
public:
  ServiceAccessInformationResource_StreamingAccess();
  virtual ~ServiceAccessInformationResource_StreamingAccess();

  void validate();

  /////////////////////////////////////////////
  /// ServiceAccessInformationResource_StreamingAccess members

  /// <summary>
  /// Uniform Resource Locator, comforming with the URI Generic Syntax specified
  /// in IETF RFC 3986.
  /// </summary>
  std::string getMediaPlayerEntry() const;
  void setMediaPlayerEntry(std::string const &value);
  bool mediaPlayerEntryIsSet() const;
  void unsetMediaPlayerEntry();

  friend void
  to_json(nlohmann::json &j,
          const ServiceAccessInformationResource_StreamingAccess &o);
  friend void from_json(const nlohmann::json &j,
                        ServiceAccessInformationResource_StreamingAccess &o);

protected:
  std::string m_MediaPlayerEntry;
  bool m_MediaPlayerEntryIsSet;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* ServiceAccessInformationResource_StreamingAccess_H_ */
