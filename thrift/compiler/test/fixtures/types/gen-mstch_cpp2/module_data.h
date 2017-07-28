/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <array>
#include <cstddef>

#include <thrift/lib/cpp/Thrift.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"

namespace apache { namespace thrift { namespace fixtures { namespace types {

struct _has_bitwise_opsEnumDataStorage {
  using type = has_bitwise_ops;
  static constexpr const std::size_t size = 5;
  static constexpr const std::array<has_bitwise_ops, 5> values = {{
    has_bitwise_ops::none,
    has_bitwise_ops::zero,
    has_bitwise_ops::one,
    has_bitwise_ops::two,
    has_bitwise_ops::three,
  }};
  static constexpr const std::array<folly::StringPiece, 5> names = {{
    "none",
    "zero",
    "one",
    "two",
    "three",
  }};
};

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::apache::thrift::fixtures::types::has_bitwise_ops> {
  using storage_type =  ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage;
};

}} // apache::thrift
