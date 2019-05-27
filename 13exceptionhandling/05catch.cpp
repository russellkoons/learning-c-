#include <iostream>

using namespace std;

int main()
{
  int a = 10, b = 0, c;

  try
  {
    c = a / b;
    cout << c << endl;
  }

  catch (int e)
  {
    cout << "Division by Zero" << endl;
    cout << "Error code: " << e << endl;
  }

  catch(float e) // You can multiple catches for multiple datatype errors
  {

  }

  catch(...) // This one will catch any type of datatype not already defined
  {

  }

  cout << "Bye" << endl;
}