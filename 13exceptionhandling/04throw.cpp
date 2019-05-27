#include <iostream>

using namespace std;

class MyException:public exception
{
};

int division(int x, int y)
{
  if (y == 0)
    throw MyException(); // Throws the class. You can throw anything
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

  catch(MyException e) // Catches the thrown error from the function
  {
    cout << "Division by Zero" << endl;
  }

  cout << "Bye" << endl;
}