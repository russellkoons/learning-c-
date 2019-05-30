#include <iostream>

using namespace std;

class Test
{
  int *p;

  public:
    Test()
    {
      p = new int[10]; // If you define a pointer you must delete in destructor
      cout << "Test Created" << endl;
    }

    ~Test() // ~ makes it a destructor
    {
      delete []p; // Deletes int from memory
      cout << "Test Destroyed" << endl;
    }
};

void fun()
{
  Test t;
}

int main()
{
  fun();

  Test t; // Creates and then deletes t

  Test *p = new Test(); // If making a pointer you have to manually delete

  delete p;
}