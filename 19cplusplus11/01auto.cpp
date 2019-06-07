#include <iostream>

using namespace std;

float fun()
{
  return 2.34f;
}

int main()
{
  double d = 12.3;
  int i = 9;
  auto x = 2 * d + i; // Auto chooses the type of variable automatically
  decltype(d) y = 14.7; // Grabs datatype from d
  cout << x << " " << y << endl;
}