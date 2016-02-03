#include <iostream>
#include <vector>
#include <sstream>


int main() {
  int fine;
  std::string s;
  std::string v;
  while (std::getline(std::cin,s)) {
    std::vector<int> actualDate;
    std::vector<int> returnDate;
    std::istringstream iss(s);
    std::string token1;
    while (std::getline(iss, token1, ' '))
      actualDate.push_back(std::stoi(token1));
    iss.clear();
    std::getline(std::cin, v);
    std::istringstream is(v);
    std::string token2;
    while (std::getline(is, token2, ' '))
      returnDate.push_back(std::stoi(token2));
    is.clear();
    if (actualDate[2] > returnDate[2]) {
      fine = 10000;
    } else if ((actualDate[2] == returnDate[2]) && (actualDate[1] > returnDate[1])) {
      fine = 500 * (actualDate[1] - returnDate[1]);
    } else if ((actualDate[1] == returnDate[1]) && (actualDate[0] > returnDate[0])) {
      fine = 15 * (actualDate[0] - returnDate[0]);
    } else if (actualDate[2] < returnDate[2]) {
      fine = 0;
    } else if ((actualDate[2] == returnDate[2]) && (actualDate[1] < returnDate[1])) {
      fine = 0;
    } else if ((actualDate[1] == returnDate[1]) && (actualDate[0] <= returnDate[0])) {
      fine = 0;
    }
    std::cout << fine << std::endl;
    actualDate.clear();
    returnDate.clear();
  }
  return 0;
}