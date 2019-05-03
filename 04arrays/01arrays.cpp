#include <iostream>

using namespace std;

// You know what an array is ya doof

int A[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // <-- You specify the size like so
float B[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f}; // Can be any data type
char C[5] = {'a', 'b', 'c', 'd', 'e'};
int D[] = {0, 1, 2, 3}; // Automatically makes the size 4 array
int E[5] = {1, 2, 3}; // Initializes an array. Last two elements will be 0

int main()
{
  cout << A[3] << endl;
  cout << A[8] << endl;
  for (int i = 0; i < 10; i++) // Can't just print an array, only one at a time
  {
    cout << A[i] << endl;
  }
  for (int x:D) // Can use this if you don't know how long the array is
    cout << x << endl;
  for (auto x:B) // Auto makes the variable whatever the arrays in the variable are
    cout << x << endl;
}