#include <iostream>

using namespace std;

// Insertion Operator

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

    friend ostream & operator<<(ostream &o, Complex &c1);
};

ostream& operator<<(ostream &o, Complex &c1)
{
  cout << c1.real << " + i" << c1.img << endl;
}

int main()
{
  Complex c1(3, 7);

  int x = 10;
  cout << x << endl;
  cout << c1 << endl;
}