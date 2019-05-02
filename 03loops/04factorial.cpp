#include <iostream>

using namespace std;

int main()
{
  int n, i, total = 1;

  cout << "Enter a number to factorize: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    total *= i;
  }

  cout << "The factorial of " << n << " is " << total << endl;
}