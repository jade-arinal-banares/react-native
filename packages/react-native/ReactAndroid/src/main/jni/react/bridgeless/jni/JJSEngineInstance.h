/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fb/fbjni.h>
#include <jni.h>
#include <react/bridgeless/JSEngineInstance.h>

namespace facebook {

namespace react {

class JJSEngineInstance : public jni::HybridClass<JJSEngineInstance>,
                          public JSEngineInstance {
 public:
  static auto constexpr kJavaDescriptor =
      "Lcom/facebook/react/bridgeless/JSEngineInstance;";

 private:
  friend HybridBase;
};

} // namespace react
} // namespace facebook
