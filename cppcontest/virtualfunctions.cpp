/*
Copyright: Ankit Sharma
MIT License
This program 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#include <string>

class Person {
 public:
  virtual void getdata();
  virtual void putdata();
 protected:
  string name;
  int age;
};

void Person::getdata() {
  string s;
  int val;
  cin >> s;
  cin >> val;
  name = s;
  age = val;
}

void Person::putdata() {
  cout << name << " " << age << endl;
}

class Professor : public Person {
 public:
  Professor() {
    id = Professor::prof_id++;
  }
  static int prof_id;
  virtual void getdata();
  virtual void putdata();
 private:
  int id;
  int publications;
};

int Professor::prof_id = 1;

void Professor::getdata() {
  string s;
  int val, pubs;
  cin >> s >> val >> pubs;
  name = s;
  age = val;
  publications = pubs;
}

void Professor::putdata() {
  cout << name << " " << age << " " << publications << " " << id << endl;
}

class Student : public Person {
 public:
  Student() {
    id = Student::stu_id++;
  }
  static int stu_id;
  virtual void getdata();
  virtual void putdata();
 private:
  int id;
  int marks;
};

int Student::stu_id = 1;

void Student::getdata() {
  string s;
  int val, sum = 0;
  cin >> s;
  cin >> val;
  name = s;
  age = val;
  for (int i = 0; i < 6; ++i) {
    cin >> val;
    sum += val;
  }
  marks = sum;
}

void Student::putdata() {
  cout << name << " " << age << " " << marks << " " << id << endl;
}

int main() {
  int n, val;
  cin >> n;     // The number of objects that is going to be created.
  Person *per[n];

  for (int i = 0; i < n; ++i) {
    cin >> val;
    if (val == 1) 
      per[i] = new Professor;
        // If val is 1 current object is of type Professor        
    else 
      per[i] = new Student;     // Else the current object is of type Student
    per[i]->getdata();      // Get the data from the user.
  }

  for (int i = 0; i < n; ++i)
      per[i]->putdata();      // Print the required output for each object.

  return 0;
}
