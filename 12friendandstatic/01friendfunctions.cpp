#include <iostream>

using namespace std;

// Friend functions

class Test
{
  private:
    int a;
  protected:
    int b;
  public:
    int c;
    friend void fun(); // This allows an outside function to access all parts of the class
};

void fun()
{
  Test t;
  t.a = 15;
  t.b = 10;
  t.c = 5;
}

// Friend Classes

class Your; // Declaring the class so that it can be a friend class later

class My
{
  private:
    int a = 10;

  friend Your; // Making it a friend
};

class Your // Adding stuff to the Your class
{
  public:
    My m;
    void fun2()
    {
      cout << m.a << endl;
    }
};

int main()
{

}