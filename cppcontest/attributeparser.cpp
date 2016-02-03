/*
Copyright: Ankit Sharma
MIT License

Sample Input:
4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value

Sample Output:
Name1
Not Found!
HelloWorld
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <utility>
#include <string>
#include <sstream>
#include <climits>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  multimap<string, pair<string, string> > tag;

  for (int i = 0; i <= N; ++i) {
    string s;
    cin.clear();
    fflush(stdin);
    std::getline(cin, s);
    //cout << s;
    string buff;
    stringstream ss(s);
    vector<string> tokens;
    while (ss >> buff)
      tokens.push_back(buff);
   
    if (tokens.size() > 1) {
      string t, val, str;
      t = tokens[0].substr(1, string::npos);
      //cout << "tag value " << t << endl;
      val = tokens[1];
      //cout << "attribute of tag " << val << endl;
      str = tokens[3].substr(1, tokens[3].size()-3);
      //cout << "attribute value " << str << endl;
      pair<string, string> dummy;
      dummy.first = val;
      dummy.second = str;
      tag.insert(make_pair(t, dummy));
    }
    cin.clear();
    fflush(stdin);
  }

  for (int i = 0; i < Q; ++i) {
    string q;
    cin.clear();
    fflush(stdin);
    getline(cin, q);
    //cout << "q " << q << endl;
    int j = 0;
    while (q[j] != '~')
      j++;
    //cout << "j " << j << endl;
    string tags, attribute;
    tags = q.substr(j-4, 4);
    //cout << "tag " << tags << endl;
    attribute = q.substr(j+1, string::npos);
    //cout << "attribute " << attribute << endl;
    auto search = tag.find(tags);
    if (search != tag.end() && search->second.first == attribute) {
      cout << search->second.second << endl;
    } else {
      cout << "Not Found!" << endl;
    }
  }    
    
  return 0;
}