#include <iostream>

using namespace std;

class Rectangle
{ public: // If you don't include public it is private and cannot be accessed outside the class
  int length;
  int breadth;

  int area()
  {
    return length * breadth;
  }

  int perimeter()
  {
    return 2 * (length + breadth);
  }
};

int main()
{
  Rectangle r1, r2; // r1 and r2 are variables of Rectangles
  
  r1.length = 10;
  r1.breadth = 5;
  r2.length = 15;
  r2.breadth = 10;

  cout << r1.area() << endl; // Returns area of the first rectangle
  cout << r2.area() << endl;
}