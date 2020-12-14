/**
 * Copyright 2019-2020 Huawei Technologies Co., Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LITE_MINDSPORE_LITE_C_OPS_GELU_H_
#define LITE_MINDSPORE_LITE_C_OPS_GELU_H_

#include <vector>
#include <set>
#include <cmath>
#include "src/ops/primitive_c.h"

namespace mindspore {
namespace lite {
class GeLU : public PrimitiveC {
 public:
  GeLU() = default;
  ~GeLU() = default;
#ifdef PRIMITIVE_WRITEABLE
  MS_DECLARE_PARENT(GeLU, PrimitiveC);
  explicit GeLU(schema::PrimitiveT *primitive) : PrimitiveC(primitive) {}
//  int UnPackAttr(const Primitive &prim, const std::vector<AnfNodePtr> &inputs) override;
//  void SetApproximate(bool approximate);
#else
//  int UnPackToFlatBuilder(const schema::Primitive *primitive, flatbuffers::FlatBufferBuilder *fbb) override;
#endif
  int InferShape(std::vector<lite::Tensor *> inputs_, std::vector<lite::Tensor *> outputs_) override;
  //  bool GetApproximate() const;
};
}  // namespace lite
}  // namespace mindspore

#endif  // LITE_MINDSPORE_LITE_C_OPS_GELU_H_
