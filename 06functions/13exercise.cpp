#include <iostream>

using namespace std;

// Using a fn to Linear Search

int search(int A[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (A[i] == key)
      return i;
  }
  return -1;
}

int main()
{
  int A[6] = {3, 17, 9, 42, 63, 69};
  int k;

  cout << "Enter key to be searched for: ";
  cin >> k;

  int index = search(A, 6, k);

  if (index >= 0)
    cout << "Element found at index " << index << endl;
  else
    cout << "Element not found" << endl;
}