#include <iostream>

using namespace std;

int main()
{
  int a = 10, b = 0, c;

  try
  {
    if (b == 0)
      throw 101; // Throwing an error to the catch
    c = a / b;
    cout << c << endl;
  }

  catch (int e) // Catches the thrown error
  {
    cout << "Division by Zero" << endl;
    cout << "Error code: " << e << endl;
  }

  cout << "Bye" << endl;
}