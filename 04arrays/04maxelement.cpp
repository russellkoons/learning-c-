#include <iostream>

using namespace std;

int main()
{
  int A[5] = {9, 12, 97, 2, 46};
  int max = 0;

  for (int x:A)
  {
    if (x > max)
    {
      max = x;
    }
  }

  cout << max << endl;
}
