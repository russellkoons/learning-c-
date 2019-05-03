#include <iostream>

using namespace std;

// Creates an array in the heap and then passes it to the main as opposed to deleting it

int* fun(int size)
{
  int *p = new int[size];
  for (int i = 0; i < size; i++)
  {
    p[i] = i + 1;
  }
  return p;
}

int main()
{
  int *ptr = fun(5);
}