/*
Copyright: Ankit Sharma
MIT License
 */

#include <iostream>
#include <string>

int main() {
  //clock_t start = clock();
  int numOfCases;

  std::cin >> numOfCases;
  int n;
  for (int i = 0; i < numOfCases; ++i) {
    std::string dn("-1");
    std::cin >> n;
    for (int j = n; j >= 0; --j) {
      if (j % 3 == 0 && (n-j) % 5 == 0) {
        dn = std::string(j, '5');
        if (n-j)
          dn += std::string(n-j, '3');
        break;
      }
    }
    std::cout << dn << std::endl;
  }
  //clock_t ends = clock();
  //std::cout << "Time: " << static_cast<double>(ends - start)/ CLOCKS_PER_SEC
  //          << std::endl;
  return 0;
}
