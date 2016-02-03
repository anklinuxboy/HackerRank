#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string; using std::stoi; using std::to_string;


int main() {
  string s;
  while (cin >> s) {
    string t(s.begin()+2, s.end()-2);
    string z(s.end()-2, s.end());
    string h(s.begin(), s.begin()+2);
    if (z == "AM" && h != "12") {
      cout << h << t << endl;
    } else if (z == "PM" && h == "12") {
      cout << h << t << endl;
    } else {
      int hours = stoi(h);
      hours = (hours+12)%24;
      h = to_string(hours);
      if (h == "0")
        h += "0";
      cout << h << t << endl;
    }
  }    
  return 0;
}