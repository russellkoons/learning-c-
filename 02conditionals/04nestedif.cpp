#include <iostream>

using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter 3 numbers" << endl;
  cin >> a >> b >> c;

  if (a > b && a > c)
    cout << "Max is " << a << endl;
  else
  {
    if (b < c)
      cout << "Max is " << c << endl;
    else
      cout << "Max is " << b << endl;
  }
}