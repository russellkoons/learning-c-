#include <iostream>

using namespace std;

// Access Specifiers

class Base
{
  private: // Only accessible inside class
    int a;

  protected: // Accessible inside derived class
    int b;

  public: // Always accessible
    int c;
    void funBase()
    {
      a = 10;
      b = 20;
      c = 30;
    }
};

class Derived:Base
{
  public:
    void funDerived()
    {
      // a = 1; // Not accessible
      b = 2; // Accessible
      c = 3; // Accessible
    }
};

int main()
{
  Base x;
  // x.a = 15; // Not accessible
  // x.b = 30; // Not accessible
  x.c = 90; // Accessible
}