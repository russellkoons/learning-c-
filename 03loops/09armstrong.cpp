#include <iostream>

using namespace std;

int main()
{
  int n, m, r, sum = 0;

  cout << "Enter a num: ";
  cin >> n;
  m = n;
  
  while (n > 0) 
  {
    r = n % 10;
    n /= 10;
    sum += (r * r * r);
  }

  if (m == sum)
    cout << "Armstrong" << endl;
  else
    cout << "Not Armstrong" << endl;
}