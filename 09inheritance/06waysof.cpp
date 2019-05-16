#include <iostream>

using namespace std;

class Parent
{
  private:
    int x;
  protected:
    int y;
  public:
    int z;
};

class Child:public Parent // This gets the protected and public from Parent
{
  private:
    // Empty
  protected:
    // Protected of Parent int y
  public:
    // Public of Parent int z
};

class Grandchild:protected Child
{
  private:
    // Empty
  protected:
    // Protected and Public of Child int y, z
  public:
    // Empty
};

class Greatgrandchild:private Grandchild
{
  private:
    // Protected and Public of Grandchild int y, z
  protected:
    // Empty
  public:
    // Empty
};

int main()
{
  
}