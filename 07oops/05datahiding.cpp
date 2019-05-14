#include <iostream>

using namespace std;

// Data Hiding
  // get... is an accessor function
  // set... is a mutator function
  // They are both property functions

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

    int perimeter()
    {
      return 2 * (length + breadth);
    }

    void setLength(int l)
    {
      if (l >= 0)
        length = l;
      else
      {
        cout << "Length cannot be less than 0";
        length = 0;
      }
    }

    void setBreadth(int b)
    {
      if (b >= 0)
        breadth = b;
      else
        breadth = 0;
    }

    int getLength() 
    {
      return length;
    }

    int getBreadth() 
    {
      return breadth;
    }
};

int main()
{
  Rectangle r;
  r.setLength(10);
  r.setBreadth(5);
  cout << r.area() << endl;
  cout << "Length is " << r.getLength() << endl;
}