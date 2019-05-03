#include <iostream>

using namespace std;

// Pointer finds the location of an element in the stack

int main()
{
  int x = 10;
  int *p; // Declaration of a pointer
  p = &x; // Initialization: & finds the address of a variable

  cout << x << endl;
  cout << &x << endl;
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl; // Dereferencing a pointer
}