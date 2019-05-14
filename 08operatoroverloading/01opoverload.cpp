#include <iostream>

using namespace std;

// We can Add or Subtract Classes with operators.

class Complex
{
  private:

    int real;
    int img;

  public:

    Complex(int r = 0, int i = 0)
    {
      real = r;
      img = i;
    }

    Complex add(Complex x)
    {
      Complex temp;
      temp.real = real + x.real;
      temp.img = img + x.img;
      return temp;
    }
};

int main()
{
  Complex c1(3, 7);
  Complex c2(5, 4);
  Complex c3 = c1.add(c2);
}