#include <iostream>
#include <iomanip>

using std::cout; using std::cin; using std::endl;
using std::setprecision;

int main() {
  int n;
  while (cin >> n) {
    float posSum = 0,
          negSum = 0,
          zeroSum = 0;
    int num;
    for (int i = 0; i < n; ++i) {
      cin >> num;
      if (num > 0)
        ++posSum;
      else if (num < 0)
        ++negSum;
      else
        ++zeroSum;
    }
    cout << setprecision(3) << posSum/n << endl
         << negSum/n << endl
         << zeroSum/n << endl;     
  }
  return 0;
}
