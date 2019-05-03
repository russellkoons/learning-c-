#include <iostream>

using namespace std;

int fun() 
{
  static int v = 0; // Keeps the variable from being deleted but can't be accessed by other fns
  int a = 5;
  v++;
  cout << a << " " << v << endl;
}

int main()
{
  fun();
  fun();
  fun();
}