#include <iostream>

using namespace std;

void display()
{
  cout << "Hello" << endl;
}

int add(int x, int y)
{
  int z;
  z = x + y;
  return z;
}

int maxim(int a, int b, int c) {
  if (a > b && a > c)
    return a;
  else if (b > c)
    return b;
  else
    return c;
}

int main()
{
  display();

  int a = 10, b = 15, c;
  c = add(a, b);
  cout << "Sum is " << c << endl;

  int x = 10, y = 15, z = 5, r;
  r = maxim(x, y, z);
  
  cout << "Maximum is " << r << endl;

  return 0;
}