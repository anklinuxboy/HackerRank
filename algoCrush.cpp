/*
Copyright: Ankit Sharma
This algorithm prints the maximum of a list after performing operations on 
their indices as given by the user
 */

#include <iostream>
#include <vector>
#include <algorithm>


int main() {
  size_t vecSize, numOps, index1, index2, val;

  std::cin >> vecSize >> numOps;

  std::vector<size_t> list(vecSize, 0);

  for (size_t i = 0; i < numOps; ++i) {
    std::cin >> index1 >> index2 >> val;
    if (index1 == index2) {
      list[index1-1] += val;
    } else {
      std::vector<size_t>::iterator iter1, iter2;
      iter1 = list.begin() + index1-1;
      iter2 = list.begin() + index2;
      std::transform(iter1, iter2, iter1,
                                    [val](size_t i) -> size_t {return i+val;});
    }
  }

  std::cout << *std::max_element(list.begin(), list.end()) << std::endl;
  return 0;
}
