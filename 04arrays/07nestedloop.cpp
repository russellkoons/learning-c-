#include <iostream>

using namespace std;

int main()
{
  int A[] = {1, 2, 3};

  for (int i = 0; i < 3; i++)
  {
    cout << A[i] << endl;
    for (int j = 0; j < 3; j++)
    {
      cout << A[j] << endl;
    }
  }
}