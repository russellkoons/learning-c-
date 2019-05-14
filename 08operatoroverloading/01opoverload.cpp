#include <iostream>

using namespace std;

// We can Add or Subtract Classes with operators.

class Complex
{
  public:

    int real;
    int img;

    Complex(int r = 0, int i = 0)
    {
      real = r;
      img = i;
    }

    Complex add(Complex x) // These two functions do the exact same thing but are called
    {                      // but are called in different ways
      Complex temp;
      temp.real = real + x.real;
      temp.img = img + x.img;
      return temp;
    }

    Complex operator+(Complex x)
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
  Complex c4 = c1 + c2; // This will work the same way because of the operator+ function

  cout << c3.real << " + i" << c3.img << endl;
  cout << c4.real << " + i" << c4.img << endl;
}