#include <iostream>

using namespace std;

int main()
{
  int A[10], n = 10, key;

  cout << "Enter 10 numbers: ";

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cout << "Enter a number to find: ";
  cin >> key;

  for (int i = 0; i < n; i++)
  {
    if (key == A[i])
      cout << "The key is at position " << i;
      return 0;
  }
  cout << "Key not found";
  return 0;
}