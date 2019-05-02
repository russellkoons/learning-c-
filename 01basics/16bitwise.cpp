// & and

// | or

// ^ xor

// ~ not

// <<

// >>

#include <iostream>

using namespace std;

int main()
{
  int x = 11, y = 7, z;
  z = x ^ y;

  char v = 5, u;
  u = v << 1;

  cout << z << " " << (int)u << endl;
}