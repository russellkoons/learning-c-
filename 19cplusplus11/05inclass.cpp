#include <iostream>

using namespace std;

// InClass Initializer and Declaration of Constructors

class Test
{
  int x = 10;
  int y = 13;

  public:
    Test(int a, int b)
    {
      x = a;
      y = b;
    }
    Test():Test(1,1) // One constructor can call another
    {}
};

int main()
{
  
}