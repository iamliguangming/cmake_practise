#include <string>
#include <vector>
namespace cmake_practice {
struct person {
  u_int8_t age;
  double height;
  double weight;
  std::string name;
};

struct classroom {
  std::vector<person> students;
  std::vector<person> teachers;

  double classroom_length;
  double classroom_width;

  uint32_t classroom_capacity;
};

} // namespace cmake_practice