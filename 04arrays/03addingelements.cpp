#include <iostream>

using namespace std;

int main()
{
  int A[5] = {1, 2, 3, 4, 5};
  int sum = 0, n = 5;

  for (int x:A)
  {
    sum += x;
  }
  cout << sum << endl;

  for (int i = 0; i < 5; i++)
  {
    sum += A[i];
  }

  cout << sum << endl;
}