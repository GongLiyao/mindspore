/**
 * Copyright 2020 Huawei Technologies Co., Ltd
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

#include "minddata/dataset/api/python/pybind_register.h"
#include "minddata/dataset/engine/datasetops/batch_op.h"

namespace mindspore {
namespace dataset {

PYBIND_REGISTER(CBatchInfo, 0, ([](const py::module *m) {
                  (void)py::class_<BatchOp::CBatchInfo>(*m, "CBatchInfo")
                    .def(py::init<int64_t, int64_t, int64_t>())
                    .def("get_epoch_num", &BatchOp::CBatchInfo::get_epoch_num)
                    .def("get_batch_num", &BatchOp::CBatchInfo::get_batch_num);
                }));

PYBIND_REGISTER(DatasetOp, 0, ([](const py::module *m) {
                  (void)py::class_<DatasetOp, std::shared_ptr<DatasetOp>>(*m, "DatasetOp");
                }));

}  // namespace dataset
}  // namespace mindspore
