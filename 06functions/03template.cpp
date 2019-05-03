#include <iostream>

using namespace std;

template <class T>

T Max(T a, T b)
{
  return a > b ? a : b;
}

int main()
{
  int a = 10, b = 5;
  int c = Max(a, b);

  cout << c << endl;
}