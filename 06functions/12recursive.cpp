#include <iostream>

using namespace std;

void fun(int n)
{
  if (n > 0)
  {
    cout << n << endl;
    fun(n - 1); // Calls the function until n = 0. Since it calls itself it is recursive
  }
}

int main()
{
  int x = 5;
  fun(x);
}