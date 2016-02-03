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


int main() {
  int N, Q, arraySize, indexN, indexArray, value;

  std::cin >> N >> Q;

  int** array;

  // allocate memory
  array = new int*[N];
  for (int i = 0; i < N; ++i) {
    std::cin >> arraySize;
    array[i] = new int[arraySize];
    for (int j = 0; j < arraySize; ++j) {
      std::cin >> value;
      array[i][j] = value;
    }
  }

  for (int q = 0; q < Q; ++q) {
    std::cin >> indexN >> indexArray;
    std::cout << array[indexN][indexArray] << std::endl;
  }

  // deallocate memory on the heap
  for (int i = 0; i < N; ++i)
    delete [] array[i];
  delete [] array;
  return 0;
}
