#include <iostream>

using namespace std;

int main()
{
  int n, r, sum = 0, m = 0;

  cout << "Enter a number to reverse: ";
  cin >> n;

  while (n > 0) 
  {
    r = n % 10;
    m = m * 10 + r;
    n /= 10;
  }

  cout << m << endl;
}