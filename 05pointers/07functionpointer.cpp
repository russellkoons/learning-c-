#include <iostream>

using namespace std;

void display()
{
  cout << "Hello" << endl;
}

int max(int x, int y)
{
  return x > y ? x : y;
}

int min(int x, int y)
{
  return x < y ? x : y;
}

int main()
{
  // void (*fp)(); // Declaration
  // fp = display; // Initialization
  // (*fp)(); // Function Call

  int (*fq)(int, int);
  fq = max;
  (*fq)(10, 5);

  // int (*fr)(int, int);
  // fr = min;
  // (*fr)(10, 5);
}