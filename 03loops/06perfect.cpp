#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0;

  cout << "Enter n: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
      sum += i;
  }

  cout << "Sum of factors is " << sum << endl;
  if (2 * n == sum)
    cout << "It is also a perfect number" << endl;
}