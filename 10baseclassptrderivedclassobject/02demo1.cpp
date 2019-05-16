#include <iostream>

using namespace std;

class Base
{
public:
  void fun1()
  {
    cout << "fun1 of Base" << endl;
  }
};

class Derived:public Base{
public:
  void fun2()
  {
    cout << "fun2 of Derived" << endl;
  }
};

int main()
{
  Derived d;
  Base *p = &d;
  
  Base b;
  // Derived *q = &b; Doesn't work

  d.fun1();
  d.fun2();

  p->fun1();
  // p->fun2(); Doesn't work

  return 0;
}