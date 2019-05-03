#include <iostream>

using namespace std;

// Also swaps the variables! Way easier than pointers!

void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x = 10, y = 20;
  swap(x, y);
  cout << x << " " << y << endl;
}