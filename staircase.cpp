#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main() {
  int num;
    while (cin >> num) {
      string s;
      for (int i = 1; i <= num; ++i) {
        s += '#';
        for (int j = num - i; j > 0; --j) {
          cout << ' ';
        }
        cout << s << endl;
      }
  }
  return 0;
}