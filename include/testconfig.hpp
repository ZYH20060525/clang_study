#pragma once
#include "system/json.hpp"
using json = nlohmann::json;
json userData = {
    {"json版本号", 1.0},
    {"底盘",
     {"马达",
      {"左前", {{"端口", 1}, {"正反", 0}, {"齿轮", 1}}},
      {"左后", {{"端口", 1}, {"正反", 0}, {"齿轮", 1}}},
      {"右前", {{"端口", 1}, {"正反", 0}, {"齿轮", 1}}},
      {"右后", {{"端口", 1}, {"正反", 0}, {"齿轮", 1}}}},
     {"ADI",
      {"陀螺仪", 1}}},

};
