#include <iostream>

using namespace std;

// Calculate average of elements in array

int main()
{
  int n, i, sum = 0, count = 0;
  
  cout << "Enter number of elements: ";
  cin >> n;

  int A[n];

  for (i = 0; i < n; i++)
  {
    cout << i + 1 << ". Enter number: ";
    cin >> A[i];
  }

  for (int x: A)
  {
    sum += x;
  }

  cout << "Average is " << sum / n << endl;
}