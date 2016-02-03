/*
Copyright: Ankit Sharma
MIT License
Sum of XOR. Array is defined by rule-
A_x = A_x-1^x
Sample Input
3
2 4
2 8
5 9
Sample Output
7
9
15
 */

#include <iostream>

int main() {
  int N;
  int64_t f_index, l_index;

  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    std::cin >> f_index >> l_index;
     uint64_t val = f_index+l_index-1;
     uint64_t sum = 0;
      if (val%8 == 0 || val%8 == 1) {
        sum = val;
      } else if (val%8 == 2 || val%8 == 3) {
        sum = 2;
      } else if (val%8 == 4 || val%8 == 5) {
        sum = val + 2;
      } else if (val%8 == 6 || val%8 == 7) {
        sum = 0;
      }
    std::cout << sum << std::endl;
  }
  return 0;
}
