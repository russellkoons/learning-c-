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

int main()
{
  display();
  int a = 10, b = 15, c;
  c = add(a, b);
  cout << "Sum is " << c << endl;
}