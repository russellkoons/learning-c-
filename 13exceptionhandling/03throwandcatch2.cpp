#include <iostream>

using namespace std;

int division(int x, int y)
{
  if (y == 0)
    throw 101; // Throws an error to the main function
  return x / y;
}

int main()
{
  int a = 10, b = 0, c;

  try
  {
    c = division(a, b);
    cout << c << endl;
  }

  catch (int e) // Catches the thrown error from the function
  {
    cout << "Division by Zero" << endl;
    cout << "Error code: " << e << endl;
  }

  cout << "Bye" << endl;
}