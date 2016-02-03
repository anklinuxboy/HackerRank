/*
Copyright: Ankit Sharma
This program counts the digits that divide the number N
 */

#include <iostream>

int count_digits(int num);

int main() {
  int testCases, num;

  std::cin >> testCases;

  for (int i = 0; i < testCases; ++i) {
    std::cin >> num;
    std::cout << count_digits(num) << std::endl;
  }

  return 0;
}

int count_digits(int num) {
  int count = 0;
  int numCopy = num;
  while (numCopy != 0) {
    int digit = numCopy%10;
    if (digit != 0) {
      if (num%digit == 0)
        count++;
    }
    numCopy = numCopy/10;
  }
  return count;
}
