#include <iostream>

using namespace std;

int add(int x, int y)
{
  return x + y;
}

int add(int x, int y, int z)
{
  return x + y + z;
}

float add(float x, float y)
{
  return x + y;
}

int main()
{
  int a = 10, b = 5, c, d;

  c = add(a, b);
  cout << c << endl;

  d = add(a, b, c);
  cout << d << endl;

  float i = 2.5f, j = 3.5f, k;
  k = add(i, j);
  cout << k << endl;
}