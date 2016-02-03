#include <iostream>

using std::cout; using std::cin; using std::endl;


int main() {
  int *A;
  int n;
  while (cin >> n) {
    int sum = 0;
    A = new int [n];
    for(int i = 0; i < n; i++) {
      cin >> A[i];
      sum += A[i];
    }
    cout << sum << endl;
  }
  return 0;
}
