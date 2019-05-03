#include <iostream>

using namespace std;

int g = 0; // Global variable. Always accessible

int fun()
{
  int a = 5; // Local variable. Only accessible within the function.
  g = g + a;
  cout << g << endl;
}

int main()
{
  g = 15;
  fun();
  g++;
  cout << g << endl;
}