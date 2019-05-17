#include <iostream>

using namespace std;

// Abstract Classes
  // If base has all concrete fns: reusability
  // If some concrete and some virtual: reusability and polymorphism
  // All virtual: polymorphism

class Base // Abstract Class
{
  public:
    void fun1() { cout << "Base fun1" << endl; }
    virtual void fun2() = 0; // Pure vitual fn: only to achieve polymorphism
};

class Derived:public Base
{
  public:
    void fun2() { cout << "Derived fun2" << endl; } // Derived must override virtual fn
};

int main()
{
  // Base b; Can't make the object
  Base *p = new Derived(); // Can make pointer
  p->fun1();
}