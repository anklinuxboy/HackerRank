/*
Copyright: Ankit Sharma
MIT License
This program implements a class box.
Sample Input
5
2 3 4 5
4
5
4
2 4 6 7

Sample Output
3 4 5
60
3 4 5
60
4 6 7
Boxes Created : 7
Boxes Destroyed : 7
TODO - Fix the assignment operator
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated,BoxesDestroyed;

class Box {
 public:
  Box() : length_(0), breadth_(0), height_(0) { BoxesCreated++; }

  Box(long length, long breadth, long height)
    : length_(length), breadth_(breadth), height_(height) { BoxesCreated++; }

  Box(const Box &rhs);

  ~Box() { BoxesDestroyed++; }

  Box& operator=(const Box &rhs);

  long getLength() { return length_; }

  long getBreadth() { return breadth_; }

  long getHeight() { return height_; }

  long long CalculateVolume() { return length_*breadth_*height_; }

 private:
  long length_, breadth_, height_;
};

Box::Box(const Box &rhs) {
  length_ = rhs.length_;
  breadth_ = rhs.breadth_;
  height_ = rhs.height_;
  BoxesCreated++;
}

Box& Box::operator=(const Box &rhs) {
  *this.length_ = rhs.length_;
  *this.breadth_ = rhs.breadth_;
  *this.height_ = rhs.height_;
  return this;
}

inline bool operator<(Box& a, Box& b) {
  if (a.getLength() < b.getLength())
    return true;
  else if (a.getBreadth() < b.getBreadth() && a.getLength() == b.getLength())
    return true;
  else if (a.getHeight() < b.getHeight() && a.getBreadth() == b.getBreadth()
                                        && a.getLength() == b.getLength())
    return true;

  return false;
}

ostream& operator<<(ostream& os, Box obj) {
  os << obj.getLength() << " " << obj.getBreadth() << " " << obj.getHeight();
  return os;
}



void check2()
{
int n;
cin>>n;
Box temp;
for(int i=0;i<n;i++)
    {
    int type;
    cin>>type;
    if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser"<<endl;
        }
            else
            {
                cout<<"Greater"<<endl;
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    BoxesCreated = 0;
    BoxesDestroyed = 0;
    check2();
    cout<<"Boxes Created : "<<BoxesCreated<<endl<<"Boxes Destroyed : "<<BoxesDestroyed<<endl;
}

