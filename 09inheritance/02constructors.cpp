#include <iostream>
using namespace std;

class Base
{
  public:
    Base()
    {
      cout << "Default of Base" << endl;
    }

    Base(int x)
    {
      cout << "Param of Base " << x << endl;
    }
};

class Derived:public Base
{
  public:
    Derived()
    {
      cout << "Default of Derived" << endl;
    }

    Derived(int x, int a):Base(x) // This is how you pass something down via inheritance
    {
      cout << "Param of Derived " << a << endl;
    }
};

int main()
{
  Derived d;
  Derived e(10, 15);
}