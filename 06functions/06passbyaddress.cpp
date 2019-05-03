#include <iostream>

using namespace std;

// You can swap the variables using pointers!

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp; 
}

int main()
{
  int x = 10, y = 20;
  swap(&x, &y);
  cout << x << " " << y << endl;
}