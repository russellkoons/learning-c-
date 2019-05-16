#include <iostream>

using namespace std;

class Parent
{
  private:

  protected:

  public:

};

class Child:public Parent // This gets the protected and public from Parent
{
  private:
    // empty
  protected:
    // Protected of Parent
  public:
    // Public of Parent
};

class Grandchild:protected Child
{
  private:
    // empty
  protected:
    // Protected and public of Child
  public:
    // empty
};

class Greatgrandchild:private Grandchild
{
  private:
    // Protected and Public of Grandchild
  protected:
    // Empty
  public:
    // Empty
};

int main()
{
  
}