#include <iostream>
#include <cstdio>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i; long l; long long ll; char c; float f; double d;
    cin >> i >> l >> ll >> c >> f >> d;
    cout << i << endl << l << endl << ll << endl << c << endl 
    << setprecision(numeric_limits<double>::digits10+2) << f << endl 
    << setprecision(numeric_limits<double>::digits10+2) << d << endl;
    // Complete the code.
    return 0;
}