#include <iostream>

using namespace std;

// Final Keyword

class Parent // final // Final makes it so you cannot inherit from this class
{
  virtual void show() final {} // Can only be final if it's virtual
};

class Child:Parent
{
  // void show() {}
};

int main()
{

}