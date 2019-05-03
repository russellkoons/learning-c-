#include <iostream>

using namespace std;

int main()
{
  // int A[5] = {1, 2, 3, 4, 5};
  // int *p;
  // p = new int[5]; // This creates an array in the Heap as opposed to the main
  // A[2] = 15;
  // p[2] = 15;
  // cout << p[2];
  // cout << sizeof A;

  // delete []p;
  // return 0;

  int *p = new int[20];
  p[1] = 17;
  delete []p; // Deletes the pointer array

  p = new int[40];
  cout << p[1];
}