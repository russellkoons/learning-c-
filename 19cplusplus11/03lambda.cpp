#include <iostream>

using namespace std;

// Lambda Expressions
  // [capture_list](parameter_list)->returntype{body};

int main()
{
  [](){cout << "Hello" << endl;}();
  [](int x, int y){cout << "Sum: " << x + y << endl;}(10, 5);
  int x = [](int x, int y){return x + y;}(10, 5);
  
  int a = 10;
  int b = 5;
  [a, b](){cout << a << " " << b << endl;}(); // Cannot modify captured variables without &
}