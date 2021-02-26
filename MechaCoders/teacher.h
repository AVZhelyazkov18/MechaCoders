#pragma once
#include <string>
#include "team.h"

struct TEACHER {
    std::string teachersFName;
    std::string teachersLName;
    std::string teacherEmail;
    TEAM teams[10];
};