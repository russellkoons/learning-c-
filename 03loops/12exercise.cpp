#include <iostream>

using namespace std;

int main()
{
  int n, m, o = 0, r;

  cout << "Enter a number: ";
  cin >> n;

  m = n;

  while (n > 0)
  {
    r = n % 10;
    n /= 10;
    o = o * 10 + r;
  }

  if (m == o)
    cout << "palindrone" << endl;
  else
    cout << "not a palindrome" << endl;
}