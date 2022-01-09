#include "walker.h"
#include <iostream>

int main() {
  std::cout << "Hello" << std::endl;

  cmake_practice::walker walker_instance =
      cmake_practice::walker("Yurika", 15, 30.77);
  auto walker_pb = walker_instance.getPersonalBest();
  std::cout << walker_pb << std::endl;
  auto name = walker_instance.getName();
  std::cout << "Name is: " << name << std::endl;
}