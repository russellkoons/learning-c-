#include <iostream>

using namespace std;

class Base
{
  public:
    void fun1();
    void fun2();
    void fun3();
};

class Derived:public Base
{
  public:
    void fun4();
    void fun5();
};

int main()
{
  Base b; // Calls all functions in Base
  b.fun1();
  b.fun2();
  b.fun3();

  Derived d; // Calls all functions in Base and Derived
  d.fun1();
  d.fun2();
  d.fun3();
  d.fun4();
  d.fun5();

  Base *p; // Even though this pointer is attached to Derived it cannot call Derived functions
  p = new Derived();
  p->fun1();
  p->fun2();
  p->fun3();

  // Derived *p;
  // p = new Base(); This isn't possible!
}