/**
 * Nchf_OfflineOnlyCharging
 * OfflineOnlyCharging Service © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Helpers.h
 *
 * This is the helper class for models and primitives
 */

#ifndef Helpers_H_
#define Helpers_H_

#include <ctime>
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace helpers {

std::string toStringValue(const std::string &value);
std::string toStringValue(const int32_t &value);
std::string toStringValue(const int64_t &value);
std::string toStringValue(const bool &value);
std::string toStringValue(const float &value);
std::string toStringValue(const double &value);

bool fromStringValue(const std::string &inStr, std::string &value);
bool fromStringValue(const std::string &inStr, int32_t &value);
bool fromStringValue(const std::string &inStr, int64_t &value);
bool fromStringValue(const std::string &inStr, bool &value);
bool fromStringValue(const std::string &inStr, float &value);
bool fromStringValue(const std::string &inStr, double &value);
template <typename T>
bool fromStringValue(const std::vector<std::string> &inStr,
                     std::vector<T> &value) {
  try {
    for (auto &item : inStr) {
      T itemValue;
      if (fromStringValue(item, itemValue)) {
        value.push_back(itemValue);
      }
    }
  } catch (...) {
    return false;
  }
  return value.size() > 0;
}
template <typename T>
bool fromStringValue(const std::string &inStr, std::vector<T> &value,
                     char separator = ',') {
  std::vector<std::string> inStrings;
  std::istringstream f(inStr);
  std::string s;
  while (std::getline(f, s, separator)) {
    inStrings.push_back(s);
  }
  return fromStringValue(inStrings, value);
}

} // namespace helpers
} // namespace server
} // namespace openapitools
} // namespace org

#endif // Helpers_H_