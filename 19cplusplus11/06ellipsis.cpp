#include <iostream>

using namespace std;

// Ellipsis

int sum(int n, ...) // Ellipsis gets rip of the need to include number of parameters
{
  va_list list;
}

int main()
{
  sum(3, 10, 20, 30); // First number is the number of arguments!
  sum(6, 1, 2, 3, 4, 5, 6);
}