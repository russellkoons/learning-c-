#include <iostream>

using namespace std;

// Inline functions

class Test
{
  public:
    void func1() // Automatically inline if defined in the class
    {
      cout << "Inline" << endl;
    }
    void func2();
    inline void func3();
};

void Test::func2() // Non inline if called outside of the class
{
  cout << "Non-inline" << endl;
}

void Test::func3() // Still inline because I called it inline in the class
{
  cout << "Also inline" << endl;
}

int main()
{
  Test t;
  t.func1();
  t.func2();
  t.func3();
}