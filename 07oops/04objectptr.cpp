#include <iostream>

using namespace std;

class Rectangle
{ public:
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
  Rectangle *p; 
  p = new Rectangle; // Object created in the Heap
  Rectangle *q = new Rectangle; // Simplified
  p -> length = 15;
  p -> breadth = 10;
  cout << p -> area();
}

  // Rectangle r; // Object created in the Stack
  // Rectangle *p; // Pointer
  // p = &r; // Pointing at the Rectangle object
  // r.length = 10;
  // p -> length = 10;
  // p -> breadth = 5;
  // cout << p -> area();