/**
 * LMF Location
 * LMF Location Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * GADShape.h
 *
 * Common base type for GAD shapes.
 */

#ifndef GADShape_H_
#define GADShape_H_

#include "SupportedGADShapes.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Common base type for GAD shapes.
/// </summary>
class GADShape {
public:
  GADShape();
  virtual ~GADShape();

  void validate();

  /////////////////////////////////////////////
  /// GADShape members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const &value);

  friend void to_json(nlohmann::json &j, const GADShape &o);
  friend void from_json(const nlohmann::json &j, GADShape &o);

protected:
  SupportedGADShapes m_Shape;
};

} // namespace model
} // namespace server
} // namespace openapitools
} // namespace org

#endif /* GADShape_H_ */
