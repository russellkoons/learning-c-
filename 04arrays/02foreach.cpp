#include <iostream>

using namespace std;

int main()
{
  int A[6] = {1, 2, 3, 4, 5, 6};
  for (int &x:A) // Ampersand makes it so it will change the number in the array
  {
    cout << ++x << endl;
  }
  for (int x:A)
  {
    cout << x << endl;
  }
}