#pragma once
#include <string>

namespace cmake_practice {

class walker {
private:
  int age_;
  double personal_best_;
  std::string name_;

public:
  walker(const std::string &name, const int age, const double personal_best);

  int getAge();

  double getPersonalBest();

  std::string getName();
};

} // namespace cmake_practice
