#include <iostream>

// Constants

using namespace std;

class Demo
{
  public:
    int x = 10;
    int y = 20;

    void Display()const // This makes the ints unmodifiable
    {
      // x++;
      cout << x << " " << y << endl;
    }
};

void fun(const int &x, int &y) // Adding const to params makes x unmodifiable also
{
  // x++; 
  cout << x << " " << y << endl;
}

int main()
{
  const int x = 10;

  // x++; Cannot modify the constant

  cout << x << endl;

  const int *ptr = &x;

  // ++*ptr; Cannot modify a pointer either
  
  cout << *ptr << endl;

  int y = 20;
  ptr = &y; // Cannot modify a const pointer either

  cout << *ptr << endl;

  Demo d;
  d.Display();

  int a = 10, b = 20;
  fun(a, b);
}