#include <iostream>

using namespace std;

// Scope Resultion

class Rectangle
{
  private:
    int length;
    int breadth;
  public:
    int area()
    {
      return length * breadth;
    }
    int perimeter();
    void setLength(int l)
    {
      length = l;
    }
    void setBreadth(int b)
    {
      breadth = b;
    }
};

int Rectangle::perimeter() // This sets the function inside the class
{
  return 2 * (length + breadth);
}

int main()
{
  Rectangle r;
  r.setLength(10);
  r.setBreadth(5);

  cout << r.area() << endl;
  cout << r.perimeter() << endl;
}