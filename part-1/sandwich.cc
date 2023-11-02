// Sebastian Amilpa
// samilpa@csu.fullerton.edu
// @samilpa001
// Partners: @Fabianbev830
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};

  std::cout << "Your order: "
            << "a " << protein << " sandwich on " << bread << " with "
            << condiment << ".\n";

  return 0;
}