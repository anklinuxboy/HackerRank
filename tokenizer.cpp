#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::string s;
  std::vector<int> v;
  std::istringstream iss(myText);
  std::string token;
  while (std::getline(iss, token, '-'))
  {
      std::cout << token << std::endl;
  }
  return 0;
}

