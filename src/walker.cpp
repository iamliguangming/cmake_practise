#include "walker.h"

namespace cmake_practice {
walker::walker(const std::string &name, const int age,
               const double personal_best) {
  age_ = age;
  personal_best_ = personal_best;
  name_ = name;
}

int walker::getAge() { return age_; }

double walker::getPersonalBest() { return personal_best_; }

std::string walker::getName() { return name_; }
} // namespace cmake_practice