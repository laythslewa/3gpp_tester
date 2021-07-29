/**
 * Namf_Communication
 * AMF Communication Service © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UeContextCancelRelocateData.h
 *
 * Data structure used for cancellation of UE Context Relocation
 */

#ifndef UeContextCancelRelocateData_H_
#define UeContextCancelRelocateData_H_

#include "RefToBinaryData.h"
#include <nlohmann/json.hpp>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Data structure used for cancellation of UE Context Relocation
/// </summary>
class UeContextCancelRelocateData {
public:
  UeContextCancelRelocateData();
  virtual ~UeContextCancelRelocateData();

  void validate();

  /////////////////////////////////////////////
  /// UeContextCancelRelocateData members

  /// <summary>
  /// String identifying a Supi that shall contain either an IMSI, a network
  /// specific identifier, a Global Cable Identifier (GCI) or a Global Line
  /// Identifier (GLI) as specified in clause 2.2A of 3GPP TS 23.003. It shall
  /// be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;,
  /// where &lt;imsi&gt; shall be formatted according to clause 2.2 of 3GPP
  /// TS 23.003 that describes an IMSI.  - for a network specific identifier
  /// \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted according to
  /// clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI
  /// \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted
  /// according to clause 28.15.2 of 3GPP TS 23.003.  - for a GLI
  /// \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted
  /// according to clause 28.16.2 of 3GPP TS 23.003.To enable that the value is
  /// used as part of an URI, the string shall only contain characters allowed
  /// according to the \&quot;lower-with-hyphen\&quot; naming convention defined
  /// in 3GPP TS 29.501.
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const &value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  RefToBinaryData getRelocationCancelRequest() const;
  void setRelocationCancelRequest(RefToBinaryData const &value);

  friend void to_json(nlohmann::json &j, const UeContextCancelRelocateData &o);
  friend void from_json(const nlohmann::json &j,
                        UeContextCancelRelocateData &o);

protected:
  std::string m_Supi;
  bool m_SupiIsSet;
  RefToBinaryData m_RelocationCancelRequest;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* UeContextCancelRelocateData_H_ */
