#include <iostream>

using namespace std;

class Rectangle
{ 
  private:
    int length;
    int breadth;

  public:

    Rectangle(int l = 1, int b = 1)
    {
      setLength(l);
      setBreadth(b);
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

class Cuboid:public Rectangle
{
  private:
    int height;

  public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
      height = h;
      setLength(l);
      setBreadth(b);
    }

    int getHeight()
    {
      return height;
    }

    void setHeight(int h)
    {
      if (h >= 0)
        height = h;
      else
        height = 1;
    }

    int volume()
    {
      return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
  Cuboid c(10, 5, 3);

  cout << c.getLength() << endl;
  cout << c.volume() << endl;
  cout << c.area() << endl;
}