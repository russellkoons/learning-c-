#include <iostream>

using namespace std;

// Namespaces

namespace First
{
  void fun()
  {
    cout << "First" << endl;
  }
}

namespace Second
{
  void fun()
  {
    cout << "Second" << endl;
  }
}

using namespace First; // This calls the First namespace
int main()
{
  fun(); // Using First fun() because of above using
  Second::fun(); // This calls the Second fun()
}