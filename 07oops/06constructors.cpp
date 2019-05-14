#include <iostream>

using namespace std;

// Constructors
  // Default Constructor
  // Non-parametized Constructor
  // Parametized Constructor
  // Copy Constructor

class Rectangle
{ 
  private: // Default
    int length;
    int breadth;

  public:
    Rectangle() // Non-parametized // unneccessary if you use default args in the parametized
    {
      length = 0;
      breadth = 0;
    }

    Rectangle(int l, int b) // Parametized
    {
      setLength(l);
      setBreadth(b);
    }

    Rectangle(Rectangle &rect) // Copy
    {
      length = rect.length;
      breadth = rect.breadth;
    }

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
  Rectangle r; // Calls a rectangle with l and b == 0
  Rectangle q(5, 10); // Makes a rectangle with l = 5 and b = 10

  r.setLength(10);
  r.setBreadth(5);

}