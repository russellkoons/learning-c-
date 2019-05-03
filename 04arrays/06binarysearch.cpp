#include <iostream>

using namespace std;

// Array must be sorted for binary search to work

int main()
{
  int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
  int l = 0, h = 9, key, mid;

  cout << "Enter key: ";
  cin >> key;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == A[mid])
    {
      cout << "Found at " << mid << endl;
      return 0;
    }
    else if (key < A[mid])
    {
      h = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  cout << "Key not found" << endl;
  return 0;
}