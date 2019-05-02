#include <iostream>

using namespace std;

int main()
{
  float a, b, c, d, r1, r2;

  cout << "Enter a, b, c" << endl;
  cin >> a >> b >> c;

  d = b * b - 4 * a * c;

  if (d == 0) 
  {
    cout << "Real and equal" << endl;
    cout << (-b / (2 * a)) << endl;
  }
  else if (d > 0)
  {
    cout << "Real and unequal" << endl;
    cout << (-b / (2 * a)) << endl;
    cout << (b / (2 * a)) << endl;
  }
  else
    cout << "Imaginary" << endl;
}