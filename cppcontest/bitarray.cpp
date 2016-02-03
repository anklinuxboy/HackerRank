/*
Copyright: Ankit Sharma
MIT License
This problem builds the sequence - 
a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31) using N, P, Q and S

unique number of elements in a
 */


#include <vector>
#include <iostream>
using namespace std;

int main() {
  long long N, S, P, Q;
  cin >> N >> S >> P >> Q;
  long long a[N];
  int count = 1;
  vector<bool> b;
  b = new bool[N];
  a[0] = (S & 0x7fffffff);
  b[a[0]] = true;
  for (long long i = 1; i < N; ++i){
    a[i] = ((a[i-1]*P + Q) & 0x7fffffff);
    if (b[a[i]] != true) {
      b[a[i]] = true;
      count++;
    }  
  }
    
  cout << count << endl;
  delete [] b;
  return 0;
}
