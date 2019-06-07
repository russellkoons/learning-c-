#include <iostream>

using namespace std;

// Smart Pointers
  // unique_ptr
    // Will delete the pointer automatically

  // shared_ptr
    // Can be used by multiple pointers

  // weak_ptr
    // Can be used multiple times but won't maintain reference counter

class Rectangle
{

};

void fun()
{
  Rectangle *p = new Rectangle();
  delete p; // You have to close pointers!

}

int main()
{
  while(1)
  {
    fun();
  }
}