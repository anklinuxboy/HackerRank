#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {
  int n;
  while (cin >> n) {
    int num;
    int sum1 = 0,
        sum2 = 0,
        sumDiff = 0;
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < n; ++j) {
        cin >> num;
        if (i == j)
          sum1 += num;
        if (i + j == n-1)
          sum2 += num;
      }      
    }
    sumDiff = sum1 - sum2;
    if (sumDiff < 0)
      sumDiff = -sumDiff;
    cout << sumDiff << endl;
  }
  return 0;
}
