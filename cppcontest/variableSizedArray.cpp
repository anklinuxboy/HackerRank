/*
Copyright: Ankit Sharma
MIT License
This program prints the element of array given a particular input. Read over
N sequences. First item of sequence is size of array, rest are the values.
Read over Q queries, first item is index of N, second item is index of value.

Sample Input
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output
5
9
 */

#include <iostream>
#include <vector>

int main() {
  std::vector<std::vector<int> > array;

  int N, Q, arraySize, indexN, indexArray, value;

  std::cin >> N >> Q;

  for (int i = 0; i < N; ++i) {
    std::cin >> arraySize;
    std::vector<int> dummy;
    for (int j = 0; j < arraySize; ++j) {
      std::cin >> value;
      dummy.push_back(value);
    }
    array.push_back(dummy);
  }

  for (int q = 0; q < Q; ++q) {
    std::cin >> indexN >> indexArray;
    std::cout << array[indexN][indexArray] << std::endl;
    // vector can be indexed like array. No performance
    // overhead and no worries of managing the heap.
  }
  return 0;
}
