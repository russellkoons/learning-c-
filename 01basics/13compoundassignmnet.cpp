// int a = 10, b = 5, c = 15;

// int sum = 5;

// sum = sum + a; // 15

// sum += a; // also 15, this is shorter and faster

// sum = sum + a + b + c; // 35
// sum = sum + a; // 15
// sum = sum + b; // 20
// sum = sum + c; // 35
// sum += a; // 15 // }
// sum += b; // 20 // Ideal
// sum += c; // 35 // }

#include <iostream>

using namespace std;

int main()
{
  int sum = 10;
  int x = 5;
  sum += x;
  cout << sum;
}