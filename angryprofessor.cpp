/*
Copyright: Ankit Sharma
First line: Test cases. Each test case contains two lines
Second line: N, number of students, K, least number needed for class to happen
Third line: time of students.
 */

#include <iostream>

int main(int argc, char* argv[]) {
  int numOfCases = 0;
  std::cin >> numOfCases;     // Enter the number of test cases
  while (numOfCases != 0) {
    int N = 0, K = 0;
    std::cin >> N >> K;
    int h = 0, count = 0;
    for (int i = 0; i < N; i++) {
      std::cin >> h;
      if (h <= 0) count++;
    }
    if (count >= K)
      std::cout << "NO" << std::endl;
    else
      std::cout << "YES" << std::endl;
    numOfCases--;
  }
  return 0;
}
