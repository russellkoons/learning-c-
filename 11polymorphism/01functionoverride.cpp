#include <iostream>

using namespace std;

// Function Overriding

class Parent
{
  public:
    void display()
    {
      cout << "Display of Parent" << endl;
    }
};

class Child:public Parent
{
  public:
    void display() // This function overrides the function in Parent
    {
      cout << "Display of Child" << endl; 
    }
};

int main()
{
  Parent p;
  p.display();

  Child c;
  c.display();
}