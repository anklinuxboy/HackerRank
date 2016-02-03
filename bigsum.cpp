/*
Copyright: Ankit Sharma
 */
#include <iostream>
#include <cstdlib>



int main() {
  int n;
  while (std::cin >> n) {
    int64_t array[n];
    int64_t sum = 0;
    for (int i = 0; i < n; ++i) {
      std::cin >> array[i];
      sum += array[i];
    }
    std::cout << sum << std::endl;
  } 
  return 0;
}
