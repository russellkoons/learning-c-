#include <iostream>

using namespace std;

// Virtual Destructor

class Base
{
  public:
    Base()
    {
      cout << "Base Constructor" << endl;
    }

    virtual ~Base() // Making it virtual makes it so it calls the destructor of the pointer
    {
      cout << "Base Destructor" << endl;
    }
};

class Derived:public Base
{
  public:
    Derived()
    {
      cout << "Derived Constructor" << endl;
    }

    ~Derived()
    {
      cout << "Derived Destructor" << endl;
    }
};

int main()
{
  Derived d;

  Base *p = new Derived();

  delete p;
}