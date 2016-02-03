/*
Copyright: Ankit Sharma
MIT License
This program calculates the maximum number of workshops a student can attend.

Sample input:
6
1 3 0 5 5 8
1 1 6 2 4 1

Sample output:
4
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <utility>
struct Workshop {
  int start_time;
  int duration;
  int end_time;
};

struct Available_Workshops {
  int N;
  struct Workshop *workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int N) {
  Available_Workshops *awoks = new Available_Workshops;
  awoks->N = N;
  awoks->workshops = new Workshop[N];

  for (int i = 0; i < N; ++i) {
    awoks->workshops[i].start_time = start_time[i];
    awoks->workshops[i].duration = duration[i];
    awoks->workshops[i].end_time = start_time[i] + duration[i];
  }

  return awoks;
}

bool compare(const pair<int, int>&i, const pair<int, int>&j) {
    return i.second < j.second;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
  vector<pair<int, int> > vec;
  int count = 1;
  for (int j = 0; j < ptr->N; ++j) {
    pair<int, int> dummy;
    dummy.first = ptr->workshops[j].start_time;
    dummy.second = ptr->workshops[j].end_time;
    vec.push_back(dummy);
  }

  sort(vec.begin(), vec.end(), compare);

  int i = 0;
  for (int j = 1; j < ptr->N; ++j) {
    if (vec[j].first >= vec[i].second) {
      count++;
      i = j;
    }
  }

  delete [] ptr->workshops;
  delete ptr;
  return count;
}

int main() {
  int n;
  cin >> n;
  int start_time[n], duration[n];
  for (int i = 0; i < n; ++i)
      cin >> start_time[i];
  for (int i = 0; i < n; ++i)
      cin >> duration[i];

  Available_Workshops * ptr;
  ptr = initialize(start_time, duration, n);
  cout << CalculateMaxWorkshops(ptr) << endl;
  return 0;
}
