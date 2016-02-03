/*
Copyright: Ankit Sharma
MIT License
This program overloads operators '+' and stream operator '<<' to add two complex
numbers and print to output stream

Sample Input
3+i4
5+i6

Sample Output
8+i10
 */

#include <iostream>
#include <string>

using namespace std;

class Complex {
 public:
  int a, b;
  void input(string s) {
    int v1 = 0;
    int i = 0;
    while (s[i] != '+') {
      v1 = v1*10 + s[i]-'0';
      i++;
    }
    while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
       i++;
    }
    int v2 = 0;
    while (i < (int)s.length()) {
      v2 = v2*10+s[i]-'0';
      i++;
    }
    a = v1;
    b = v2;
  }
};

inline Complex operator+(Complex lhs, Complex rhs) {
  lhs.a = lhs.a + rhs.a;
  lhs.b = lhs.b + rhs.b;
  return lhs;
}

ostream& operator<<(ostream& os, const Complex& obj) {
  os << obj.a << "+i" << obj.b;
  return os;
}

int main() {
  Complex x, y;
  string s1, s2;
  cin >> s1;
  cin >> s2;
  x.input(s1);
  y.input(s2);
  Complex z = x + y;
  cout << z << endl;
}
