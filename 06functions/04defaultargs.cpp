#include <iostream>

using namespace std;

int add(int x, int y, int z = 0)
{
  return x + y + z;
}

int main()
{
  int c = add(2, 5);

  cout << c << endl;

  c = add(2, 5, 8);
  
  cout << c << endl;
}