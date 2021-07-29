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

#include "DataToIntegrityProtectBlock.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

DataToIntegrityProtectBlock::DataToIntegrityProtectBlock() {
  m_MetaDataIsSet = false;
  m_RequestLineIsSet = false;
  m_StatusLine = "";
  m_StatusLineIsSet = false;
  m_HeadersIsSet = false;
  m_PayloadIsSet = false;
}

DataToIntegrityProtectBlock::~DataToIntegrityProtectBlock() {}

void DataToIntegrityProtectBlock::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json &j, const DataToIntegrityProtectBlock &o) {
  j = nlohmann::json();
  if (o.metaDataIsSet())
    j["metaData"] = o.m_MetaData;
  if (o.requestLineIsSet())
    j["requestLine"] = o.m_RequestLine;
  if (o.statusLineIsSet())
    j["statusLine"] = o.m_StatusLine;
  if (o.headersIsSet() || !o.m_Headers.empty())
    j["headers"] = o.m_Headers;
  if (o.payloadIsSet() || !o.m_Payload.empty())
    j["payload"] = o.m_Payload;
}

void from_json(const nlohmann::json &j, DataToIntegrityProtectBlock &o) {
  if (j.find("metaData") != j.end()) {
    j.at("metaData").get_to(o.m_MetaData);
    o.m_MetaDataIsSet = true;
  }
  if (j.find("requestLine") != j.end()) {
    j.at("requestLine").get_to(o.m_RequestLine);
    o.m_RequestLineIsSet = true;
  }
  if (j.find("statusLine") != j.end()) {
    j.at("statusLine").get_to(o.m_StatusLine);
    o.m_StatusLineIsSet = true;
  }
  if (j.find("headers") != j.end()) {
    j.at("headers").get_to(o.m_Headers);
    o.m_HeadersIsSet = true;
  }
  if (j.find("payload") != j.end()) {
    j.at("payload").get_to(o.m_Payload);
    o.m_PayloadIsSet = true;
  }
}

MetaData DataToIntegrityProtectBlock::getMetaData() const { return m_MetaData; }
void DataToIntegrityProtectBlock::setMetaData(MetaData const &value) {
  m_MetaData = value;
  m_MetaDataIsSet = true;
}
bool DataToIntegrityProtectBlock::metaDataIsSet() const {
  return m_MetaDataIsSet;
}
void DataToIntegrityProtectBlock::unsetMetaData() { m_MetaDataIsSet = false; }
RequestLine DataToIntegrityProtectBlock::getRequestLine() const {
  return m_RequestLine;
}
void DataToIntegrityProtectBlock::setRequestLine(RequestLine const &value) {
  m_RequestLine = value;
  m_RequestLineIsSet = true;
}
bool DataToIntegrityProtectBlock::requestLineIsSet() const {
  return m_RequestLineIsSet;
}
void DataToIntegrityProtectBlock::unsetRequestLine() {
  m_RequestLineIsSet = false;
}
std::string DataToIntegrityProtectBlock::getStatusLine() const {
  return m_StatusLine;
}
void DataToIntegrityProtectBlock::setStatusLine(std::string const &value) {
  m_StatusLine = value;
  m_StatusLineIsSet = true;
}
bool DataToIntegrityProtectBlock::statusLineIsSet() const {
  return m_StatusLineIsSet;
}
void DataToIntegrityProtectBlock::unsetStatusLine() {
  m_StatusLineIsSet = false;
}
std::vector<HttpHeader> &DataToIntegrityProtectBlock::getHeaders() {
  return m_Headers;
}
void DataToIntegrityProtectBlock::setHeaders(
    std::vector<HttpHeader> const &value) {
  m_Headers = value;
  m_HeadersIsSet = true;
}
bool DataToIntegrityProtectBlock::headersIsSet() const {
  return m_HeadersIsSet;
}
void DataToIntegrityProtectBlock::unsetHeaders() { m_HeadersIsSet = false; }
std::vector<HttpPayload> &DataToIntegrityProtectBlock::getPayload() {
  return m_Payload;
}
void DataToIntegrityProtectBlock::setPayload(
    std::vector<HttpPayload> const &value) {
  m_Payload = value;
  m_PayloadIsSet = true;
}
bool DataToIntegrityProtectBlock::payloadIsSet() const {
  return m_PayloadIsSet;
}
void DataToIntegrityProtectBlock::unsetPayload() { m_PayloadIsSet = false; }

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org